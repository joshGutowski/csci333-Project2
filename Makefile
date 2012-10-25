BUILD = ./build
TEST = ./test
LIB = ./lib
SRC = ./src
AQUEUE = ./src/AQueue
TT = ./src/TimingTests

CPP = g++
CPPFLAGS = -Wall -Wextra

all: $(BUILD)/main $(TEST)/queue_test

$(BUILD)/main: $(AQUEUE)/Aqueue.cpp $(AQUEUE)/Aqueue.o
	cd $(SRC); $(MAKE)

$(TEST)/queue_test: $(TEST)/queue.cpp $(AQUEUE)/Aqueue.o
	cd $(TEST); $(MAKE)

clean:
	cd $(SRC); $(MAKE) clean
	cd $(TEST); $(MAKE) clean

