    # Path to your oh-my-zsh installation.
  # /reload
  #
  ZSH=/usr/share/oh-my-zsh/
  ZSH_CUSTOM=/home/inathero/.oh-my-zsh/
  export VISUAL="emacsclient -c -n"
  export EDITOR="emacsclient -c -n"

  export GTK_IM_MODULE=ibus
export XMODIFIERS=@im=ibus
export QT_IM_MODULE=ibus
export GTK_THEME=Adwaita-dark

autoload -U compinit; compinit
source /home/inathero/.zsh_plugins/fzf-tab/fzf-tab.plugin.zsh

  # Set name of the theme to load.
  # Look in ~/.oh-my-zsh/themes/
  # Optionally, if you set this to "random", it'll load a random theme each
  # time that oh-my-zsh is loaded.
  #ZSH_THEME="robbyrussell"
  #ZSH_THEME="sorin"
  #ZSH_THEME="bullet-train"
  #ZSH_THEME="arrow"
  #ZSH_THEME="avit"
  ZSH_THEME="nanotech"

  # Uncomment the following line to use case-sensitive completion.
  # CASE_SENSITIVE="true"

  # Uncomment the following line to use hyphen-insensitive completion. Case
  # sensitive completion must be off. _ and - will be interchangeable.
  # HYPHEN_INSENSITIVE="true"

  # Uncomment the following line to disable bi-weekly auto-update checks.
  DISABLE_AUTO_UPDATE="true"

  # Uncomment the following line to change how often to auto-update (in days).
  # export UPDATE_ZSH_DAYS=13

  # Uncomment the following line to disable colors in ls.
  # DISABLE_LS_COLORS="true"

  # Uncomment the following line to disable auto-setting terminal title.
  # DISABLE_AUTO_TITLE="true"

  # Uncomment the following line to enable command auto-correction.
  # ENABLE_CORRECTION="true"

  # Uncomment the following line to display red dots whilst waiting for completion.
  # COMPLETION_WAITING_DOTS="true"

  # Uncomment the following line if you want to disable marking untracked files
  # under VCS as dirty. This makes repository status check for large repositories
  # much, much faster.
  # DISABLE_UNTRACKED_FILES_DIRTY="true"

  # Uncomment the following line if you want to change the command execution time
  # stamp shown in the history command output.
  # The optional three formats: "mm/dd/yyyy"|"dd.mm.yyyy"|"yyyy-mm-dd"
  # HIST_STAMPS="mm/dd/yyyy"

  # Would you like to use another custom folder than $ZSH/custom?
  # ZSH_CUSTOM=/path/to/new-custom-folder

  # Which plugins would you like to load? (plugins can be found in ~/.oh-my-zsh/plugins/*)
  # Custom plugins may be added to ~/.oh-my-zsh/custom/plugins/
  # Example format: plugins=(rails git textmate ruby lighthouse)
  # Add wisely, as too many plugins slow down shell startup.
  plugins=(
      git
      zsh-syntax-highlighting
      zsh-autosuggestions
      bgnotify
      poetry
  )
# So that suggeastions can be visible
ZSH_AUTOSUGGEST_HIGHLIGHT_STYLE='fg=4'
  # User configuration

  export PATH="/home/inathero/anaconda3/bin:/home/inathero/Scripts/bin:/usr/bin:/bin:/usr/sbin:/sbin:$PATH:/home/inathero/.local/bin/:$HOME/.emacs.d/bin"
# export MANPATH="/usr/local/man:$MANPATH"


# You may need to manually set your language environment
# export LANG=en_US.UTF-8

# Preferred editor for local and remote sessions
# if [[ -n $SSH_CONNECTION ]]; then
#   export EDITOR='vim'
# else
#   export EDITOR='mvim'
# fi

# Compilation flags
# export ARCHFLAGS="-arch x86_64"

# ssh
# export SSH_KEY_PATH="~/.ssh/dsa_id"


ZSH_CACHE_DIR=$HOME/.oh-my-zsh-cache
if [[ ! -d $ZSH_CACHE_DIR ]]; then
  mkdir $ZSH_CACHE_DIR
fi

source $ZSH/oh-my-zsh.sh

# eval $(dircolors -b $HOME/.dircolors)
# eval $(dircolors)
# export LS_COLORS

alias hypconfig="dr /home/inathero/.config/hypr/hyprland.conf"
alias cat="bat"
alias Scripts-maeni-apps="/home/inathero/Scripts/maeni-apps"
alias mpd_conf="vim ~/.config/mpd/mpd.conf"
alias mpv_conf="vim ~/.config/mpv/mpv.conf"
alias feh="feh -F"
alias td="termdown"
alias mkdir="mkdir -p"
alias awe_conf="vim ~/.config/awesome/rc.lua"
alias theme_conf="vim ~/.config/awesome/themes/blackburn/theme.lua"
alias pupdate="sudo pacman -Syu && trizen -Syua"
alias puninstall="sudo pacman -Rsc"
alias aria2c="aria2c -x 4"
#alias lsl="ls++"
alias l="eza --color"
alias ls="lsd"
alias macro_conf="vim ~/Gits/leap-linux/build/scripts/macros.ina"
alias :q="exit"
alias configure="./configure CFLAGS='-Wall -march=native -O2 -pipe'"
alias pacfind="pacman -Ql"
alias facebook="caprine"
alias pinstall="sudo pacman -Syu"
alias psearch="pacman -Qe | grep "
alias ortho="subl /games/qmk_firmware/keyboards/cannonkeys/ortho60/keymaps/inathero/keymap.c /games/qmk_firmware/keyboards/cannonkeys/ortho60/keymaps/inathero/zach_common_functions.c"
alias orthobuild="cd /games/qmk_firmware && make cannonkeys/ortho60:inathero:dfu-util"
alias dz="emacsclient -c -n /games/qmk_firmware/keyboards/dz60/keymaps/inathero/keymap.c /games/qmk_firmware/keyboards/dz60/keymaps/inathero/inathero_common_functions.c"
alias dzbuild="cd /games/qmk_firmware && make dz60:inathero:dfu"
alias mechwild="emacsclient -c -n /games/qmk_firmware/keyboards/mechwild/mercutio/keymaps/inathero/keymap.c /games/qmk_firmware/keyboards/mechwild/mercutio/keymaps/inathero/inathero_common_functions.c"
alias mechbuild="cd /games/qmk_firmware && make mechwild/mercutio:inathero:usbasp"
alias mini="subl /games/qmk_firmware/keyboards/boardsource/4x12/keymaps/inathero/inathero_common_functions.c /games/qmk_firmware/keyboards/boardsource/4x12/keymaps/inathero/keymap.c"
alias minibuild="cd /games/qmk_firmware && make  boardsource/4x12:inathero:dfu"
alias pi40="emacsclient -c -n /games/qmk_firmware/keyboards/1upkeyboards/pi40/keymaps/inathero/inathero_common_functions.c /games/qmk_firmware/keyboards/1upkeyboards/pi40/keymaps/inathero/keymap.c"
alias pi40build="cd /games/qmk_firmware && make 1upkeyboards/pi40:inathero:flash"
alias tofu="emacsclient -c -n /games/qmk_firmware/keyboards/kprepublic/bm60hsrgb_ec/rev2/keymaps/default/keymap.c"
alias tofubuild="cd /games/qmk_firmware && make kprepublic/bm60hsrgb_ec/rev2:default:dfu"
alias dwarf="cd /games/Dwarf\ Fortress/ && ./run-df"
alias config="vim ~/.config/bspwm/bspwmrc"
alias plover="sudo /opt/plover-4.0.0.dev10-x86_64.AppImage"
alias sylvia="/hdd/Sync\ Drive/Programming\ Projects/build-SylviaVirtualAssistant_Discord-Desktop-Release/Sylvia_Discord"
alias pulse-start=" systemctl --user start pulseaudio.service pulseaudio.socket"
alias pulse-stop=" systemctl --user stop pulseaudio.service pulseaudio.socket"

alias sstart="systemctl start"
alias sstop="systemctl stop"
alias srestart="systemctl restart"
alias aur="trizen"
alias cdd="cd /hdd/Downloads/"
alias reload_usbs=" sudo rmmod xhci_pci; sudo rmmod xhci_hcd; sudo modprobe xhci_pci xhci_hcd && sudo mount /media"

alias premove="sudo pacman -Rs"
alias premovec="sudo pacman -Rsc"
alias evetrade="cd /home/inathero/Gits/EveRegionTrader && python main.py"
alias wormholes="cd /home/inathero/Gits/EveRegionTrader && python wormholes.py"

porphans(){
sudo  pacman -Rns $(pacman -Qtdq)
}

sst(){
streamlink https://www.twitch.tv/$1 best  --player=mpv --twitch-low-latency "--twitch-api-header=Authorization=OAuth va9dpbiegn8zqqntcqxbwp18djj467" &
chatterino
}

gitam(){
  git add .
  git commit -am "$1"
  git push
}
_gitam(){
  git add .
  git commit -am "$1"
}
gitamb(){
  npm run build
  git add .
  git commit -am "$1"
  git push
}
ggitam(){
  cd /home/inathero/Gits/book-secret-project/
  git add .
  git commit -am "$1"
  git push
}
ggitamb(){
  cd /home/inathero/Gits/book-secret-project/
  npm run build
  git add .
  git commit -am "$1"
  git push
}

sview(){
streamlink https://twitch.tv/"$1" best --player=mpv --twitch-low-latency &
chatterino -c "$1"
}

gittag(){
git add .
git tag "$1"
git push origin "$1"
}
ampv(){
mpv --profile=svp "$1" --alang=jpn --sid=1 --sub-scale=0.5
}

# clear
neofetch
#TIMEFMT=$'\nreal\t%E\nuser\t%U\nsys\t%S'
#source /usr/share/zsh/plugins/zsh-syntax-highlighting/zsh-syntax-highlighting.zsh


#feh --randomize --bg-scale --no-xinerama ~/Pictures/Backgrounds/*
#feh --randomize --bg-max  ~/Pictures/Backgrounds/*

#function my_reboot_to_windows {
      #WINDOWS_TITLE=`grep -i 'windows' /boot/grub/grub.cfg|cut -d"'" -f2`
          #sudo grub-reboot "$WINDOWS_TITLE"
              #sudo reboot
            #}

# >>> conda initialize >>>
# !! Contents within this block are managed by 'conda init' !!
# <<< conda initialize <<<
bindkey "^[[A" history-beginning-search-backward
bindkey "^[[B" history-beginning-search-forward
alias hg='history | grep'

export PATH="$HOME/.poetry/bin:$PATH"

alias serve="browser-sync start -s -f . --no-notify --host 127.0.0.1 --port 3000"



# JINA_CLI_BEGIN

## autocomplete
if [[ ! -o interactive ]]; then
    return
fi

compctl -K _jina jina

_jina() {
  local words completions
  read -cA words

  if [ "${#words}" -eq 2 ]; then
    completions="$(jina commands)"
  else
    completions="$(jina completions ${words[2,-2]})"
  fi

  reply=(${(ps:\n:)completions})
}

# session-wise fix
ulimit -n 4096
export OBJC_DISABLE_INITIALIZE_FORK_SAFETY=YES
# default workspace for Executors
export JINA_DEFAULT_WORKSPACE_BASE="${HOME}/.jina/executor-workspace"
# xset r rate 200 30 
#setxkbmap us -option compose:ralt 
# JINA_CLI_END
#  a
#
alias infogit="GIT_SSH_COMMAND=\"ssh -i ~/.ssh/inathero\" git $@"
alias yayskip="yay -Quq --aur | xargs -n 1 yay -S --noconfirm"
alias espconf="emacsclient -c -n  /home/inathero/.config/espanso/match/"
alias vim="nvim"
alias riverconf="emacsclient -c -n /home/inathero/.config/river/init"
alias dr="/home/inathero/Scripts/doomrun.sh"


# Set up fzf key bindings and fuzzy completion
source <(fzf --zsh)




declare -x PAGER='bat'
declare -x EDITOR='emacsclient -n -c'

declare -x LS_COLORS='no=01;37:fi=01;37:di=01;34:ln=01;36:pi=01;32:so=01;35:do=01;35:bd=01;33:cd=01;33:ex=01;31:mi=00;37:or=00;36:'


########
# prompt

rgb_restore='\[\033[00m\]'
rgb_black='\[\033[00;30m\]'
rgb_firebrick='\[\033[00;31m\]'
rgb_red='\[\033[01;31m\]'
rgb_forest='\[\033[00;32m\]'
rgb_green='\[\033[01;32m\]'
rgb_brown='\[\033[00;33m\]'
rgb_yellow='\[\033[01;33m\]'
rgb_navy='\[\033[00;34m\]'
rgb_blue='\[\033[01;34m\]'
rgb_purple='\[\033[00;35m\]'
rgb_magenta='\[\033[01;35m\]'
rgb_cadet='\[\033[00;36m\]'
rgb_cyan='\[\033[01;36m\]'
rgb_gray='\[\033[00;37m\]'
rgb_white='\[\033[01;37m\]'

rgb_std="${rgb_white}"

if [ `id -u` -eq 0 ]
then
    rgb_usr="${rgb_red}"
else
    rgb_usr="${rgb_green}"
fi


unset   rgb_restore   \
        rgb_black     \
        rgb_firebrick \
        rgb_red       \
        rgb_forest    \
        rgb_green     \
        rgb_brown     \
        rgb_yellow    \
        rgb_navy      \
        rgb_blue      \
        rgb_purple    \
        rgb_magenta   \
        rgb_cadet     \
        rgb_cyan      \
        rgb_gray      \
        rgb_white     \
        rgb_std       \
        rgb_usr
