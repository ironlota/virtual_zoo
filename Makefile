CC=g++
CFLAGS=-c -Wall -g --std=c++11
LDFLAGS=-g -lm

SOURCES=$(wildcard ./src/*.cpp) $(wildcard ./src/*/*.cpp) $(wildcard ./src/Class/*/*.cpp) $(wildcard ./src/Class/Animal/*/*.cpp) $(wildcard ./src/Class/Cell/*/*.cpp) 
OBJECTS=$(SOURCES:.cpp=.o)
MAIN=./src/main.cpp
TESTMAIN=./test/test.cpp
EXECUTABLE=./bin/virtual_zoo

TESTS=$(wildcard ./test/*.cpp)
TESTOBJECTS=$(filter-out $(MAIN:.cpp=.o), $(OBJECTS)) $(TESTS:.cpp=.o)
TESTEXECUTABLE=./bin/test

.PHONY: all bin test clean
.PHONY:; @echo Finished!

all: bin test clean
all:; @echo Finished!

bin: $(EXECUTABLE)

test: $(TESTEXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

$(TESTEXECUTABLE): $(TESTOBJECTS)
	$(CC) $(LDFLAGS) $(TESTOBJECTS) -o $@  -pthread -lgtest_main -lgtest

%.o: %.c
	$(CC) $(CFLAGS) $< -o $@

ifeq ($(OS),Windows_NT)
   clean:
	del /Q /f /s *.o
else
   clean:
	-rm $(OBJECTS)
	-rm $(TESTOBJECTS)
endif

