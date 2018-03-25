#include <iostream>
#include <ncurses.h>
#include "view/test_view.hpp"

int main() {
  TestView test_view;
  test_view.test_get_id();
  test_view.test_get_set_position_set_parent();
  return 0;
}
