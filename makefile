window = ./window
text_box = ./window/text_box

test = g++ tests/test.cc ${window}/window.cc ${text_box}/text_box.cc -o test -lncurses
cappucchino = g++ main.cc ${window}/window.cc ${text_box}/text_box.cc -o cappucchino -lncurses
all: 
		${test}; ${cappucchino};
		
