#include <iostream>

#include "funcs.h"

//This includes Task A, B, C, G

//Task A
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

//Task B
std::string checkerboard (int width, int height) {
  
  std::string result = "Checkerboard with a width of "+std::to_string(width)+" and a height of "+std::to_string(height)+":\n";
  
  bool star = true; //keep track when to space or *
  for (int i=0; i<height; i++){
    for (int j=0; j<width; j++) {
      if (star){
	result += "*";
	star = false; //star alternates every iternation
      }
      else {
	result += " ";
	star = true;
      }
    }
    if (width%2==0){
      if (star){
	star = false;
      }
      else {
	star = true;
      }
    }
    result += "\n";
  }
  return result; 
}

//Task C
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
    result += "\n"; //skip line
  }
  return result;
}

//Task G
std::string checker3x3 (int width, int height) {
  
  std::string result = "Checkerboard of 3x3 squares with a width of "+std::to_string(width)+" and a height of "+std::to_string(height)+":\n";

  bool star = true; //keep track when to space or *
  for (int i=0; i<height; i++){
    for (int j=0; j<width; j++){
      if (star) { //add the star if the boolean said so
	result += "*";
      }
      else {
	result += " ";
      }
      if(j%3==2){ //only change to false to add spaces after every three *
	if (star) {
	  star = false;
	}
	else {
	  star = true;
	}
      }
    }
    if (i%3!=2){  //revert the boolean back to create the same pattern for every three lines
      if (star) {
	star = false;
      }
      else {
	star = true;
      }
    }
    result += "\n";
  }
  return result; 
}
