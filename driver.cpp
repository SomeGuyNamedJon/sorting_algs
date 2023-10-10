#include <bits/stdc++.h>
#include <stdlib.h>
#include <chrono>
#include "mergesort.hpp"
#include "quicksort.hpp"

using namespace std;
using hr_clock = chrono::high_resolution_clock;
using hr_time_point = hr_clock::time_point;
using hr_duration = hr_clock::duration;
using microseconds = chrono::microseconds;

int main(){
  vector<int> resultVect;
  vector<int> test;
  int* result;
  int size = 0;

  cout << "n: ";
  cin >> size;

  int* testArr = new int[size];

  for(int i=0; i<size; i++){
    int num = rand() % 500;
    test.push_back(num);
    testArr[i] = num;
  }

  auto start = hr_clock::now();
  result = mergeSort(testArr, size);
  auto arr_mergeSortTime = hr_clock::now() - start;

  start = hr_clock::now();
  resultVect = mergeSort(test);
  auto mergeSortTime = hr_clock::now() - start;
  
  auto mergeSortElapsed = chrono::duration_cast<microseconds>(mergeSortTime);
  auto arr_mergeSortElapsed = chrono::duration_cast<microseconds>(arr_mergeSortTime);

  cout << " Array Merge Sort Time: " << arr_mergeSortElapsed.count() / 1000.0f << endl;
  cout << " Vector Merge Sort Time: " << mergeSortElapsed.count() / 1000.0f << endl;
}
