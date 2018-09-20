Sample init scripts and service configuration for polisd
==========================================================

Sample scripts and configuration files for systemd, Upstart and OpenRC
can be found in the contrib/init folder.

    contrib/init/polisd.service:    systemd service unit configuration
    contrib/init/polisd.openrc:     OpenRC compatible SysV style init script
    contrib/init/polisd.openrcconf: OpenRC conf.d file
    contrib/init/polisd.conf:       Upstart service configuration file
    contrib/init/polisd.init:       CentOS compatible SysV style init script

1. Service User
---------------------------------

All three Linux startup configurations assume the existence of a "poliscore" user
and group.  They must be created before attempting to use these scripts.
The OS X configuration assumes polisd will be set up for the current user.

2. Configuration
---------------------------------

At a bare minimum, polisd requires that the rpcpassword setting be set
when running as a daemon.  If the configuration file does not exist or this
setting is not set, polisd will shutdown promptly after startup.

This password does not have to be remembered or typed as it is mostly used
as a fixed token that polisd and client programs read from the configuration
file, however it is recommended that a strong and secure password be used
as this password is security critical to securing the wallet should the
wallet be enabled.

If polisd is run with the "-server" flag (set by default), and no rpcpassword is set,
it will use a special cookie file for authentication. The cookie is generated with random
content when the daemon starts, and deleted when it exits. Read access to this file
controls who can access it through RPC.

By default the cookie is stored in the data directory, but it's location can be overridden
with the option '-rpccookiefile'.

This allows for running polisd without having to do any manual configuration.

`conf`, `pid`, and `wallet` accept relative paths which are interpreted as
relative to the data directory. `wallet` *only* supports relative paths.

For an example configuration file that describes the configuration settings,
see `contrib/debian/examples/polis.conf`.

3. Paths
---------------------------------

3a) Linux

All three configurations assume several paths that might need to be adjusted.

Binary:              `/usr/bin/polisd`  
Configuration file:  `/etc/poliscore/polis.conf`  
Data directory:      `/var/lib/polisd`  
PID file:            `/var/run/polisd/polisd.pid` (OpenRC and Upstart) or `/var/lib/polisd/polisd.pid` (systemd)  
Lock file:           `/var/lock/subsys/polisd` (CentOS)  

The configuration file, PID directory (if applicable) and data directory
should all be owned by the poliscore user and group.  It is advised for security
reasons to make the configuration file and data directory only readable by the
poliscore user and group.  Access to polis-cli and other polisd rpc clients
can then be controlled by group membership.

3b) Mac OS X

Binary:              `/usr/local/bin/polisd`  
Configuration file:  `~/Library/Application Support/PolisCore/polis.conf`  
Data directory:      `~/Library/Application Support/PolisCore`
Lock file:           `~/Library/Application Support/PolisCore/.lock`

4. Installing Service Configuration
-----------------------------------

4a) systemd

Installing this .service file consists of just copying it to
/usr/lib/systemd/system directory, followed by the command
`systemctl daemon-reload` in order to update running systemd configuration.

To test, run `systemctl start polisd` and to enable for system startup run
`systemctl enable polisd`

4b) OpenRC

Rename polisd.openrc to polisd and drop it in /etc/init.d.  Double
check ownership and permissions and make it executable.  Test it with
`/etc/init.d/polisd start` and configure it to run on startup with
`rc-update add polisd`

4c) Upstart (for Debian/Ubuntu based distributions)

Drop polisd.conf in /etc/init.  Test by running `service polisd start`
it will automatically start on reboot.

NOTE: This script is incompatible with CentOS 5 and Amazon Linux 2014 as they
use old versions of Upstart and do not supply the start-stop-daemon utility.

4d) CentOS

Copy polisd.init to /etc/init.d/polisd. Test by running `service polisd start`.

Using this script, you can adjust the path and flags to the polisd program by
setting the POLISD and FLAGS environment variables in the file
/etc/sysconfig/polisd. You can also use the DAEMONOPTS environment variable here.

4e) Mac OS X

Copy org.polis.polisd.plist into ~/Library/LaunchAgents. Load the launch agent by
running `launchctl load ~/Library/LaunchAgents/org.polis.polisd.plist`.

This Launch Agent will cause polisd to start whenever the user logs in.

NOTE: This approach is intended for those wanting to run polisd as the current user.
You will need to modify org.polis.polisd.plist if you intend to use it as a
Launch Daemon with a dedicated poliscore user.

5. Auto-respawn
-----------------------------------

Auto respawning is currently only configured for Upstart and systemd.
Reasonable defaults have been chosen but YMMV.
