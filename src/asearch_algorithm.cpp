#include "../include/asearch_algorithm.h"

ASearch_algorithm::ASearch_algorithm() {
  std::string filename_start_state("./states/start_state.txt");
  std::ifstream fin_start_state;
  fin_start_state.open(filename_start_state);
  if (not fin_start_state.is_open()) {
    std::cout << "не удалось открыть файл: " << filename_start_state << '\n';
    return;
  }
  std::string start_state_string;
  std::getline(fin_start_state, start_state_string);
  start_state = State(start_state_string);
  fin_start_state.close();

  std::string filename_target_state("./states/target_state.txt");
  std::ifstream fin_target_state;
  fin_target_state.open(filename_target_state);
  if (not fin_target_state.is_open()) { 
    std::cout << "не удалось открыть файл: " << filename_target_state << '\n';
    return;
  }
  std::string target_state_string;
  std::getline(fin_target_state, target_state_string);
  target_state = State(target_state_string);
  fin_target_state.close();
}

void ASearch_algorithm::get_child_elements(State state) {
  //составить 6 дочерних состояний относительно state и добавить их в список O.
  for (int i {0}; i < State::amount_circle; ++i) {

  }
}