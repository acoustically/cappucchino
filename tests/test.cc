#include <iostream>
#include "../window/window.hpp"
#include <ncurses.h>

int main() {
  Window window(Position(0, 0), Position(100, 100));
  std::cout << window.to_string() << std::endl;
  window.set_start_position(1, 2);
  window.set_end_position(99, 98);
  std::cout << window.to_string() << std::endl;
  window.set_start_position(Position(2, 3));
  window.set_end_position(Position(97, 98));
  std::cout << window.to_string() << std::endl;
  window.set_padding(1, 2, 3, 4);
  std::cout << window.to_string() << std::endl;
  return 0;
}
