# Path to your oh-my-zsh installation.
ZSH=/usr/share/oh-my-zsh/
ZSH_CUSTOM=/home/inathero/.oh-my-zsh/
export VISUAL="vim"
export EDITOR="vim"


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

# User configuration

export PATH="/home/inathero/anaconda3/bin:/home/inathero/Scripts/bin:/usr/bin:/bin:/usr/sbin:/sbin:$PATH:/home/inathero/.local/bin/"
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

# Set personal aliases, overriding those provided by oh-my-zsh libs,
# plugins, and themes. Aliases can be placed here, though oh-my-zsh
# users are encouraged to define aliases within the ZSH_CUSTOM folder.
# For a full list of active aliases, run `alias`.
#
# Example aliases
# alias zshconfig="mate ~/.zshrc"
# alias ohmyzsh="mate ~/.oh-my-zsh"

ZSH_CACHE_DIR=$HOME/.oh-my-zsh-cache
if [[ ! -d $ZSH_CACHE_DIR ]]; then
  mkdir $ZSH_CACHE_DIR
fi

source $ZSH/oh-my-zsh.sh

eval $(dircolors -b $HOME/.dircolors)
export LS_COLORS

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
alias l="/usr/bin/ls --color"
alias ls="colorls --sd -A"
alias macro_conf="vim ~/Gits/leap-linux/build/scripts/macros.ina"
alias :q="exit"
alias configure="./configure CFLAGS='-Wall -march=native -O2 -pipe'"
alias pacfind="pacman -Ql"
alias facebook="caprine"
alias pinstall="sudo pacman -Syu"
alias psearch="pacman -Qe | grep "
alias ortho="subl /hdd/Gits/qmk_firmware/keyboards/cannonkeys/ortho60/keymaps/inathero/keymap.c /hdd/Gits/qmk_firmware/keyboards/cannonkeys/ortho60/keymaps/inathero/zach_common_functions.c"
alias orthobuild="cd /hdd/Gits/qmk_firmware && sudo make cannonkeys/ortho60:inathero:dfu-util"
alias dz="subl /hdd/Gits/qmk_firmware/keyboards/dz60/keymaps/inathero/keymap.c /hdd/Gits/qmk_firmware/keyboards/dz60/keymaps/inathero/inathero_common_functions.c"
alias dzbuild="cd /hdd/Gits/qmk_firmware && sudo make dz60:inathero:dfu"
alias mechwild="subl /hdd/Gits/qmk_firmware/keyboards/mechwild/mercutio/keymaps/inathero/keymap.c /hdd/Gits/qmk_firmware/keyboards/mechwild/mercutio/keymaps/inathero/inathero_common_functions.c"
alias mechbuild="cd /hdd/Gits/qmk_firmware && sudo make mechwild/mercutio:inathero:usbasp"
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
alias reload_usbs" sudo rmmod xhci_pci; sudo rmmod xhci_hcd; sudo modprobe xhci_pci xhci_hcd"


porphans(){
sudo  pacman -Rns $(pacman -Qtdq)
}


gitam(){
git add .
git commit -am "$1"
git push
}

gittag(){
git add .
git tag "$1"
git push origin "$1"
}
ampv(){
mpv --profile=svp "$1" --alang=jpn --sid=1 --sub-scale=0.5
}

clear
neofetch
#TIMEFMT=$'\nreal\t%E\nuser\t%U\nsys\t%S'
source /usr/share/zsh/plugins/zsh-syntax-highlighting/zsh-syntax-highlighting.zsh


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
