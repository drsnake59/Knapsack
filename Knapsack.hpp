#ifndef PERSONNE_HPP_
#define PERSONNE_HPP_
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Solution.hpp"
#include <stdlib.h>
#include <time.h>  

using namespace std;

class Knapsack{
	public:
        std::vector<int> _profits;
        std::vector<int> _poids;
        int _capacite;
        double _beta;
        int n;//nombre d'element du sac

		Knapsack(string filename);
		void printFic(int nbEval,string filename);
		void eval(Solution & s);
		void print();
		void rechercheAleatoire(int nbEval,string filename);

};
#endif

