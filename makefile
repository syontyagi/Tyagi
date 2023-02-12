a.out: syonmain.o displaymatrix.o
	gcc -o a.out syonmain.o displaymatrix.o

syonmain.o: syonmain.c displaymatrix.h
	gcc syonmain.c -o syonmain.o -c

displaymatrix.o: displaymatrix.c displaymatrix.h
	gcc displaymatrix.c -o displaymatrix.o -c

clean:
	rm *.o a.out

