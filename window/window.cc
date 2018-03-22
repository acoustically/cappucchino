#include "window.hpp"

Position::Position(int x, int y) : x(x), y(y) {
}

std::string Position::to_string() {
  return "< x : "  + std::to_string(x) + " y : " + std::to_string(y) + " >";
}

Window::Window(Position start, Position end) : start_(start), end_(end) {
  set_padding(0, 0, 0, 0);
}

Position Window::get_start_position() {
  return start_;
}

Position Window::get_end_position() {
  return end_;
}

void Window::set_start_position(int x, int y) {
  start_.x = x;
  start_.y = y;
}

void Window::set_start_position(Position position) {
  start_.x = position.x;
  start_.y = position.y;
}

void Window::set_end_position(int x, int y) {
  end_.x = x;
  end_.y = y;
}

void Window::set_end_position(Position position) {
  end_.x = position.x;
  end_.y = position.y;
}

struct Padding Window::get_padding() {
  return padding_;
}

void Window::set_padding(int left, int top, int right, int bottom) {
  Padding padding;
  padding.left = left;
  padding.right = right;
  padding.top = top;
  padding.bottom = bottom;  
  padding_ = padding;
}

std::string Window::to_string() {
  return "[\n  start coordinates : " + start_.to_string() + "\n  end coordinates : " + end_.to_string() 
          + "\n  padding : " + std::to_string(padding_.left) + ", " + std::to_string(padding_.top)
          + ", " + std::to_string(padding_.right) + ", " + std::to_string(padding_.bottom) + " \n]";
}
