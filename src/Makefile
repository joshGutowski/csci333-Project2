BUILD = ../build
CPP = g++
CPPFLAGS = -Wall -Wextra
TIME = ./TimingTests
AQ = ./AQueue
LQ = ./LQueue
LLQ = ./LLQueue

main: $(TIME)/tt.cpp $(AQ)/Aqueue.o $(LQ)/Lqueue.o $(LLQ)/LLqueue.o
	$(CPP) $(CPPFLAGS) -o $(BUILD)/main $(TIME)/tt.cpp $(AQ)/Aqueue.o $(LQ)/Lqueue.o $(LLQ)/LLqueue.o

Aqueue.o: $(AQ)/Aqueue.h $(AQ)/Aqueue.cpp
	$(CPP) $(CPPFLAGS) -c $(AQ)/Aqueue.cpp

Lqueue.o: $(LQ)/Lqueue.h $(LQ)/Lqueue.cpp
	$(CPP) $(CPPFLAGS) -c $(LQ)/Lqueue.cpp

LLqueue.o: $(LLQ)/LLqueue.h $(LLQ)/LLqueue.cpp
	$(CPP) $(CPPFLAGS) -c $(LLQ)/LLqueue.cpp

clean:
	rm -f *.o
	rm -f *~
	rm -f $(AQ)/*.o
	rm -f $(AQ)/*~
	rm -f $(LQ)/*.o
	rm -f $(LQ)/*~
	rm -f $(LLQ)/*.o
	rm -f $(LLQ)/*~
	rm -f $(TIME)/*.o
	rm -f $(TIME)/*~
	rm -f $(BUILD)/main
