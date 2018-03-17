libbtc
===

## Build docker image.

```
$ docker build -t libbtc .
```

## Compile your code in docker container.

```
$ docker run --rm -v `pwd`:/home/build libbtc gcc -static sample.c -lbtc -levent
```

## Run your program in docker container.

```
$ docker run --rm -v `pwd`:/home/build libbtc ./a.out
```
