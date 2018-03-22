#ifndef __TEXT_BOX_H__
#define __TEXT_BOX_H__


#include "../window.hpp"
#include <string>
#include <ncurses.h>

class TextBox : public Window {
public:
  TextBox(Position start, Position end);
  void set_text(std::string text);  
  std::string get_text();

private:
  std::string text_;
};


#endif
