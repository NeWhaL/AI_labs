#include "../include/state.h"

const int State::amount_circle {3};

State::State(State* parent): parent{parent} {}

State::State(const std::string& state): parent{nullptr} {
  for (size_t i {0}; i < state.size(); ++i)
    balls[i] = Ball(state[i]);
}

State::State(const State& s): parent{s.parent}, balls{s.balls} {}

State& State::operator = (const State& s) {
  parent = s.parent;
  balls = s.balls; 
  return *this;
}

void State::rotate_clockwise(int circle_number) {
  switch (circle_number) {
    case 0: {

    } break;
    case 1: {
      
    } break;
    case 2: {
      
    } break;
  }
}

void State::rotate_counterclockwise(int circle_number) {
  switch (circle_number) {
    case 0: {

    } break;
    case 1: {
      
    } break;
    case 2: {
      
    } break;
  }
}

State* State::get_parent() {
  return parent;
}

std::string State::get_string_state() {
  std::string result;
  for (auto ball : balls)
    result.push_back(ball.get_char_color());
  return result;
}

bool operator == (const State& s1, const State& s2) {
  return s1.balls == s2.balls;
}
