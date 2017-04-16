#ifndef PROJ4_MINMAXHEAP_H
#define PROJ4_MINMAXHEAP_H

#include <iostream>
#include "Heap.h"


template<typename T>
class MinMaxHeap {
public:

    MinMaxHeap(int capacity);

    MinMaxHeap(const MinMaxHeap<T> &other);

    ~MinMaxHeap();

    const MinMaxHeap<T> &operator=(const MinMaxHeap<T> &rhs);

    int size();

    void insert(const T &data);

    T deleteMin();

    T deleteMax();

    void dump();

    void locateMin(int pos, T &data, int &index);

    void locateMax(int pos, T &data, int &index);

private:
    Heap* minHeap, maxHeap;


};


#include "MinMaxHeap.cpp"

#endif //PROJ4_MINMAXHEAP_H
