game: main.o rhombus.o
	gcc main.o rhombus.o -o bin/game -lSDL2 -lSDL2_image
	
ysorttest: ysorttest.o rhombus.o 
	gcc ysorttest.o rhombus.o -o bin/ysorttest -lSDL2 -lSDL2_image
	
sdldisplay: sdldisplay.o rhombus.o
	gcc sdldisplay.o rhombus.o -o bin/sdldisplay -lSDL2 -lSDL2_image

main.o: main.c
	gcc -c main.c

ysorttest.o: ysorttest.c
	gcc -c ysorttest.c
	
sdldisplay.o:
	gcc -c sdldisplay.c

rhombus.o: rhombus.c
	gcc -c rhombus.c

clean:
	rm *.o
