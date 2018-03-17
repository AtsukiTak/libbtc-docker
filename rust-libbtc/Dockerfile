FROM rust:1.24.1-stretch

WORKDIR /home/libbtc

RUN set -ex && \
    git clone https://github.com/libbtc/libbtc.git /home/libbtc && \
    ./autogen.sh && \
    ./configure && \
    make check && \
    rm -rf /var/lib/apt/lists/*

ENV C_INCLUDE_PATH=/home/libbtc/include \
    LIBRARY_PATH=/home/libbtc/.libs:/usr/lib/x86_64-linux-gnu

WORKDIR /home/build
