#include "../include/asearch_algorithm.h"

ASearch_algorithm::ASearch_algorithm() {
  std::string filename("./states/start_state.txt");
  std::ifstream fin;
  fin.open(filename);
  if (not fin.is_open()) {
    std::cout << "Не удалось открыть файл: " << filename << '\n';
    return;
  }
  std::string start_state;
  std::getline(fin, start_state);
  std::cout << start_state;
  //считывание из файла начального и целевого состояний.
}

void ASearch_algorithm::get_child_elements(State state) {
  //составить 6 дочерних состояний относительно state и добавить их в список O.
  for (int i {0}; i < State::amount_circle; ++i) {

  }
}