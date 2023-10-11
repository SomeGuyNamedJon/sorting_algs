#include <bits/stdc++.h>
#include <stdlib.h>
#include "quicksort.hpp"
using namespace std;

int main(){
  size_t size = 10;
  int* arr = new int[size];
  for(int i=0; i<size; i++){
    arr[i] = rand() % 500;
    cout << arr[i] << " ";
  }
  cout << endl << endl;

  quickSort(arr,0,size-1);

  for(int i=0; i<size; i++)
    cout << arr[i] << " ";
  cout << endl;
}
