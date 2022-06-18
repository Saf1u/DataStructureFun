#include <iostream>
#include "Heap.h"

int main() {
    Heap<int> heap;
    heap.insert(5);
   heap.insert(11);
    heap.insert(1);
    heap.insert(8);
    heap.insert(0);
    heap.insert(22);
    heap.insert(-1);
    heap.insert(12);
    heap.insert(-5);
    heap.insert(10);
    heap.insert(9);

    using namespace std;
    cout<<heap.deleteMax()<<endl;
    cout<<heap.deleteMax()<<endl;
    cout<<heap.deleteMax()<<endl;
    cout<<heap.deleteMax()<<endl;
    cout<<heap.deleteMax()<<endl;
    cout<<heap.deleteMax()<<endl;
    cout<<heap.deleteMax()<<endl;
    cout<<heap.deleteMax()<<endl;
    cout<<heap.deleteMax()<<endl;
    cout<<heap.deleteMax()<<endl;
    cout<<heap.deleteMax()<<endl;

}
