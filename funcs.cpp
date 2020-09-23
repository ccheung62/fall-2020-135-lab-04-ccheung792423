#include <iostream>

#include "funcs.h"

std::string box (int width, int height) {
  
  std::string result = "Box with a width of "+ std::to_string(width)+ " and a height of " + std::to_string(height) + ":\n";

  for (int i=0; i<height; i++){
    for (int j=0; j<width; j++){
    result+= "*";
    }
    result+="\n";
  }
  return result;
}

std::string checkerboard (int width, int height) {
  
  std::string result = "Checkerboard with a width of "+std::to_string(width)+" and a height of "+std::to_string(height)+":\n";
  
  bool star = true;
  for (int i=0; i<height; i++){
    for (int j=0; j<width; j++) {
      if (star){
	result += "*";
	star = false;
      }
      else {
	result += " ";
	star = true;
      }
    }
    result += "\n";
  }
  return result; 
}

std::string cross (int size) {
  
  std::string result = "Cross with a size of "+std::to_string(size)+ ":\n";
  for (int i=0; i<size; i++){ 
    if (i<(size/2)-1){  //first half of the cross
      for (int j=0; j<i; j++) { //stores the spaces according to i
	result += " ";
      }
      result += "*"; //left side *
      for (int j=0; j<size-((i+1)*2); j++) { //space in middle
	result += " ";
      }
      result += "*"; //right side *
    }
    else if (i==(size/2)-1){ //the middle part
      for (int j=0; j<i; j++){ //space in the beginning 
	result += " ";
      }
	result += "**\n"; 
	
      for (int j=0; j<i; j++){ //repeat twice to create **
	result += " ";                                //**
      }
	result += "**";
        i++;
    }
    else { //last half of the cross
      for (int j=0; j<size-(i+1); j++) { //beginning space
	result += " ";
      }
      result += "*";
      for (int j=0; j<(i+1)*2-size-2; j++) { //left side *
	result += " ";
      }
      result += "*"; //right side *
    }
    result += "\n\n"; //skips line
  }
  return result;
}
