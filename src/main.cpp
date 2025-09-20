// #include "../include/main.h"
#include "../include/DFS.h"

int main() {
  ASearch_algorithm* dfs(new DFS);
  for (State* i = dfs->search(); i != nullptr; i = i->get_parent()) {
    std::cout << i->get_string_state() << std::endl;
  }
  delete dfs;
  return 0;
}