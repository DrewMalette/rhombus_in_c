CC		:= gcc
LIBS	:= -lSDL2 -lSDL2_image

game: main.o rhombus.o
	$(CC) main.o rhombus.o -o bin/game $(LIBS)
	
ysorttest: ysorttest.o rhombus.o 
	$(CC) ysorttest.o rhombus.o -o bin/ysorttest $(LIBS)
	
sdldisplay: sdldisplay.o rhombus.o
	$(CC) sdldisplay.o rhombus.o -o bin/sdldisplay $(LIBS)

main.o: main.c
	$(CC) -c main.c

ysorttest.o: ysorttest.c
	$(CC) -c ysorttest.c
	
sdldisplay.o:
	$(CC) -c sdldisplay.c

rhombus.o: rhombus.c
	$(CC) -c rhombus.c

clean:
	rm *.o
