#include "../include/ball.h"

Ball::Ball(Color c): color{c} {}

bool operator == (const Ball& b1, const Ball& b2) {
  return b1.color == b2.color;
}