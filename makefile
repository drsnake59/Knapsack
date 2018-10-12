main: Knapsack.o Solution.o main.o
	g++ -std=c++11 -o main main.o Knapsack.o Solution.o

Knapsack.o:	Knapsack.cpp 
	g++ -std=c++11 -c Knapsack.cpp
	
Solution.o:	Solution.cpp 
	g++ -std=c++11 -c Solution.cpp

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

clean:
	rm -f *.o main

