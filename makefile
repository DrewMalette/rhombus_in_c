game: main.o rhombus.o
	gcc main.o rhombus.o -o bin/game
	
ysorttest: ysorttest.o rhombus.o 
	gcc ysorttest.o rhombus.o -o bin/ysorttest

main.o: main.c
	gcc -c main.c

ysorttest.o: ysorttest.c
	gcc -c ysorttest.c

rhombus.o: rhombus.c
	gcc -c rhombus.c

clean:
	rm *.o
