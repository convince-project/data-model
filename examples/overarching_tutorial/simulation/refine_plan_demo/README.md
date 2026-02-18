# REFINE-PLAN Demo

## How to run the demo

> [!WARNING]
> You must be in the `data-model/examples/overarching_tutorial/simulation` folder for this to work.

## Build

```bash
docker build -t convince_tutorial -f .docker/Dockerfile .
```

## Run

```bash
docker run -it --rm\
    --name convince_tutorial\
    -v /tmp/.X11-unix:/tmp/.X11-unix:rw\
    -v ${XAUTHORITY:-$HOME/.Xauthority}:/root/.Xauthority\
    -v ./tutorial_sim:/convince_ws/src/tutorial_sim\
    -v ./refine_plan_demo:/convince_ws/src/refine_plan_demo\
    -v ./.docker/build:/convince_ws/build\
    -e DISPLAY\
    -e QT_X11_NO_MITSHM=1\
    convince_tutorial\
    bash 
```

Inside the docker container, run

```bash
ros2 run tutorial_sim run
```

TODO: Second terminal running refine-plan demo once run
