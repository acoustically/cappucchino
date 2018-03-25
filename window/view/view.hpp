#ifndef __VIEW_H__
#define __VIEW_H__

#include "../window.hpp"
#include <iostream>

class View : public Window {
public:
  View(Position start, Position end);
  void set_parent(Window parant);
  int get_parent_id();
  virtual void set_start_position(int x, int y);
  virtual void set_start_position(Position start);
  virtual void set_end_position(int x, int y);
  virtual void set_end_position(Position end);

private:
  Position get_default_start_position();
  Position get_default_end_position();
  Window parent_;
};


#endif

