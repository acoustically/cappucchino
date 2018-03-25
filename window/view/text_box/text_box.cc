#include "text_box.hpp"

TextBox::TextBox(Position start, Position end) : View(start, end) {
  text_ = "";
}

void TextBox::set_text(std::string text) {
  text_ = text;
  Position start_position = get_start_position();
  Position end_position = get_end_position();
  Padding padding = get_padding();
  mvprintw(start_position.x + padding.left
    , start_position.y + padding.top
    , text.c_str());
  refresh();
}

std::string TextBox::get_text() {
  return text_;  
}
