#ifndef ASEARCH_ALGORITHM_H
#define ASEARCH_ALGORITHM_H

#include <list>
#include <fstream>
#include <iostream>

#include "state.h"

class ASearch_algorithm {
protected:
  State start_state; //Начальное состояние. parent == nullptr;
  State target_state; //Состояние, к которому нужно прийти. parent == nullptr;
  State current_state;
  std::list<State> O;
  std::list<State> C;

public:
  ASearch_algorithm();
  virtual ~ASearch_algorithm() = default;
  virtual State* search() = 0; //Алгоритм поиска
  //Раскрытие состояния (Пополнение списка O дочерними элементами состояния state)
  void get_child_elements(State state);  
};

#endif //ASEARCH_ALGORITHM_H