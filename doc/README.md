AceD Core 0.12.1
=====================

This is the official reference wallet for AceD digital currency and comprises the backbone of the AceD peer-to-peer network. You can [download AceD Core](https://www.acedpay.org/downloads/) or [build it yourself](#building) using the guides below.

Running
---------------------
The following are some helpful notes on how to run AceD on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/aced-qt` (GUI) or
- `bin/acedd` (headless)

### Windows

Unpack the files into a directory, and then run aced-qt.exe.

### OS X

Drag AceD-Qt to your applications folder, and then run AceD-Qt.

### Need Help?

* See the [AceD documentation](https://acedpay.atlassian.net/wiki/display/DOC)
for help and more information.
* Ask for help on [AceD Nation Discord](http://acedchat.org)
* Ask for help on the [AceD Forum](https://acedpay.org/forum)

Building
---------------------
The following are developer notes on how to build AceD Core on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [OS X Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [OpenBSD Build Notes](build-openbsd.md)
- [Gitian Building Guide](gitian-building.md)

Development
---------------------
The AceD Core repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- Source Code Documentation ***TODO***
- [Translation Process](translation_process.md)
- [Translation Strings Policy](translation_strings_policy.md)
- [Travis CI](travis-ci.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Shared Libraries](shared-libraries.md)
- [BIPS](bips.md)
- [Dnsseed Policy](dnsseed-policy.md)
- [Benchmarking](benchmarking.md)

### Resources
* Discuss on the [AceD Forum](https://acedpay.org/forum), in the Development & Technical Discussion board.
* Discuss on [AceD Nation Discord](http://acedchat.org)

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [Files](files.md)
- [Reduce Traffic](reduce-traffic.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)
- [ZMQ](zmq.md)

License
---------------------
Distributed under the [MIT software license](/COPYING).
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](https://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.
