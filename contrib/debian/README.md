
Debian
====================
This directory contains files used to package acedd/aced-qt
for Debian-based Linux systems. If you compile acedd/aced-qt yourself, there are some useful files here.

## aced: URI support ##


aced-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install aced-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your aced-qt binary to `/usr/bin`
and the `../../share/pixmaps/aced128.png` to `/usr/share/pixmaps`

aced-qt.protocol (KDE)

