#include <iostream>

#include "shapes.h"

//This contain task D, E, F

//Task D
std::string lower (int length) {
  
  //std::string result = "Bottom-left half of a square of length "+ std::to_string(length) + ":\n";
  std::string result;

  for (int i=1; i<=length; i++) {
    for (int j=0; j<i; j++){ //increase * as height increase
      result += "*";
    }
    result += "\n";
  }
  return result;
}

//Task E
std::string upper (int length) {
  
  //std::string result = "Top-right half of a square of length "+ std::to_string(length) + ":\n";
  std::string result;

  for (int i=length; i>=1; i--) {
    for (int j=0; j<i; j++){  //decrease * as height decrease 
      result += "*";
    }
    result += "\n";
  }
  return result;
}

//Task F
std::string trapezoid (int width, int height) {
  std::string result;
  //result = "Trapezoid with a width of "+std::to_string(width)+ " and a height of "+ std::to_string(height)+":\n";

  if (height > (width/2)){  //check if it could be a trapezoid 
    return result += "Impossible shape! (height is too high)\n";
  }

  int star = width; //keep track of how many * for each line
  int space = 0; //keep track of how many space for each line
  for(int i=0; i<height; i++){
    for (int j=0; j<space; j++){  //beginning spaces
      result += " ";
    }
    for (int j=0; j<star; j++){  //stars
      result += "*";
    }
    star-=2; //decrease to match the shape
    space+=1;
    result += "\n";
  }
  return result;
}

