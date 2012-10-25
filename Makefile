BUILD = ./build
TEST = ./test
LIB = ./lib
SRC = ./src
A = ./src/Array

CPP = g++
CPPFLAGS = -Wall -Wextra

all: $(BUILD)/main $(TEST)/queue_test

$(BUILD)/main: $(A)/Array.cpp $(A)/Array.o
	cd $(SRC); $(MAKE)

$(TEST)/queue_test: $(TEST)/queue.cpp $(A)/Array.o
	cd $(TEST); $(MAKE)

clean:
	cd $(SRC); $(MAKE) clean
	cd $(TEST); $(MAKE) clean

