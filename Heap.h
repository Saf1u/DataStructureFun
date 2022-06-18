//
// Created by Safwan Ahmed on 2022-06-17.
//

#ifndef UNTITLED7_HEAP_H
#define UNTITLED7_HEAP_H
#include <vector>
using namespace std;
template <typename T>
class Heap{
public:
    Heap();
   void insert(T);
   T deleteMax();
private:
    vector<T> array_;
    void upHeapify(int);
    void downHeapify(int);
    int parent(int );
    int rightChild(int );
    int leftChild(int );
};

#endif //UNTITLED7_HEAP_H
