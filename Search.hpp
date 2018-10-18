#ifndef SEARCH_HPP_
#define SEARCH_HPP_

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Solution.hpp"
#include "Knapsack.hpp"

using namespace std;

class Search {
	public:
		virtual void run(int n, string file)=0;
}
#endif
