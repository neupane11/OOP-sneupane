#pragma once


#include <string>
using namespace std;

class Position{
    public:
        int xPosition;
        int yPosition;
    public:
        Position();
        Position(int dx,int dy){
            xPosition=dx;
            yPosition=dy;
        }
};


class Movable{
    public:
        virtual void setPosition(Position P)=0;
        virtual Position *getPosition()=0;
        
};

class Triangle:public Movable{
 private: 
    int sideA;
    int sideB;
    int sideC;
    Position *point = NULL;
    
  
 
 public:
    Triangle(int sideA,int sideB,int sideC,Position point){
  this->sideA = sideA;
  this->sideB = sideB;
  this->sideC = sideC;
  this->point= new Position();
 }
 
 
 public:void setPosition(Position p)override {
  this->point =new Position;
 }

 
 public:Position *getPosition()override{
    return this->point;
 }

 public:int getSideA() {
  return sideA;
 }

 public:void setSideA(int sideA) {
  this->sideA = sideA;
 }

 public:int getSideB() {
  return sideB;
 }

 public:void setSideB(int sideB) {
  this->sideB = sideB;
 }

 public:int getSideC() {
  return sideC;
 }

 public:void setSideC(int sideC) {
  this->sideC = sideC;
 }
};
class MoveServent{
        public:MoveServent();
        
        public:void moveTo(Movable &serviced,Position where);
        public:void moveBy(Movable &serviced, int x, int y);
};