#ifndef RS_HPP_
#define RS_HPP_
#include "Search.hpp"
#include "Solution.hpp"
#include "Knapsack.hpp"

using namespace std;

class Rs : public Search {
		float run(int nbEval, string filename) const override;
};

#endif
