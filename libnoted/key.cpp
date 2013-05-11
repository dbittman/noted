#include <iostream>
#include <chord.hpp>
using namespace std;
namespace noted {
chord *current_key=0;

void set_key(const char *data)
{
	if(current_key != 0) delete current_key;
	current_key = new chord(data);
}

void set_key(chord c)
{
	if(current_key != 0) delete current_key;
	current_key = new chord(c);
}

void cleanup_key()
{
	if(current_key) delete current_key;
}

};
