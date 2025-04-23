//
// Created by Daniel Sterzel on 18/04/2025.
//

#include "DynamicArray.h"

// --------- constructors ----------------
template<typename Thing>
DynamicArray<Thing>::DynamicArray():capacity(5),size(0),innerArray(new Thing[capacity]) {}
template<typename Thing>
DynamicArray<Thing>::DynamicArray(const int capacity_,const int size_):capacity(capacity_),size(size_),innerArray(new Thing[capacity]) {}
template<typename Thing>
DynamicArray<Thing>::DynamicArray(const int size_):capacity(size_*2),size(size_),innerArray(new Thing[capacity]) {}
template<typename Thing>
DynamicArray<Thing>::DynamicArray(std::initializer_list<Thing> list):capacity(list.size()*2),size(list.size()),innerArray(new Thing[capacity]) {

    int i = 0;
    for (const auto& element : list) {
        innerArray[i++] = element;
    }
}


// ----------------- methods ---------------

template<typename Thing>
void DynamicArray<Thing>::removeElement(const int index) {
    if (index > size) {
        std::cerr << "Index is greater than DynamicArray size \n";
    }
    if (size == 0) {
        std::cerr << "Cannot remove element from an empty DynamicArray \n";
    }
    for (int i = index; i <= size - 1;i++) {
        innerArray[i] = innerArray[i+1];
    }
    size --;

}


template<typename Thing>
Thing DynamicArray<Thing>::pop() {
    if (size == 0) {
        std::cerr << "You cannot pop an element from an empty DynamicArray \n";
    }
    size --;
    return innerArray[size];
}

template<typename Thing>
void DynamicArray<Thing>::Resize(const int capacity_) {

    auto tmp = new Thing[capacity_];
    for (int i = 0; i < size; i++) {
        tmp[i] = innerArray[i];
    }
    delete[] innerArray;
    // size = size_;
    capacity = capacity_;
    innerArray = tmp;
}
template<typename Thing>
void DynamicArray<Thing>::Resize() {
    auto tmp = new Thing[capacity*2];
    for (int i = 0; i < size; i++) {
        tmp[i] = innerArray[i];
    }
    delete[] innerArray;
    capacity = capacity*2;
    innerArray = tmp;
}

template<typename Thing>
void DynamicArray<Thing>::push_back(const Thing& element) {
    if (size + 1 >= capacity) {
        Resize(capacity*2);
    }
    innerArray[size] = element;
    size ++;
}

template<typename Thing>
Thing DynamicArray<Thing>::get(int index) const {
   return innerArray[index];
}

template<typename Thing>
Thing DynamicArray<Thing>::get(const Thing element) {
    for (int i = 0; i < size;i++) {
        if (element == innerArray[i]) {
            return innerArray[i];
        }
    }
    std::cerr << "Element not in list" << std::endl;
    return Thing();
}

// template<typename Thing>
// void DynamicArray<Thing>::display() {
//
// }

template<typename Thing>
bool DynamicArray<Thing>::isEmpty() const{
   return size == 0;
}

template<typename Thing>
int DynamicArray<Thing>::Capacity() const{
    return capacity;
}
template<typename Thing>
int DynamicArray<Thing>::Size() const {
    return size;
}
template<typename Thing>
DynamicArray<Thing>::~DynamicArray() {
    delete[] innerArray;
}

//------------- overloaded operators -------------------

template<typename Thing>
DynamicArray<Thing>& DynamicArray<Thing>::operator+=(const DynamicArray<Thing>& obj) {
    const int length = this->size + obj.size;
    this->Resize(length*2);
    for (int i = 0;i < obj.Size();++i) {
        this->innerArray[this->size -1 + i] = obj.innerArray[i];
    }

    this->size = length -1;
    return *this;
}
template<typename Thing>
DynamicArray<Thing>& DynamicArray<Thing>::operator=(const DynamicArray<Thing> &obj) {
    if (this == &obj) {
        return *this;
    }
    this->Resize(obj.size*2);
    for (int i = 0; i < obj.size;i++) {
        this->innerArray[i] = obj.innerArray[i];
    }
    this->size = obj.size;
    return *this;
}

// [1,2,2,3,4,5] - [1,2,2,5] == [3,4]

// template<typename Thing>
// DynamicArray<Thing> &DynamicArray<Thing>::operator-(const DynamicArray<Thing> &obj) {
//
// }

template<typename Thing>
Thing& DynamicArray<Thing>::operator[](const int index) {
    return innerArray[index];
}






