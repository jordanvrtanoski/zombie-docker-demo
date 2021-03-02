# zombie-docker-demo
Demonstration of zombie in docker container

Build the container with 

```
docker build -t zombiedemo .
```

Run the container as

```
docker run -ti --rm zombiedemo /bin/bash
root@d2d87f4aafbc:/zombie# ./zombie & ps -eaf --forest
```

