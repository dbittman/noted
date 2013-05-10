#ifndef __CHORD_H
#define __CHORD_H
#include <vector>

class chord {
	public:
		chord(chord& c): relative_root(c.relative_root), intervals(c.intervals) {}
		chord(int root, std::vector<int> iv):relative_root(root), intervals(iv) {}
	
	private:
		int relative_root;
		std::vector<int> intervals;
};

#endif
