" All system-wide defaults are set in $VIMRUNTIME/archlinux.vim (usually just
" /usr/share/vim/vimfiles/archlinux.vim) and sourced by the call to :runtime
" you can find below.  If you wish to change any of those settings, you should
" do it in this file (/etc/vimrc), since archlinux.vim will be overwritten
" everytime an upgrade of the vim packages is performed.  It is recommended to
" make changes after sourcing archlinux.vim since it alters the value of the
" 'compatible' option.

" This line should not be removed as it ensures that various options are
" properly set to work with the Vim-related packages.
runtime! archlinux.vim

" If you prefer the old-style vim functionalty, add 'runtime! vimrc_example.vim'
" Or better yet, read /usr/share/vim/vim74/vimrc_example.vim or the vim manual
" and configure vim to your own liking!

syntax on
silent !stty -ixon > /dev/null 2>/dev/null

filetype plugin indent on
" show existing tab with 4 spaces width
set tabstop=4
" when indenting with '>', use 4 spaces width
set shiftwidth=4
" on pressing tab, insert 4 spaces
set expandtab
" when doing search and replace, make it global by default
set gdefault
set autoindent
set smartindent
" Allow saving of files as sudo when I forgot to start vim using sudo
cmap w!! w !sudo tee > /dev/null %
" attach numbers to the side of vim
set nu
" highlight search terms
" set hlsearch
set cindent

" Swap between source and header cpp 
map <F5> :setlocal spell! spelllang=en_us<CR>
vnoremap <C-c> :w !xclip -sel c

" use system clipboard by default
" set clipboard=unnamedplus
set clipboard=unnamed,unnamedplus
" Copy with Wayland
xnoremap <silent> y :w !wl-copy<CR><CR>
" Paste from Wayland
noremap <silent> p :r !wl-paste<CR><CR>
set paste               " Paste from a windows or from vim

" disable 'do you want to load' prompt
let g:ycm_confirm_extra_conf = 0
let g:tex_flavor='latex'
set sw=2
colorscheme desert
set incsearch
set backspace=2 " make backspace work like most other apps
let g:livepreview_previewer = 'evince'

"call plug#begin('~/.vim/plugged')
"Plug 'lervag/vimtex'
"Plug 'xuhdev/vim-latex-live-preview', { 'for': 'tex' }
"Plug 'octol/vim-cpp-enhanced-highlight'
"call plug#end()

let maplocalleader = '\\'
let g:cpp_class_scope_highlight = 1
let g:cpp_member_variable_highlight = 1
let g:cpp_class_decl_highlight = 1
let g:cpp_experimental_simple_template_highlight = 1

"autocmd BufWritePost * if empty(&bt) && index(['cpp', 'c'], &ft)!=-1 | execute '!astyle' shellescape(@%, 1) | endif
let g:vimtex_compiler_latexmk = { 
        \ 'executable' : 'latexmk',
        \ 'options' : [ 
        \   '-xelatex',
        \   '-file-line-error',
        \   '-synctex=1',
        \   '-interaction=nonstopmode',
        \ ],
        \}
"if has('gui_running')
"  set guifont=Source\ Code\ Pro\ for\ Powerline\ Semi-Bold\ 12
"endif
:command Runner !ls
