#include <ncurses.h>                                
#include "window/window.hpp"                         
#include "window/text_box/text_box.hpp"

int focused_window = 0;    
                                                                         
int main()                                                                   
{                                                                            
  initscr();                      /* Start curses mode              */ 
  TextBox text_box(Position(1, 1), Position(100, 100));
  text_box.set_text("test");
  refresh();                      /* Print it on to the real screen */ 
  getch();                        /* Wait for user input */            
  endwin();                       /* End curses mode                */ 
                                                                             
  return 0;                                                            
} 
