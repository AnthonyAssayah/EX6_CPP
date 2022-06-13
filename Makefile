CC = clang++-9
FLAG = -Wall -c

all: Test


Test: Game.o Team.o Test.o 
	$(CC) -o Test Test.o Team.o 


Team.o: Team.cpp 
	$(CC) $(FLAG) Team.cpp 

Game.o: Game.cpp 
	$(CC) $(FLAG) Game.cpp 

Test.o: Test.cpp
	$(CC) $(FLAG) Test.cpp


clean: 
	rm -rf *.o *.a Test Team Game