#ifndef BFS_H
#define BFS_H

#include "asearch_algorithm.h"

class BFS : public ASearch_algorithm {
public:
	BFS();
	State* search();
};

#endif //BFS_H