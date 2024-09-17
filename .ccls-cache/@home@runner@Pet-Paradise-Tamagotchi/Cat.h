#include "Pets.h"
#pragma once
using namespace std;
#include <iostream>

class Cat : public Pets{
public:
Cat(string n, string t){
  name = n;
  type = t;
  happiness = 60;
  sleep = 80;
  hunger = 40;
}
void setType(string t){
  type = t;
}
string getType(){
  return type;
}
void setName(string n){
  name = n;
}
string getName(){
  return name;
}
void setHunger(int h){
  hunger = h;
}
void setSleep(int s){
  sleep = s;
}
void setHappiness(int ha){
  happiness = ha;
}
int getSleep(){
  return sleep;
}
int getHappiness(){
  return happiness;
}
int getHunger(){
  return hunger;
}



 void napTime(){
  sleep = 0;
  happiness -= 10;
}
 void playTime(){
  happiness = 100;
  hunger += 10;
}
 void feedTime(){
   hunger = 0;
  sleep += 10;
}



};