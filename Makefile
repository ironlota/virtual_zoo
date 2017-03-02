CC=g++
CFLAGS=-c -Wall -g --std=c++11
LDFLAGS=-g -lm

SOURCES=$(wildcard ./src/*.cpp)
OBJECTS=$(SOURCES:.c=.o)
MAIN=./src/main.cpp
TESTMAIN=./test/main.cpp
EXECUTABLE=./bin/virtual_zoo

TESTS=$(wildcard ./test/*.cpp)
TESTOBJECTS=$(filter-out $(MAIN:.c=.o), $(OBJECTS)) $(TESTS:.c=.o)
TESTEXECUTABLE=./bin/test

.PHONY: all bin test clean
.PHONY:; @echo Finished!

all: bin test
all:; @echo Finished!

bin: $(EXECUTABLE)

test: $(TESTEXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

$(TESTEXECUTABLE): $(TESTOBJECTS)
	$(CC) $(LDFLAGS) $(TESTOBJECTS) -o $@  -pthread -lgtest_main -lgtest

%.o: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	-rm $(OBJECTS)
	-rm $(TESTOBJECTS)