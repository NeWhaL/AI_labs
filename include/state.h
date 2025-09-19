#ifndef STATE_H
#define STATE_H

#include <array>
#include "ball.h"

class State {
  friend bool operator == (const State& s1, const State& s2);

  State* parent;
  std::array<Ball, 12> balls;

public:
  static const int amount_circle;

  State(State* parent = nullptr);
  State(const State& s);
  State& operator = (const State& s);

  void rotate_clockwise(int circle_number);
  void rotate_counterclockwise(int circle_number);
};

#endif STATE_H