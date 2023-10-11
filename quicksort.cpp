#include <bits/stdc++.h>
using namespace std;
using itr = vector::iterator;

int partition(int* arr, int low, int high){
  int pivot = arr[low];
  int count = 0;

  for(int i=low+1; i<=high; i++){
    if(arr[i] <= pivot)
      count++;
  }

  int pivotIndex = low + count;

  swap(arr[pivotIndex], arr[low]);

  int i=low, j=high;
  while(i < pivotIndex && j > pivotIndex){
    while(arr[i] <= pivot)
      i++;
    while(arr[j] > pivot)
      j--;

    if(i < pivotIndex && j > pivotIndex)
      swap(arr[i++], arr[j--]);
  }

  return pivotIndex;
}
void quickSort(int* arr, int low, int high){
  if(low < high){
    int pIndex = partition(arr, low, high);

    quickSort(arr, low, pIndex-1);
    quickSort(arr, pIndex+1, high);
  }
}

int partition(vector<int>& vect, itr low, itr high){
  return 0;
}
void quickSort(vector<int>& vect, itr low, itr high){}
