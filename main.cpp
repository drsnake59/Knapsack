#include "Search.hpp"
#include "Knapsack.hpp"
#include "Rs.hpp"

using namespace std;

int main(int argc, char * argv[]) {

string filename=argv[1];

Knapsack s(filename);
Rs random;

Search * ptrSearch=nullptr;
ptrSearch=&random;
ptrSearch->run(100000,filename);
  
return 0;
}
