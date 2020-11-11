game: main.o rhombus.o
	gcc main.o rhombus.o -o bin/game

main.o: main.c
	gcc -c main.c

rhombus.o: rhombus.c
	gcc -c rhombus.c

clean:
	rm *.o game
