;;; $DOOMDIR/config.el -*- lexical-binding: t; -*-

;; Place your private configuration here! Remember, you do not need to run 'doom
;; sync' after modifying this file!


;; Some functionality uses this to identify you, e.g. GPG configuration, email
;; clients, file templates and snippets. It is optional.
(setq user-full-name "John Ciubuc"
      user-mail-address "john.ciubuc@pm.me")

;; Doom exposes five (optional) variables for controlling fonts in Doom:
;;
;; - `doom-font' -- the primary font to use
;; - `doom-variable-pitch-font' -- a non-monospace font (where applicable)
;; - `doom-big-font' -- used for `doom-big-font-mode'; use this for
;;   presentations or streaming.
;; - `doom-unicode-font' -- for unicode glyphs
;; - `doom-serif-font' -- for the `fixed-pitch-serif' face
;;
;; See 'C-h v doom-font' for documentation and more examples of what they
;; accept. For example:
;;
;;(setq doom-font (font-spec :family "Fira Code" :size 14 :weight 'semi-light)
;;     doom-variable-pitch-font (font-spec :family "Fira Sans" :size 14))
;;
;; If you or Emacs can't find your font, use 'M-x describe-font' to look them
;; up, `M-x eval-region' to execute elisp code, and 'M-x doom/reload-font' to
;; refresh your font settings. If Emacs still can't find your font, it likely
;; wasn't installed correctly. Font issues are rarely Doom issues!

;; There are two ways to load a theme. Both assume the theme is installed and
;; available. You can either set `doom-theme' or manually load a theme with the
;; `load-theme' function. This is the default:
(setq doom-theme 'doom-one)

;; This determines the style of line numbers in effect. If set to `nil', line
;; numbers are disabled. For relative line numbers, set this to `relative'.
(setq display-line-numbers-type t)

;; If you use `org' and don't want your org files in the default location below,
;; change `org-directory'. It must be set before org loads!
(setq org-directory "~/org/")


;; Whenever you reconfigure a package, make sure to wrap your config in an
;; `after!' block, otherwise Doom's defaults may override your settings. E.g.
;;
;;   (after! PACKAGE
;;     (setq x y))
;;
;; The exceptions to this rule:
;;
;;   - Setting file/directory variables (like `org-directory')
;;   - Setting variables which explicitly tell you to set them before their
;;     package is loaded (see 'C-h v VARIABLE' to look up their documentation).
;;   - Setting doom variables (which start with 'doom-' or '+').
;;
;; Here are some additional functions/macros that will help you configure Doom.
;;
;; - `load!' for loading external *.el files relative to this one
;; - `use-package!' for configuring packages
;; - `after!' for running code after a package has loaded
;; - `add-load-path!' for adding directories to the `load-path', relative to
;;   this file. Emacs searches the `load-path' when you load packages with
;;   `require' or `use-package'.
;; - `map!' for binding new keys
;;
;; To get information about any of these functions/macros, move the cursor over
;; the highlighted symbol at press 'K' (non-evil users must press 'C-c c k').
;; This will open documentation for it, including demos of how they are used.
;; Alternatively, use `C-h o' to look up a symbol (functions, variables, faces,
;; etc).
;;
;; You can also try 'gd' (or 'C-c c d') to jump to their definition and see how
;; they are implemented.

;;'(require 'volatile-highlights)
;;(use-package! workgroups2)
;;(use-package! 'sublimity)
;;(use-package! 'sublimity-scroll)
;;(use-package! 'sublimity-map)
;;(use-package! 'sublimity-attractive)
;;(volatile-highlights-mode t)
(beacon-mode 1)
;;(use-package! 'orderless)
;; (setq completion-styles '(orderless basic)
;;       completion-category-overrides '((file (styles basic partial-completion))))
;;(use-package! 'embark)
;;(use-package! 'focus)
;;(use-package! 'move-text)
;;(use-package! 'yasnippet)

(move-text-default-bindings)

;;(google-this-mode 1)

;;(desktop-save-mode 1)

(setq doom-fallback-buffer-name "*dashboard*")
;;(add-to-list 'load-path "~/.emacs.d/site-lisp/emacs-application-framework/")


(use-package centaur-tabs
  :demand
  :config
  (centaur-tabs-mode t))
  ;;:bind
  ;;("C-<left>" . centaur-tabs-backward)
  ;;("C-<right>" . centaur-tabs-forward))

(centaur-tabs-headline-match)
(setq centaur-tabs-style "bar")
(after! centaur-tabs (centaur-tabs-group-by-projectile-project)
  (setq centaur-tabs-set-bar 'right))


;; (use-package corfu
;;   ;; Optional customizations
;;   ;; :custom
;;   ;; (corfu-cycle t)                ;; Enable cycling for `corfu-next/previous'
;;   ;; (corfu-auto t)                 ;; Enable auto completion
;;   ;; (corfu-separator ?\s)          ;; Orderless field separator
;;   ;; (corfu-quit-at-boundary nil)   ;; Never quit at completion boundary
;;   ;; (corfu-quit-no-match nil)      ;; Never quit, even if there is no match
;;   ;; (corfu-preview-current nil)    ;; Disable current candidate preview
;;   ;; (corfu-preselect 'prompt)      ;; Preselect the prompt
;;   ;; (corfu-on-exact-match nil)     ;; Configure handling of exact matches
;;   ;; (corfu-scroll-margin 5)        ;; Use scroll margin

;;   ;; Enable Corfu only for certain modes.
;;   ;; :hook ((prog-mode . corfu-mode)
;;   ;;        (shell-mode . corfu-mode)
;;   ;;        (eshell-mode . corfu-mode))

;;   ;; Recommended: Enable Corfu globally.
;;   ;; This is recommended since Dabbrev can be used globally (M-/).
;;   ;; See also `corfu-exclude-modes'.
;;   :init
;;   (global-corfu-mode))

;; ;; Aggressive completion, cheap prefix filtering.
;; (setq-local corfu-auto t
;;             corfu-auto-delay 0
;;             corfu-auto-prefix 0
;;             completion-styles '(basic))
;; Optionally use the `orderless' completion style.

;; (use-package orderless
;;   :init
;;   ;; Configure a custom style dispatcher (see the Consult wiki)
;;   ;; (setq orderless-style-dispatchers '(+orderless-dispatch)
;;   ;;       orderless-component-separator #'orderless-escapable-split-on-space)
;;   (setq completion-styles '(orderless basic)
;;         completion-category-defaults nil
;;         completion-category-overrides '((file (styles . (partial-completion))))))



;;(global-hungry-delete-mode)
;; Add extensions
;; (use-package cape
;;   ;; Bind dedicated completion commands
;;   ;; Alternative prefix keys: C-c p, M-p, M-+, ...
;;   :bind (("C-c p p" . completion-at-point) ;; capf
;;          ("C-c p t" . complete-tag)        ;; etags
;;          ("C-c p d" . cape-dabbrev)        ;; or dabbrev-completion
;;          ("C-c p h" . cape-history)
;;          ("C-c p f" . cape-file)
;;          ("C-c p k" . cape-keyword)
;;          ("C-c p s" . cape-symbol)
;;          ("C-c p a" . cape-abbrev)
;;          ("C-c p l" . cape-line)
;;          ("C-c p w" . cape-dict)
;;          ("C-c p \\" . cape-tex)
;;          ("C-c p _" . cape-tex)
;;          ("C-c p ^" . cape-tex)
;;          ("C-c p &" . cape-sgml)
;;          ("C-c p r" . cape-rfc1345))
;;   :init
;;   ;; Add `completion-at-point-functions', used by `completion-at-point'.
;;   ;; NOTE: The order matters!
;;   (add-to-list 'completion-at-point-functions #'cape-dabbrev)
;;   (add-to-list 'completion-at-point-functions #'cape-file)
;;   (add-to-list 'completion-at-point-functions #'cape-elisp-block)
;; )

;;ignor python warnings
(setq lsp-pyls-plugins-pycodestyle-enabled nil)


(after! projectile
  (add-to-list 'projectile-globally-ignored-directories "*dist"))

(after! hl-todo
  (setq hl-todo-highlight-punctuation ":"
          hl-todo-keyword-faces
          `(("TODO"       warning bold)
            ("FIXME"      error bold)
            ("HACK"       font-lock-constant-face bold)
            ("REVIEW"     font-lock-keyword-face bold)
            ("NOTE"       success bold)
            ("DEBUG"      . "#279c81")
            ("DEPRECATED" font-lock-doc-face bold))))


  (setq bibtex-dialect 'biblatex)


  (use-package citar
    :custom
    (org-cite-global-bibliography bibtex-files)
    (citar-bibliography bibtex-files)
    (org-cite-insert-processor 'citar)
    (org-cite-follow-processor 'citar)
    (org-cite-activate-processor 'citar)
    ;; (citar-notes-paths (list denote-directory))
    (citar-at-point-function 'embark-act)
    ;; (citar-library-paths '("~/Documents/library/"))
    :bind
    (("C-c d o" . citar-open)
     (:map org-mode-map :package org ("C-c b" . #'org-cite-insert))))


;; Use hunspell instead of aspell for ispell
(setq ispell-program-name "hunspell")
(setq confirm-kill-emacs nil)
(setq doom-themes-treemacs-theme "doom-colors")
(add-hook 'after-init-hook #'global-emojify-mode)
(setq projectile-enable-caching nil)



(define-globalized-minor-mode my-global-rainbow-mode rainbow-mode
  (lambda () (rainbow-mode 1)))

(my-global-rainbow-mode 1)


 (use-package vue-mode
   :mode "\\.vue\\'"
   :config
   (add-hook 'vue-mode-hook #'lsp))

 (add-hook 'vue-mode-hook #'fancy-dabbrev-mode)
 (add-hook 'mmm-mode-hook
           (lambda ()
             (set-face-background 'mmm-default-submode-face nil)))

(use-package fancy-dabbrev
  :commands (fancy-dabbrev-mode)
  :config
  (setq fancy-dabbrev-preview-delay 0.0)
  (setq fancy-dabbrev-preview-context 'before-non-word)

  (setq fancy-dabbrev-expansion-on-preview-only t)
  (setq fancy-dabbrev-indent-command 'tab-to-tab-stop)

  (define-key evil-insert-state-map (kbd "<tab>") 'fancy-dabbrev-expand-or-indent))

 (define-key evil-visual-state-map (kbd "v") 'er/expand-region)

;; Disable window decoration
(setq default-frame-alist '((undecorated . t)))
(use-package nerd-icons
  :vc (:url "https://github.com/rainstormstudio/nerd-icons.el.git"))

;; (use-package nerd-icons-dired
;;   :vc (:url "https://github.com/rainstormstudio/nerd-icons-dired.git")
;;   :hook (dired-mode . nerd-icons-dired-mode))

;; Relative line numbering
(setq display-line-numbers-type 'relative)
(setq bibtex-files nil)




(defun emacs-everywhere-hyprland-app-info ()
  "Get app info from Hyprland using hyprctl."
  (when-let* ((window-info (shell-command-to-string "hyprctl activewindow -j"))
              (json-data (json-read-from-string window-info)))
    (make-instance 'emacs-everywhere-app
                  :class-name (cdr (assoc 'class json-data))
                  :title (cdr (assoc 'title json-data)))))

(after! emacs-everywhere
  (setq emacs-everywhere-app-info-function #'emacs-everywhere-hyprland-app-info))

(setq confirm-kill-processes nil)
(defun set-no-process-query-on-exit ()
    (let ((proc (get-buffer-process (current-buffer))))
    (when (processp proc)
    (set-process-query-on-exit-flag proc nil))))
    (add-hook 'term-exec-hook 'set-no-process-query-on-exit)

