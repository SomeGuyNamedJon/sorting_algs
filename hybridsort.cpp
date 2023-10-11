#include <vector>
#include "insertsort.hpp"
#include "mergesort.hpp"
using namespace std;

vector<int> improvedMergeSort(vector<int> v){
  if(v.size() <= 7){
    return insertSort(v);
  }

  vector<int> v1(v.begin(), v.begin() + v.size()/2);
  vector<int> v2(v.begin() + v.size()/2, v.end());
  
  v1 = mergeSort(v1);
  v2 = mergeSort(v2);

  return merge(v1, v2);
}
