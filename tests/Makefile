all: test.out

test.out: test.o uHALTestUSART.o uHALTestHarness.o
	gcc -o testing test.o uHALTestUSART.o uHALTestHarness.o

test.o:
	gcc test.c -c -I../include -I../config -I. -g

uHALTestUSART.o:
	gcc ../config/test/uHALTestUSART.c -c -I../include -I../config -I. -g

uHALTestHarness.o:
	gcc ../config/test/uHALTestHarness.c -c -I../include -I../config -I. -g		

clean:
	rm *.o