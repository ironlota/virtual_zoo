BIN         :=  bin
MAIN        :=  $(BIN)/virtual_zoo
TEST        :=  $(BIN)/test

MAIN_SRC    :=  $(wildcard src/*.cpp)
MAIN_OBJ    :=  $(MAIN_SRC:.cpp=.o)

TEST_SRC    :=  $(wildcard test/*.cpp)
TEST_OBJ    :=  $(filter-out $(MAIN_OBJ:.cpp=.o), $(OBJECTS)) $(TEST_SRC:.cpp=.o)

ZOO_SRC  	:=  $(wildcard src/class/*.cpp)
ZOO_OBJ  	:=  $(ZOO_SRC:.cpp=.o)

ANIMAL_SRC  :=  $(wildcard src/class/Animal/*.cpp) $(wildcard src/class/Animal/*/*.cpp)
ANIMAL_OBJ  :=  $(ANIMAL_SRC:.cpp=.o)

CELL_SRC  	:=  $(wildcard src/class/Cell/*.cpp) $(wildcard src/class/Cell/*/*.cpp)
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

$(MAIN): $(MAIN_OBJ) $(ZOO_OBJ) $(ANIMAL_OBJ) $(CELL_OBJ) $(CONF_OBJ) | $(BIN)
	$(CC) $(CPPFLAGS) $(CFLAGS) $^ $(LDLIBS) -o $@

$(TEST): $(TEST_OBJ) $(ZOO_OBJ) $(ANIMAL_OBJ) $(CELL_OBJ) $(CONF_OBJ) | $(BIN)
	$(CC) $(LDFLAGS) $(CPPFLAGS) $(CFLAGS) $(GTESTFLAGS) $^ $(LDLIBS) -o $@

$(BIN):
	mkdir $@


ifeq ($(OS),Windows_NT)
   clean:
	del /Q /f /s *.o
else
   clean:
	$(RM) $(MAIN) $(TEST) $(ZOO_OBJ) $(ANIMAL_OBJ) $(CELL_OBJ)
endif 


