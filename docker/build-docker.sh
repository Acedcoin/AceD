#!/usr/bin/env bash

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
cd $DIR/..

DOCKER_IMAGE=${DOCKER_IMAGE:-acedpay/acedd-develop}
DOCKER_TAG=${DOCKER_TAG:-latest}

BUILD_DIR=${BUILD_DIR:-.}

rm docker/bin/*
mkdir docker/bin
cp $BUILD_DIR/src/acedd docker/bin/
cp $BUILD_DIR/src/aced-cli docker/bin/
cp $BUILD_DIR/src/aced-tx docker/bin/
strip docker/bin/acedd
strip docker/bin/aced-cli
strip docker/bin/aced-tx

docker build --pull -t $DOCKER_IMAGE:$DOCKER_TAG -f docker/Dockerfile docker
