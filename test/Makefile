BUILD = ../build
TEST = ../test
LIB = ../lib
SRC = ../src
GTEST = $(LIB)/gtest-1.6.0
GTEST_MAINA = $(GTEST)/make/gtest_main.a

GTEST_INCLUDES = -I$(GTEST) -I$(GTEST)/include

CPP = g++
CPPFLAGS = -Wall -Wextra


TwoD_test: TwoDArray.cpp $(SRC)/Array/Array.o $(SRC)/Vector/Vector.o $(SRC)/Sparse/Sparse.o $(GTEST_MAINA)
	$(CPP) $(CFLAGS) $(GTEST_INCLUDES) -pthread -o TwoD_test TwoDArray.cpp $(SRC)/Array/Array.o $(SRC)/Vector/Vector.o $(SRC)/Sparse/Sparse.o $(GTEST_MAINA)

$(GTEST_MAINA): $(GTEST)/src/*.cc $(GTEST)/src/*.h
	cd $(GTEST)/make; make

clean:
	rm -f *~
	rm -f TwoD_test
	rm -f $(GTEST_MAINA)
	cd $(GTEST)/make; $(MAKE) clean


