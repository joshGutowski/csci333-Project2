BUILD = ../build
CPP = g++
CPPFLAGS = -Wall -Wextra
A = ./Array
V = ./Vector
S = ./Sparse
TEST = ../test



main: arrayTest.cpp $(A)/Array.o $(V)/Vector.o 
	$(CPP) $(CPPFLAGS) -o $(BUILD)/main arrayTest.cpp $(A)/Array.o $(V)/Vector.o 

Array.o: $(A)/Array.h $(A)/Array.cpp
	$(CPP) $(CPPFLAGS) -c $(A)/Array.cpp

Vector.o: $(V)/Vector.h $(V)/Vector.cpp
	$(CPP) $(CPPFLAGS) -c $(V)/Vector.cpp

Sparse.o: $(S)/LLqueue.h $(S)/Sparse.cpp
	$(CPP) $(CPPFLAGS) -c $(S)/Sparse.cpp

clean:
	rm -f *.o
	rm -f *~
	rm -f $(A)/*.o
	rm -f $(A)/*~
	rm -f $(V)/*.o
	rm -f $(V)/*~
	rm -f $(S)/*.o
	rm -f $(S)/*~
	rm -f $(BUILD)/main
