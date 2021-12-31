# Quick note, please install mingw for this!

# Change this to you compiler of choice (I chose G++)
CC = g++
SRC = $(wildcard ../src/*.cpp) $(wildcard ../src/*/*.cpp) $(wildcard ../src/*/*/*.cpp) $(wildcard ../src/*/*/*/*.cpp)
LIBS = -lmingw32 -lglew32 -lglfw3dll -lopengl32
DIRS = -I../include/ -L../lib/

all: $(SRC)
	$(CC) $(SRC) $(DIRS) $(LIBS)
