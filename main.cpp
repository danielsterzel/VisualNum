#include <iostream>
// #include "VisualNum.h"
#include "DynamicArray.cpp"
int main(){

    DynamicArray<int> array = DynamicArray<int>();
    array.push_back(6);
    array.push_back(12);
    array.push_back(15);
    array.push_back(20);
    array.push_back(50);
    array.push_back(100);
    array.push_back(700);
    array.Resize(10);
    std::cout << "Capacity: "<<array.Capacity() << std::endl;
    DynamicArray<std::string> Texts = DynamicArray<std::string>();
    std::cout << std::boolalpha<<Texts.isEmpty()<< std::endl;;
    array.pop();
    array.pop();
    array.pop();
    std::cout << std::boolalpha << array.isEmpty() << std::endl;

    int element = array.pop();
    // array.pop();
    std::cout << "Element popped: " << element << std::endl;
    std::cout << "Capacity: " << array.Capacity() << std::endl;
    std::cout << "Size: " << array.Size() <<std::endl;
    std::cout << "array displayed:" << std::endl;
    std::cout << array <<std::endl;

    DynamicArray<int> newArray = DynamicArray<int>();
    newArray.push_back(1);
    newArray.push_back(2);
    newArray.push_back(3);
    std::cout << "newArray displayed:" << std::endl;
    std::cout << newArray << std::endl;
    array +=  newArray;
    std::cout << "After addition:  " << std::endl;
    std::cout << array<<std::endl;

    array = newArray;
    std::cout << "Array after using the \"=\" operator" << std::endl;
    std::cout << array<< std::endl;
    std::cout << "Capacity after assignment: "<<array.Capacity() <<std::endl;


    DynamicArray<std::string> stringArray = {"Bro","do","you","even","code?"};
    stringArray.push_back("LA DI DA");
    std::cout << stringArray << std::endl;
    std::cout << stringArray[0]<<std::endl;
    std::string text = stringArray.get("Bro");
    std::cout << text << " - > This is the text obtained using the get method" <<std::endl;
    std::string notText = stringArray.get("Hello!");


    std::cout << stringArray<<std::endl;
    return 0;
}