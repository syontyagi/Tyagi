a.out: syonmain.o displaymatrix.o
	gcc -o a.out syonmain.o displaymatrix.o

syonmain.o: syonmain.c displaymatrix.h
	gcc syonmain.c -o syonmain.o -c

displaymatrix.o: displaymatrix.c displaymatrix.h
	gcc displaymatrix.c -o displaymatrix.o -c

b.out: sachimain.o input.o gameover.o
	gcc -o b.out sachimain.o input.o gameover.o

sachimain.o: sachimain.c input.h gameover.h
	gcc sachimain.c -o sachimain.o -c

input.o: input.c input.h
	gcc input.c -o input.o -c

gameover.o: gameover.c gameover.h
	gcc gameover.c -o gameover.o -c

clean:
	rm *.o a.out b.out

