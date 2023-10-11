#include <bits/stdc++.h>
using namespace std;
using itr = vector::iterator;

int partition(int* arr, int low, int high){}
void quickSort(int* arr, int low, int high){
  if(low < high){
    int pIndex = partition(arr, low, high);

    quickSort(arr, low, pIndex-1);
    quickSort(arr, pIndex+1, high);
  }
}

int partition(vector<int>& vect, itr low, itr high){}
void quickSort(vector<int>& vect, itr low, itr high){}
