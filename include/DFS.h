#ifndef DFS_H
#define DFS_H

#include "../include/asearch_algorithm.h"

class DFS : public ASearch_algorithm {
public:
  DFS();
  State* search();
};

#endif //DFS_H