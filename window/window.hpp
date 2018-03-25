#ifndef __WINDOW_H__
#define __WINDOW_H__

#include <string>
#include <vector>
#include <ncurses.h>

class Position {
/* location of window on terminal screen */
public:
  int x;
  int y;
  Position(int x, int y);
  Position(){}
  std::string to_string();
};

struct Padding {
/* padding of window 
  1 unit = 1 cursor */
  int left;
  int right;
  int top;
  int bottom;
};

class Window {
public:
  Window(){};
  Window(Position start, Position end); /* constructor of window
    * params:
    *  Position start - start coordinates of window
    *  Position end - end coordinates of window */
  Position get_start_position(); /* return start coordinates of window
    * returns :
    *   Position start : start coordinates of window */
  Position get_end_position(); /* return end coordinates of window
    * returns :
    *   Position end : end coordinates of window */
  virtual void set_start_position(int x, int y); /* set start coordinates of window */
  virtual void set_start_position(Position position);
  virtual void set_end_position(int x, int y); /* set start coordinates of window */
  virtual void set_end_position(Position position);
  struct Padding get_padding(); /* return padding of window 
    * returns :
    *   struct Padding padding : left, top, right, bottom padding of window */
  void set_padding(int left, int top, int right, int bottom); /* set padding of window, 1 unit = 1 cursor */
  std::string to_string();
  int get_id();
  static int count;
private:
  int id_;
  Position start_; /* start Position(left top) of window */
  Position end_; /* end Position(right bottom) of window */
  struct Padding padding_; /* left, right, top, bottom padding of window */
};

Window get_screen();

#endif
