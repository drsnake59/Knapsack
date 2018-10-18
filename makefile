main: Knapsack.o Solution.o main.o Rs.o HBb.o
	g++ -std=c++11 -o main main.o Knapsack.o Solution.o Rs.o HBb.o

Knapsack.o:	Knapsack.cpp 
	g++ -std=c++11 -c Knapsack.cpp
	
Solution.o:	Solution.cpp 
	g++ -std=c++11 -c Solution.cpp
	
HBb.o:	HBb.cpp 
	g++ -std=c++11 -c HBb.cpp

Rs.o:	Rs.cpp 
	g++ -std=c++11 -c Rs.cpp
	
main.o: main.cpp
	g++ -std=c++11 -c main.cpp

clean:
	rm -f *.o main

