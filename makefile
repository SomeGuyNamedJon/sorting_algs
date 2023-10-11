all: mergesort insertsort driver

mergesort:
	g++ mergesort.cpp -c -o mergesort.o

insertsort:
	g++ insertsort.cpp -c -o insertsort.o

quicksort:
	g++ quicksort.cpp -c -o quicksort.o

hybridsort:
	g++ hybridsort.cpp -c -o hybridsort.o

driver: mergesort
	g++ driver.cpp -o main mergesort.o

test: quicksort
	g++ test.cpp -o test quicksort.o

clean:
	rm -f *.o main test

