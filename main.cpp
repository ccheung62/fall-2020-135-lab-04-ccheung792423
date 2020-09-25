#include <iostream>

#include "funcs.h"
#include "shapes.h"

//funcs.cpp -> Task A, B, C, G
//shapes.cpp -> Task D, E, F

int main () {
  
  //Task A
  std::cout << box(-7,4);
  std::cout << "------------------\n";
  std::cout << box(10,10);
  std::cout << "------------------\n";
  std::cout << box(5,-7);
  std::cout << "------------------\n";
  std::cout << box(2,10);
  std::cout << "------------------\n";
  std::cout << box(10,1);
  std::cout << "------------------\n";
  //Task B
  std::cout << checkerboard(2,2);
  std::cout << "------------------\n";
  std::cout << checkerboard(12,12);
  std::cout << "------------------\n";
  std::cout << checkerboard(11,6);
  std::cout << "------------------\n";
  std::cout << checkerboard(-12,3);
  std::cout << "------------------\n";
  std::cout << checkerboard(2,13);
  std::cout << "------------------\n";
  //Task C
  std::cout << cross(8);
  std::cout << "------------------\n";
  std::cout << cross(5);
  std::cout << "------------------\n";
  std::cout << cross(-14);
  std::cout << "------------------\n";
  std::cout << cross(17);
  std::cout << "------------------\n";
  std::cout << cross(2);
  std::cout << "------------------\n";
  //Task D
  std::cout << lower(1);
  std::cout << "------------------\n";
  std::cout << lower(-3);
  std::cout << "------------------\n";
  std::cout << lower(10);
  std::cout << "------------------\n";
  std::cout << lower(-14);
  std::cout << "------------------\n";
  std::cout << lower(5);
  std::cout << "------------------\n";
  //Task E
  std::cout << upper(-1);
  std::cout << "------------------\n";
  std::cout << upper(3);
  std::cout << "------------------\n";
  std::cout << upper(10);
  std::cout << "------------------\n";
  std::cout << upper(0);
  std::cout << "------------------\n";
  std::cout << upper(4);
  std::cout << "------------------\n";
  //Task F
  std::cout << trapezoid(12,7);
  std::cout << "------------------\n";
  std::cout << trapezoid(15,7);
  std::cout << "------------------\n";
  std::cout << trapezoid(12,6);
  std::cout << "------------------\n";
  std::cout << trapezoid(1,6);
  std::cout << "------------------\n";
  std::cout << trapezoid(-5,6);
  std::cout << "------------------\n";
  //Task G
  std::cout << checker3x3(16,11);
  std::cout << "------------------\n";
  std::cout << checker3x3(2,2);
  std::cout << "------------------\n";
  std::cout << checker3x3(-2,11);
  std::cout << "------------------\n";
  std::cout << checker3x3(2,3);
  std::cout << "------------------\n";
  std::cout << checker3x3(4,9);
  std::cout << "------------------\n";
 
  return 0;
}
