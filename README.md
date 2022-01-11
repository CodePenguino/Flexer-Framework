# Flexer Framework

# What?
This the C++ version of an framework I am making, Flexer!

# How do I compile this?
## Linux & unix based systems:
Make sure you have cmake, make, gcc, GLEW, GLFW, and OpenGL installed to compile this. In Debian or Ubuntu based linux systems, this is done with the following command:
```
sudo apt install gcc cmake make libglew-dev libglfw3-dev libglm-dev mesa-utils
```
If you are on an Arch based system, I believe this is done with the following command (not really tested, so this might be wrong:)
```
sudo pacman -S gcc cmake make glew glfw3 glm mesa
```

With that set up, all you have to do is just run the following command:
```
make run
```
## Windows:
## Mingw method
I actually have a windows compilation method this time!
First, download and install mingw32. Then, go to the minBuild folder and run the following command:
```
mingw32-make
```
With some luck, you might get the program to compile! You should see a program called "a.exe" show up (still in the build folder.) Just run this (either on the terminal, or by double-clicking on the app), and you should be good to go!
## Visual Studio
...no

## Note:
I have a few extra files included which are only there to help compile the program using 4coder. If you're not using this text editor, please ignore those files.
