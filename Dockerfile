FROM debian:latest

RUN apt update && apt install -y ksh procps build-essential
RUN mkdir zombie

WORKDIR /zombie
COPY zombie.c .
COPY ignore.c .
COPY start_zombie_test.sh .

RUN gcc zombie.c -o zombie
RUN gcc ignore.c -o ignore
