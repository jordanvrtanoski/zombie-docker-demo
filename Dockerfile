FROM debian:latest

RUN apt update && apt install -y ksh procps build-essential
RUN mkdir zombie

WORKDIR /zombie
COPY zombie.c .

RUN gcc zombie.c -o zombie
