CC		:= gcc
LIBS	:= -lSDL2 -lSDL2_image

game: main.o rhombus.o
	$(CC) main.o rhombus.o -o bin/game $(LIBS)
	
ysorttest: ysorttest.o rhombus.o 
	$(CC) ysorttest.o rhombus.o -o bin/ysorttest $(LIBS)

%.o: %.c
	$(CC) -c $<

clean:
	rm *.o
