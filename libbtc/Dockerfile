FROM debian:stretch

WORKDIR /home/libbtc

RUN set -ex && \
    apt-get update && \
    apt-get upgrade -y && \
    apt-get install -y git autoconf libtool libevent-dev make && \
    git clone https://github.com/libbtc/libbtc.git /home/libbtc && \
    ./autogen.sh && \
    ./configure && \
    make check && \
    rm -rf /var/lib/apt/lists/*

ENV C_INCLUDE_PATH=/home/libbtc/include \
    LIBRARY_PATH=/home/libbtc/.libs:/usr/lib/x86_64-linux-gnu

WORKDIR /home/build
