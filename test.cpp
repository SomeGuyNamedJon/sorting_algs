#include <bits/stdc++.h>
#include <stdlib.h>
#include "quicksort.hpp"
using namespace std;

int main(){
  size_t size = 10;
  vector<int> vect;
  for(int i=0; i<size; i++){
    vect.push_back(rand() % 500);
    cout << vect[i] << " ";
  }
  cout << endl << endl;

  quickSort(vect,vect.begin(),vect.end()-1);

  for(int i=0; i<size; i++)
    cout << vect[i] << " ";
  cout << endl;
}
