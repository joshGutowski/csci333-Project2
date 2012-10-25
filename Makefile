BUILD = ./build
TEST = ./test
LIB = ./lib
SRC = ./src
A = ./src/Array

CPP = g++
CPPFLAGS = -Wall -Wextra

all: $(BUILD)/main $(TEST)/twoD_test

$(BUILD)/main: $(A)/Array.cpp $(A)/Array.o
	cd $(SRC); $(MAKE)

$(TEST)/twoDTest: $(TEST)/twoDArray.cpp $(A)/Array.o
	cd $(TEST); $(MAKE)

clean:
	cd $(SRC); $(MAKE) clean
	cd $(TEST); $(MAKE) clean

