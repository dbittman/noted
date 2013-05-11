#include <iostream>
#include <notes.hpp>

namespace noted {

int get_correct_offset(int n)
{
	while(n < 0) n+=12;
	n = (n % 12);
	return n;
}















};

