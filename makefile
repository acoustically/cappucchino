test = g++ tests/test.cc window/window.cc -o test -lncurses
cappucchino = g++ main.cc window/window.cc -o cappucchino -lncurses
all: 
		${test}; ${cappucchino};
		
