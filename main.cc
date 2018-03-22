#include <ncurses.h>                                
#include "window/window.hpp"                         

int focused_window = 0;    
                                                                         
int main()                                                                   
{                                                                            
  initscr();                      /* Start curses mode              */ 
  Window editor(Position(0, 0), Position(100, 100));
  editor.set_padding(1, 1, 1, 1);
  editor.set_text("test");
  refresh();                      /* Print it on to the real screen */ 
  getch();                        /* Wait for user input */            
  endwin();                       /* End curses mode                */ 
                                                                             
  return 0;                                                            
} 
