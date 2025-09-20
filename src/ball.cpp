#include "../include/ball.h"

Ball::Ball(char c) {
  switch (c) {
    case 'r': {
      color = Ball::Color::RED;
    } break;
    case 'g': {
      color = Ball::Color::GREEN;
    } break;
    case 'b': {
      color = Ball::Color::BLUE;
    } break;
  }
}

Ball::Ball(Color c): color{c} {}

char Ball::get_char_color() {
  char c;
  switch (color) {
    case Ball::Color::RED: {
      c = 'r';
    } break;
    case Ball::Color::GREEN: {
      c = 'g';
    } break;
    case Ball::Color::BLUE: {
      c = 'b';
    } break;
  }
  return c;
}

bool operator == (const Ball& b1, const Ball& b2) {
  return b1.color == b2.color;
}