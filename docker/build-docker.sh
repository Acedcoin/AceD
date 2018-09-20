#!/usr/bin/env bash

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
cd $DIR/..

DOCKER_IMAGE=${DOCKER_IMAGE:-polispay/polisd-develop}
DOCKER_TAG=${DOCKER_TAG:-latest}

BUILD_DIR=${BUILD_DIR:-.}

rm docker/bin/*
mkdir docker/bin
cp $BUILD_DIR/src/polisd docker/bin/
cp $BUILD_DIR/src/polis-cli docker/bin/
cp $BUILD_DIR/src/polis-tx docker/bin/
strip docker/bin/polisd
strip docker/bin/polis-cli
strip docker/bin/polis-tx

docker build --pull -t $DOCKER_IMAGE:$DOCKER_TAG -f docker/Dockerfile docker
