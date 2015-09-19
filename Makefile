test:
	make build;
	./demo;

build:
	gcc -I"/usr/include/SDL" -c demo.c;
	gcc demo.o -lSDL -o demo;

clean:
	-rm demo.o;
	-rm demo;


