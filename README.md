# Visual Num
----------------

## About:
 - A way to visualize numbers in double array's(matrixes).
 - Example: number '5' will create a '5' pattern using one's and zeroes. Sort of like a pixel representation of a number.

Currently the project has it's own DynamicArray implemented with overloaded `<<`, `+`, `[]` operators. The `DynamicArray` type also has a constructor that uses the 
`std::initializer_list` so we can have initialization like this:
```
int main(){

DynamicArray array = {1,2,3,4};
DynamicArray stringArray = {"Hello","World","!"};


return 0;
}
```

, along with other typical vector(or any dynamic array type)methods like: `pop`, `push_back`, `isEmpty` and etc.

The visualization part of the project is yet to be implemented
