#include <vector>
#ifndef MERGE_SORT_H
#define MERGE_SORT_H
using itr = std::vector<int>::iterator;
int partition(int*,int,int);
void quickSort(int*,int,int);
itr partition(std::vector<int>&,itr,itr);
void quickSort(std::vector<int>&,itr,itr);
#endif
