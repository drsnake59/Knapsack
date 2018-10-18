#ifndef RS_HPP_
#define RS_HPP_

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Solution.hpp"
#include "Knapsack.hpp"

using namespace std;

class HBb : public Search {
	public:
		void run(int n, string file) override;
};

#endif
