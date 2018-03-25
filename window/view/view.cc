#include "view.hpp"

View::View(Position start, Position end) : Window(start, end) {
  parent_ = get_screen(); 
}

void View::set_parent(Window parent) {
  parent_ = parent;
  Position start_position = get_default_start_position();
  Position end_position = get_default_start_position();
  
  start_position.x += get_start_position().x;
  start_position.y += get_start_position().y;
  end_position.x += get_end_position().x;
  end_position.y += get_end_position().y;

  Window::set_start_position(start_position);
  Window::set_end_position(end_position);
}

void View::set_start_position(int x, int y) {
  Position start_position = get_default_start_position(); 
  start_position.x += x;
  start_position.y += y;
  Window::set_start_position(start_position);
} 

void View::set_start_position(Position start) {
  Position start_position = get_default_start_position(); 
  start_position.x += start.x;
  start_position.y += start.y;
  Window::set_start_position(start_position);
}
 
void View::set_end_position(int x, int y) {
  Position end_position = get_default_start_position(); 
  end_position.x += x;
  end_position.y += y;
  Window::set_end_position(end_position);
} 

void View::set_end_position(Position end) {
  Position end_position = get_default_start_position(); 
  end_position.x += end.x;
  end_position.y += end.y;
  Window::set_end_position(end_position);
} 

Position View::get_default_start_position() {
  Position default_start_position = parent_.get_start_position();
  struct Padding parent_padding = parent_.get_padding();
  default_start_position.x += parent_padding.left;
  default_start_position.y += parent_padding.top;
  return default_start_position;
}

Position View::get_default_end_position() {
  Position default_end_position = parent_.get_end_position();
  struct Padding parent_padding = parent_.get_padding();
  default_end_position.x += parent_padding.right;
  default_end_position.y += parent_padding.bottom;
  return default_end_position;
}

