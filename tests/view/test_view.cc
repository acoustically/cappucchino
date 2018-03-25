#include "test_view.hpp"

TestView::TestView(){}

void TestView::test_get_id() {
  View view1(Position(0, 0), Position(100, 100));
  if(view1.get_id() != Window::count - 1) {
    std::cout << "fail test_get_id - " << view1.get_id() << " : " << Window::count -1 << std::endl;
  }
  
  View view2(Position(0, 0), Position(100, 100));
  if(view2.get_id() != Window::count - 1) {
    std::cout << "fail test_get_id - " << view2.get_id() << " : " << Window::count - 1  << std::endl;
  }
}

void TestView::test_get_set_position_set_parent() {
  View view1(Position(0, 0), Position(100, 100));
  if(view1.get_start_position().x != 0 || view1.get_start_position().y != 0) {
    std::cout << "fail test_init_view - " << view1.get_start_position().x << ", "
      << view1.get_start_position().y << " : 0, 0 " << std::endl;
  }
  if(view1.get_end_position().x != 100 || view1.get_end_position().y != 100) {
    std::cout << "fail test_init_view - " << view1.get_end_position().x << ", "
      << view1.get_end_position().y << " : 100, 100 " << std::endl;
  }

  view1.set_start_position(2, 1);
  if(view1.get_start_position().x != 2 || view1.get_start_position().y != 1) {
    std::cout << "fail test_get_set_start_position - " << view1.get_start_position().x << ", "
      << view1.get_start_position().y << " : 2, 1" << std::endl;
  }
  view1.set_end_position(102, 101);
  if(view1.get_end_position().x != 102 || view1.get_end_position().y != 101) {
    std::cout << "fail test_get_set_end_position - " << view1.get_end_position().x << ", "
      << view1.get_end_position().y << " : 102, 101 " << std::endl;
  }
  Window window(Position(5, 5), Position(200, 200));
  view1.set_parent(window);
  if(view1.get_start_position().x != 7 || view1.get_start_position().y != 6) {
    std::cout << "fail test_set_parent - " << view1.get_start_position().x << ", "
      << view1.get_start_position().y << " : 7, 6" << std::endl;
  }
  if(view1.get_end_position().x != 107 || view1.get_end_position().y != 106) {
    std::cout << "fail test_set_parent - " << view1.get_end_position().x << ", "
      << view1.get_end_position().y << " : 107, 106" << std::endl;
  }
}
