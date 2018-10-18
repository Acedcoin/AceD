FROM debian:stretch
LABEL maintainer="AceD Developers <dev@acedpay.org>"
LABEL description="Dockerised AceDCore, built from Travis"

RUN apt-get update && apt-get -y upgrade && apt-get clean && rm -fr /var/cache/apt/*

COPY bin/* /usr/bin/
