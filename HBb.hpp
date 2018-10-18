#ifndef HBb_HPP_
#define HBb_HPP_
#include "Search.hpp"
#include "Solution.hpp"
#include "Knapsack.hpp"

using namespace std;

class HBb : public Search {
		float run(int nbEval, string filename) const override;
};

#endif
