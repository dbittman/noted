#ifndef __CHORD_H
#define __CHORD_H
#include <vector>
namespace noted {
class chord {
	public:
		chord(chord& c): relative_root(c.relative_root), intervals(c.intervals) {}
		chord(int root, std::vector<int> iv):relative_root(root), intervals(iv) {}
		chord(char *string);
		int parse_chord_string(char *string, std::vector<int>&);
		void print_intervals();
	private:
		int relative_root;
		std::vector<int> intervals; 
};
};
#endif
