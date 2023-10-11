#include <vector>
using namespace std;

int* merge(int* a, int* b, size_t aSize, size_t bSize){
  int* newArr = new int[aSize+bSize];
  int i=0, j=0, k=0;
  int elem;

  while(i<aSize && j<bSize){
    if(a[i] < b[j]){
      elem = a[i];
      i++;
    }else{
      elem = b[j];
      j++;
    }

    newArr[k] = elem;
    k++;
  }

  for(;k < aSize+bSize; k++){
    newArr[k] = i<aSize ? a[i++] : b[j++];
  }

  return newArr;
}

vector<int> merge(vector<int> a, vector<int> b){
  vector<int> newVect;
  int elem;
  while(!a.empty() && !b.empty()){
    if(a.front() < b.front()){
      elem = a.front();
      a.erase(a.begin());
    }else{
      elem = b.front();
      b.erase(b.begin());
    }

    newVect.push_back(elem);
  }

  if(!a.empty()){
    newVect.insert(newVect.end(), a.begin(), a.end());
  }else if(!b.empty()){
    newVect.insert(newVect.end(), b.begin(), b.end());
  }

  return newVect;
}

int* mergeSort(int* arr, size_t size){
  if(size <= 1){
    return arr;
  }
  
  size_t arr2_size = size % 2 == 0 ? size/2 : size/2 + 1;

  int* arr1 = new int[size/2];
  int* arr2 = new int[arr2_size];

  for(int i=0; i<size/2; i++)
    arr1[i] = arr[i];
  for(int i=size/2; i<size; i++)
    arr2[i-size/2] = arr[i];

  arr1 = mergeSort(arr1, size/2);
  arr2 = mergeSort(arr2, arr2_size);

  return merge(arr1, arr2, size/2, arr2_size);
}

vector<int> mergeSort(vector<int> v){
  if(v.size() <= 1){
    return v;
  }

  vector<int> v1(v.begin(), v.begin() + v.size()/2);
  vector<int> v2(v.begin() + v.size()/2, v.end());
  
  v1 = mergeSort(v1);
  v2 = mergeSort(v2);

  return merge(v1, v2);
}
