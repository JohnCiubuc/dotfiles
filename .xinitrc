#!/bin/sh

userresources=$HOME/.Xresources
usermodmap=$HOME/.Xmodmap
sysresources=/etc/X11/xinit/.Xresources
sysmodmap=/etc/X11/xinit/.Xmodmap

export  SAL_DISABLE_OPENCL=1

# merge in defaults and keymaps

if [ -f $sysresources ]; then
   xrdb -merge $sysresources

fi

if [ -f $sysmodmap ]; then
    xmodmap $sysmodmap
fi

if [ -f "$userresources" ]; then
   xrdb -merge "$userresources"

fi

if [ -f "$usermodmap" ]; then
    xmodmap "$usermodmap"
fi

# Make sure this is before the 'exec' command or it won't be sourced.
[ -f /etc/xprofile ] && source /etc/xprofile
[ -f ~/.xprofile ] && source ~/.xprofile
[[ -f ~/.Xresources ]] && xrdb -merge -I$HOME ~/.Xresources

source /etc/X11/xinit/xinitrc.d/50-systemd-user.sh 

xset r rate 200 30 &
xset m 8/5 0 &
clipit &
xcalib -d :0 -s 0 -v /windows/Windows/System32/spool/drivers/color/XL2730Z\ \#1\ 2019-10-20\ 18-31\ sRGB\ F-S\ 1xCurve+MTX.icm &
redshift -l 33.57786:-101.85517 -m randr:preserve=1 -b 1:0.7 &
setxkbmap -option compose:ralt
#eval $(/usr/bin/gnome-keyring-daemon --start --components=pkcs11,secrets,ssh)
 /usr/lib/polkit-gnome/polkit-gnome-authentication-agent-1 &
export SSH_AUTH_SOCK
# /home/inathero/Scripts/start-jack-server &
nm-applet &
sxhkd &
exec bspwm
#exec startplasma-x11


#export XDG_SESSION_TYPE=x11
#export GDK_BACKEND=x11
#exec gnome-session
