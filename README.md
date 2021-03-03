# zombie-docker-demo
Demonstration of zombie in docker container

Build the container with 

```
docker build -t zombiedemo .
```

### Bash will reap the zombies
Run the container as

```
docker run -ti --rm zombiedemo /bin/bash
root@d2d87f4aafbc:/zombie# ./zombie & ps -eaf --forest
```

### Ignorring the child exit (not reaping the zombies)
Runing the container with ignore

```
docker run -ti --rm zombiedemo /zombie/ignore
root@d2d87f4aafbc:/zombie# ./zombie & ps -eaf --forest
```


