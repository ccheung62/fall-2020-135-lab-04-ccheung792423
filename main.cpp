#include <iostream>

#include "funcs.h"
#include "shapes.h"

int main () {
  //Task A
  std::cout << box(7,4);
  std::cout << "------------------\n";
  //Task B
  std::cout << checkerboard(11,6);
  std::cout << "------------------\n";
  //Task C
  std::cout << cross(8);
  std::cout << "------------------\n";
  
  return 0;
}
