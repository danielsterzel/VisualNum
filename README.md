# Matrix NumberVisualization
----------------

## About:
The project aims to provide a way to visualize any number in a matrix where each number is a pattern of `1`s and `0`s. Quite similar to pixel-art representation of digits, where for example, `5` will be rendered using `1`s to form a shape of a 5, and `0`s as empty space.  
My primary goal is to build a framework for generating and displaying these patterns, offering an intuitive visualization layer for numerical digits using matrices.
## Features
 - Custom `DynamicArray` implementation with:
  -  Overloaded `<<`, `+`, `[]` operators  
  -  Support for `std::initializer_list` for easy initialization: 
      ```cpp
      DynamicArray arrayNum = {1, 2, 3, 4};
      DynamicArray arrayString = {"Hello", "World", "!"};
      ```
  - Methods similar to standard dynamic containers:  
   - `pop`  
   - `push_back`  
   - `isEmpty`  
   - ... and more  

## Next Steps
- Implement the visualization module:  
- Convert numerical digits into matrix patterns  
- Print or render these matrix representations using 1s and 0s  
- Possibly support multi-digit strings and alignment  
