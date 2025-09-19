#include "../include/state.h"

const int State::amount_circle {3};

State::State(State* parent = nullptr): parent{parent} {}

State::State(const State& s): parent{s.parent}, balls{s.balls} {}

State& State::operator = (const State& s) {
  parent = s.parent;
  balls = s.balls; 
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

bool operator == (const State& s1, const State& s2) {
  return s1.balls == s2.balls;
}
