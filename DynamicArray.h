//
// Created by Daniel Sterzel on 18/04/2025.
//

#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

#include <initializer_list>
#include <iostream>

template <typename Thing>
class DynamicArray;

template<typename Thing>
std::ostream& operator<<(std::ostream& out, const DynamicArray<Thing>& obj);

template <typename Thing> class DynamicArray {

    friend std::ostream& operator<< <>(std::ostream& out, const DynamicArray<Thing>& obj);
    private:
    // attributes:

    int capacity;
    int size;
    Thing* innerArray;

    // private methods:
    void Resize();
    Thing get(int index) const;


    public:
    // --------constructors --------------
    DynamicArray();
    explicit DynamicArray(int size_);
    DynamicArray(int capacity_,int size_);
    DynamicArray(std::initializer_list<Thing> list);

    // ------- methods -----------
    void removeElement(int index);
    Thing pop();
    void push_back(const Thing& element);
    void Resize( int capacity_);
    Thing get(Thing element);
    [[nodiscard]]bool isEmpty()const;
    [[nodiscard]]int Capacity() const;
    [[nodiscard]]int Size() const;


    //--------overloaded operators -----------
    DynamicArray& operator+=(const DynamicArray<Thing>& obj);
    DynamicArray& operator=(const DynamicArray<Thing>& obj);
    // DynamicArray& operator-(const DynamicArray<Thing>& obj);
    Thing operator[](int index);
    // ---------destructor----------
    ~DynamicArray();
};
template<typename Thing>
std::ostream& operator<<(std::ostream& out, const DynamicArray<Thing>& obj) {
    out <<  '[';
    for (int i = 0; i < obj.Size(); i++) {
        if (i + 1 != obj.Size()) {
            out  << obj.get(i) << ',';
        }else {
            out << obj.get(i) << ']';
        }
    }
    return out;
}

#endif //DYNAMICARRAY_H
