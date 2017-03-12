BIN         :=  bin
MAIN        :=  $(BIN)/virtual_zoo
TEST        :=  $(BIN)/test

MAIN_SRC    :=  $(wildcard src/*.cpp)
MAIN_OBJ    :=  $(MAIN_SRC:.cpp=.o)

TEST_SRC    :=  $(wildcard test/*.cpp)
TEST_OBJ    :=  $(TEST_SRC:.cpp=.o)

ZOO_SRC  	:=  $(wildcard src/class/*.cpp)
ZOO_OBJ  	:=  $(ZOO_SRC:.cpp=.o)

ANIMAL_SRC  :=  $(wildcard src/class/Animal/*.cpp) $(wildcard src/class/Animal/*/*.cpp)
ANIMAL_OBJ  :=  $(ANIMAL_SRC:.cpp=.o)

CELL_SRC  	:=  $(wildcard src/class/Cell/*.cpp) $(wildcard src/class/Cell/*/*.cpp)
CELL_OBJ  	:=  $(CELL_SRC:.cpp=.o)

CC			:=  g++
CPPFLAGS    :=  -I. --std=c++11
CFLAGS      :=  -Wall -ggdb -g -O0
LDFLAGS     :=  -pthread
GTESTFLAGS  :=  -lgtest_main -lgtest

.PHONY: all main test clean
.PHONY:; @echo Finished!

all: main test
all:; @echo Finished!

main: $(MAIN)
test: $(TEST)

$(MAIN): $(MAIN_OBJ) $(ZOO_OBJ) $(ANIMAL_OBJ) $(CELL_OBJ) | $(BIN)
	$(CC) $(CPPFLAGS) $(CFLAGS) $^ $(LDLIBS) -o $@

$(TEST): $(TEST_OBJ) $(ZOO_OBJ) $(ANIMAL_OBJ) $(CELL_OBJ) | $(BIN)
	$(CC) $(LDFLAGS) $(CPPFLAGS) $(GTESTFLAGS) $^ $(LDLIBS) -o $@

$(BIN):
	mkdir $@


ifeq ($(OS),Windows_NT)
   clean:
	del /Q /f /s *.o
else
   clean:
	$(RM) $(MAIN) $(TEST) $(ZOO_OBJ) $(ANIMAL_OBJ) $(CELL_OBJ)
endif 


