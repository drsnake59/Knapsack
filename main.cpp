#include "Solution.hpp"
#include "Knapsack.hpp"
#include <fstream>
#include <vector>
#include <string> 

using namespace std;

int main(int argc, char * argv[]) {
 string filename=argv[1];
Knapsack s(filename);
s.rechercheAleatoire(1000,filename);
  return 0;
}
