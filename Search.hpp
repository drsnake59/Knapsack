#ifndef SEARCH_HPP_
#define SEARCH_HPP_

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Search{
	public:
		virtual float run(int n, string file) const = 0;
};
#endif
