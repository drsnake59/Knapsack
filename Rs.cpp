#include "Rs.hpp"

float Rs::run(int nbEval, string filename) const{
    Solution s1;
    float evalMax=0.0;
    
    srand(time(NULL));
    
    Knapsack k1(filename);
    for(int i=0;i<nbEval;i++){
		s1._vecbool.resize(k1.n);
		for(int i=0;i<k1.n;i++){
			s1._vecbool[i]=rand()%2;
		}

		k1.eval(s1);

		evalMax=(s1.fitness>evalMax)? s1.fitness : evalMax;
		
	}
	cout<<evalMax<<endl;	
	return evalMax;
}
