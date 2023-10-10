#include <vector>
#ifndef MERGE_SORT_H
#define MERGE_SORT_H
int partition(int*,int,int);
void quickSort(int*,int,int);
int partition(std::vector<int>&,int,int);
void quickSort(std::vector<int>&,int,int);
#endif
