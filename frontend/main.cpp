#include <iostream>
#include <chord.hpp>
#include <key.hpp>
using namespace std;

void parse_input()
{
	while(!cin.eof())
	{
		string s;
		size_t off;
		cin >> s;
		off = s.find("key=");
		if(off != string::npos)
		{
			cout << "setting key to " << s.substr(off+4) << endl;
			noted::set_key(s.substr(off+4).c_str());
			continue;
		}
		
		
	}
}

int main(int argc, char **argv)
{
	//noted::chord c("Cm");
	//c.print_intervals();
	parse_input();
	noted::cleanup_key();
	return 0;
}
