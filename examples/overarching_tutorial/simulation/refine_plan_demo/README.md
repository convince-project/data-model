# REFINE-PLAN Demo

This demo shows the robot executing refined behaviours within the Pyrobosim simulation.
The robot's goal is to search for a loaf of bread within the house. 
The bread appears stochastically at either the side table, dining table, kitchen table, or fridge.
Through REFINE-PLAN, the robot learns the distribution of where the bread may appear and navigates to it quickly.

## How to run the demo

> [!WARNING]
> You must be in the `data-model/examples/overarching_tutorial/simulation` folder for this to work.

### Building the Docker container

```bash
docker build -t convince_tutorial -f .docker/Dockerfile .
```

### Running the Docker Container

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

### Starting the Demo
Inside the docker container, run:

```bash
cd src/refine_plan_demo/bringup
./run_demo.sh
```

From this, a tmux session will begin with two windows.
The first window is for the simulation, and the second is for execution.
The execution window provides insights into the robot's decision-making.
Upon running `./run_demo.sh` the robot will begin moving automatically.


