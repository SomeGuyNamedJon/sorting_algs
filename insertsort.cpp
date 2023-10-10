#include <vector>
using namespace std;

void insertSort(int* arr, int size){
  for(int i=1; i<size; i++){
    for(int j=i; j>0; j--){
      if(arr[j] < arr[j-1]){
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
      }
    } 
  }
}

vector<int> insertSort(vector<int> v){
  for(int i=1; i<v.size(); i++){
    for(int j=i; j>0; j--){
      if(v[j] < v[j-1]){
        int temp = v[j];
        v[j] = v[j-1];
        v[j-1] = temp;
      }
    }
  }

  return v;
}
