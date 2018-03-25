window = ./window/window.cc ./window/text_box/text_box.cc ./window/view/view.cc
main = ./main.cc
test_ = ./tests/test.cc ./tests/view/test_view.cc

test = g++ ${test_} ${window} -o test -lncurses
kicea = g++ ${main} ${window} -o kicea -lncurses

all: 
		${test}; ${kicea};
		
