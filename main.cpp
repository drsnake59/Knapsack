#include "Solution.hpp"
#include "Knapsack.hpp"
#include <fstream>
#include <vector>
#include <string> 

using namespace std;

int main(int argc, char * argv[]) {
  
  Knapsack k(argv[1]);
  //k.print();

  Solution s;
  s._vecbool.resize(k.n);

  s._vecbool[0]=0;
  s._vecbool[1]=1;
  s._vecbool[2]=1;
  s._vecbool[3]=0;
  s._vecbool[4]=1;

 k.eval(s);
 
 cout <<"valeur fitness "<< s.fitness<<endl;
 /*
 cout<<endl;
 
  Solution s1;
  s1._vecbool.resize(k.n);

  s1._vecbool[0]=1;
  s1._vecbool[1]=0;
  s1._vecbool[2]=1;
  s1._vecbool[3]=1;
  s1._vecbool[4]=1;
  k.eval(s1);

  cout <<"valeur fitness "<< s1.fitness<<endl;*/

  return 0;
}
