#include <iostream>

#include "funcs.h"
#include "shapes.h"

//funcs.cpp -> Task A, B, C, G
//shapes.cpp -> Task D, E, F

int main () {
  
  //Task A
  std::cout << "Box with a width of 1 and a height of 1:\n";
  std::cout << box(1,1);
  std::cout << "------------------\n";
  std::cout << "Box with a width of 10 and a height of 10:\n";
  std::cout << box(10,10);
  std::cout << "------------------\n";
  std::cout << "Box with a width of 5 and a height of 0:\n";
  std::cout << box(5,0);
  std::cout << "------------------\n";
  std::cout << "Box with a width of 2 and a height of 10:\n";
  std::cout << box(2,10);
  std::cout << "------------------\n";
  std::cout << "Box with a width of 10 and a height of 1:\n";
  std::cout << box(10,1);
  std::cout << "------------------\n";
  
  //Task B
  std::cout << "Checkerboard with a width of 2 and a height of 2:\n";
  std::cout << checkerboard(2,2);
  std::cout << "------------------\n";
  std::cout << "Checkerboard with a width of 12 and a height of 12:\n";
  std::cout << checkerboard(12,12);
  std::cout << "------------------\n";
  std::cout << "Checkerboard with a width of 11 and a height of 6:\n";
  std::cout << checkerboard(11,6);
  std::cout << "------------------\n";
  std::cout << "Checkerboard with a width of 12 and a height of 0:\n";
  std::cout << checkerboard(12,0);
  std::cout << "------------------\n";
  std::cout << "Checkerboard with a width of 2 and a height of 13:\n";
  std::cout << checkerboard(2,13);
  std::cout << "------------------\n";
  
  //Task C
  std::cout << "Cross with a size of 8:\n";
  std::cout << cross(8);
  std::cout << "------------------\n";
  std::cout << "Cross with a size of 0:\n";
  std::cout << cross(0);
  std::cout << "------------------\n";
  std::cout << "Cross with a size of 14:\n";
  std::cout << cross(14);
  std::cout << "------------------\n";
  std::cout << "Cross with a size of 17:\n";
  std::cout << cross(17);
  std::cout << "------------------\n";
  std::cout << "Cross with a size of 2:\n";
  std::cout << cross(2);
  std::cout << "------------------\n";
  
  //Task D
  std::cout << "Bottom-left half of a square of length 0:\n";
  std::cout << lower(0);
  std::cout << "------------------\n";
  std::cout << "Bottom-left half of a square of length 1:\n";
  std::cout << lower(1);
  std::cout << "------------------\n";
  std::cout << "Bottom-left half of a square of length 10:\n";
  std::cout << lower(10);
  std::cout << "------------------\n";
  std::cout << "Bottom-left half of a square of length 14:\n";
  std::cout << lower(14);
  std::cout << "------------------\n";
  std::cout << "Bottom-left half of a square of length 5:\n";
  std::cout << lower(5);
  std::cout << "------------------\n";
  
  //Task E
  std::cout << "Top-right half of a square of length 1:\n";
  std::cout << upper(1);
  std::cout << "------------------\n";
  std::cout << "Top-right half of a square of length 3:\n";
  std::cout << upper(3);
  std::cout << "------------------\n";
  std::cout << "Top-right half of a square of length 10:\n";
  std::cout << upper(10);
  std::cout << "------------------\n";
  std::cout << "Top-right half of a square of length 0:\n";
  std::cout << upper(0);
  std::cout << "------------------\n";
  std::cout << "Top-right half of a square of length 4:\n";
  std::cout << upper(4);
  std::cout << "------------------\n";
  
  //Task F
  std::cout << "Trapezoid with a width of 2 and a height of 1:\n";
  std::cout << trapezoid(2,1);
  std::cout << "------------------\n";
  std::cout << "Trapezoid with a width of 15 and a height of 7:\n";
  std::cout << trapezoid(15,7);
  std::cout << "------------------\n";
  std::cout << "Trapezoid with a width of 12 and a height of 6:\n";
  std::cout << trapezoid(12,6);
  std::cout << "------------------\n";
  std::cout << "Trapezoid with a width of 1 and a height of 6:\n";
  std::cout << trapezoid(1,6);
  std::cout << "------------------\n";
  std::cout << "Trapezoid with a width of 0 and a height of 6:\n";
  std::cout << trapezoid(0,6);
  std::cout << "------------------\n";
  
  //Task G
  std::cout << "Checkerboard of 3x3 squares with a width of 16 and a height of 11:\n";
  std::cout << checker3x3(16,11);
  std::cout << "------------------\n";
  std::cout << "Checkerboard of 3x3 squares with a width of 2 and a height of 2:\n";
  std::cout << checker3x3(2,2);
  std::cout << "------------------\n";
  std::cout << "Checkerboard of 3x3 squares with a width of 0 and a height of 11:\n";
  std::cout << checker3x3(0,11);
  std::cout << "------------------\n";
  std::cout << "Checkerboard of 3x3 squares with a width of 2 and a height of 3:\n";
  std::cout << checker3x3(2,3);
  std::cout << "------------------\n";
  std::cout << "Checkerboard of 3x3 squares with a width of 4 and a height of 10:\n";
  std::cout << checker3x3(4,10);
  std::cout << "------------------\n";
 
  return 0;
}
