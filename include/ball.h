#ifndef BALL_H
#define BALL_H

class Ball {
  friend bool operator == (const Ball&, const Ball&);
public:
  enum class Color { NONE, RED, GREEN, BLUE };
  Color color;
  
  Ball() = default;
  Ball(char c);
  Ball(Color c);
  char get_char_color();
};

#endif //BALL_H