MAIN        :=  main
TEST        :=  test_exec

MAIN_SRC    :=  $(wildcard src/*.cpp)
MAIN_OBJ    :=  $(MAIN_SRC:.cpp=.o)

TEST_SRC    :=  $(wildcard test/*.cpp)
TEST_OBJ    :=  $(filter-out $(MAIN_OBJ:.cpp=.o), $(OBJECTS)) $(TEST_SRC:.cpp=.o)

ZOO_SRC  	:=  $(wildcard src/class/*.cpp)
ZOO_OBJ  	:=  $(ZOO_SRC:.cpp=.o)

ANIMAL_SRC  :=  $(wildcard src/class/Animal/*.cpp) $(wildcard src/class/Animal/*/*.cpp)
ANIMAL_OBJ  :=  $(ANIMAL_SRC:.cpp=.o)

CELL_SRC  	:=  $(wildcard src/class/Cell/*.cpp) $(wildcard src/class/Cell/*/*.cpp) $(wildcard src/class/Cell/Facility/*/*.cpp)
CELL_OBJ  	:=  $(CELL_SRC:.cpp=.o)

CONF_SRC  	:=  $(wildcard src/class/ConfigStore/*.cpp)
CONF_OBJ  	:=  $(CONF_SRC:.cpp=.o)

CC			:=  g++
CPPFLAGS    :=  -I. --std=c++11
CFLAGS      :=  -Wall -ggdb -g -O0
LDFLAGS     :=  -pthread
GTESTFLAGS  :=  -lgtest_main -lgtest

.PHONY: all main test docs clean
.PHONY:; @echo Finished!

all: main test docs
all:; @echo Finished!

program : main test clean
program:; @echo Finished!

prog : main test
prog:; @echo Finished!

main: $(MAIN)
test: $(TEST)

docs:
	doxygen ./Doxyfile

$(MAIN): $(MAIN_OBJ) $(ZOO_OBJ) $(ANIMAL_OBJ) $(CELL_OBJ) $(CONF_OBJ)
	$(CC) $(CPPFLAGS) $(CFLAGS) $^ $(LDLIBS) -o $@  $(LDFLAGS)
 
$(TEST): $(TEST_OBJ) $(ZOO_OBJ) $(ANIMAL_OBJ) $(CELL_OBJ) $(CONF_OBJ)
	$(CC) $(LDFLAGS) $(CPPFLAGS) $(CFLAGS) $(GTESTFLAGS) $^ $(LDLIBS) -o $@ $(LDFLAGS)

$(BIN):
	mkdir $@

ifeq ($(OS),Windows_NT)
   clean:
	del /Q /f /s *.o
else
   clean:
	$(RM) $(MAIN_OBJ) $(TEST_OBJ) $(ZOO_OBJ) $(ANIMAL_OBJ) $(CELL_OBJ)
endif 
