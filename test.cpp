#include <bits/stdc++.h>
#include "mergesort.hpp"
#include "quicksort.hpp"
using namespace std;

int main(){
  int a[] = {1, 5, 7, 10, 19};
  int b[] = {2, 4, 6, 11};
  size_t size_a = sizeof(a)/sizeof(*a);
  size_t size_b = sizeof(b)/sizeof(*b);
  
  int* result = merge(a, b, size_a, size_b);

  for(int i=0; i<size_a+size_b; i++){
    cout << result[i] << " "; 
  }
  cout << endl;
}
