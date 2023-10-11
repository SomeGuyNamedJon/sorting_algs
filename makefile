all: mergesort insertsort driver

mergesort:
	g++ mergesort.cpp -c -o mergesort.o

insertsort:
	g++ insertsort.cpp -c -o insertsort.o

quicksort:
	g++ quicksort.cpp -c -o quicksort.o

driver: mergesort insertsort
	g++ driver.cpp -o main mergesort.o insertsort.o

test: quicksort
	g++ test.cpp -o test quicksort.o

clean:
	rm -f *.o main test

