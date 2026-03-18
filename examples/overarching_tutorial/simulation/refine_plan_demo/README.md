# REFINE-PLAN Demo

This demo shows the robot executing refined behaviours within the Pyrobosim simulation.
The robot's goal is to search for a loaf of bread within the house. 
The bread appears stochastically at either the side table, dining table, kitchen table, or fridge.
The initial robot behaviour takes a clockwise route through the house, starting from the hall.
This is inefficient, as the locations with the highest probabilities appear at the top of the house.
Through REFINE-PLAN, the robot learns the distribution of where the bread may appear.
As a result, the robot navigates anti-clockwise through the environment starting from the hall, finding the bread faster.

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
Inside the docker container, run the following, where `<MODE>` can be set to `initial` or `refined`:

```bash
cd src/refine_plan_demo/bringup
./run_demo.sh <MODE>
```

From this, a tmux session will begin with two windows.
The first window is for the simulation, and the second is for execution.
The execution window provides insights into the robot's decision-making.
Upon running the demo the robot will begin moving automatically.
If `<MODE>` is set to `initial`, the robot will execute the initial behaviour, i.e. moving clockwise through the house.
If `<MODE>` is set to `refined`, the robot will execute the refined behaviour, i.e. moving anticlockwise through the house.
The robot will find the bread quicker on average when `<MODE>` is set to `refined`. 

## How was this behaviour generated?

The script used to run REFINE-PLAN to synthesise the refined behaviour from simulated data for this problem can be found [here](https://github.com/convince-project/refine-plan/blob/main/bin/overarching_demo_planning.py).


