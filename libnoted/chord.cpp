#include <chord.hpp>
#include <iostream>
#include <vector>
#include <cstring>
#include <cassert>
using namespace std;
namespace noted {

int chord::parse_chord_string(char *data, vector<int>& in)
{
	assert(data);
	char is_minor_chord = 0;
	char base_chord_name = *data;
	/* search for alternate base */
	char *alt_base = strchr(data, '/');
	if(alt_base) {
		char alt_base_note = *(alt_base+1);
	}
	if(strchr(data, '7')) {
		/* 7th chord */
	}
	if(strchr(data, '9')) {
		/* 9th chord */
	}
	
	if(strchr(data, 'm')) {
		is_minor_chord = 1;
	}
	in[0] = 0;
	
	if(is_minor_chord) {
		in[1]=3;
	} else {
		in[1]=4;
	}
	in[2] = 7; /* 5th */

	in.resize(3); /* resize to fit */
}

chord::chord(char *data)
{	
	intervals.resize(12);
	relative_root = parse_chord_string(data, intervals);
}	
	
void chord::print_intervals()
{
	vector<int>::iterator it;
	for(it = intervals.begin(); it != intervals.end(); ++it)
		cout << *it << endl;
}
	
	
	
	
};
