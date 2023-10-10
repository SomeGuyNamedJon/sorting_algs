all: mergesort insertsort driver

mergesort:
	g++ mergesort.cpp -c -o mergesort.o

insertsort:
	g++ insertsort.cpp -c -o insertsort.o

driver: mergesort insertsort
	g++ driver.cpp -o main mergesort.o insertsort.o

test: mergesort insertsort
	g++ test.cpp -o test mergesort.o insertsort.o

clean:
	rm -f mergesort.o insertsort.o main

