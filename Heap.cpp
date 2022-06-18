//
// Created by Safwan Ahmed on 2022-06-18.
//
#include "Heap.h"
template <typename T>
Heap<T>::Heap() {

}
template <typename T>
void Heap<T>::insert(T i) {
    array_.push_back(i);
    int size=array_.size()-1;
    upHeapify(size);
}
template <typename T>
T Heap<T>::deleteMax() {
    T max= array_.at(0);
    T &maxRef= array_.at(0);
    T last=array_.back();
    maxRef=last;
    array_.erase(array_.end()-1);
    downHeapify(0);
    return  max;
}
template <typename T>
int Heap<T>::parent(int i) {
    return (i-1)/2;
}
template <typename T>
int Heap<T>::leftChild(int i) {
    return (2*i)+1;
}
template <typename T>
int Heap<T>::rightChild(int i) {
    return (2*i)+2;
}
template <typename T>
void Heap<T>::upHeapify(int position) {
   if (position<=0){
       return;
   }
   int parentPos=parent(position);

   T &parent=array_.at(parentPos);
   T &current=array_.at(position);
   if (parent<current){
      T temp;
      temp=parent;
      parent=current;
      current=temp;
       upHeapify(parentPos);
   }else{
       return;
   }
}
template <typename T>
void Heap<T>::downHeapify(int position) {
    int leftPos= leftChild(position);
    int rightPos= rightChild(position);
    if (rightPos>=array_.size()&&leftPos>=array_.size()){
        return;
    }

    int max;
    if (leftPos>=array_.size()){
        max=rightPos;

    }else {
        if (rightPos >= array_.size()) {
            max = leftPos;
        } else{
            if (array_.at(rightPos)>array_.at(leftPos)){
                max=rightPos;
            }else{
                max=leftPos;
            }
        }

    }
    if(array_.at(position)>=array_.at(max)){
        return;
    }


    T &maxVal=array_.at(max);
    T &current=array_.at(position);

        T temp;
        temp=maxVal;
        T tempb=current;
        maxVal=tempb;
        current=temp;
        downHeapify(max);

}

template class Heap<int>;


