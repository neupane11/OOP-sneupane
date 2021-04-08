#include <iostream>
#include <string>
#include <owner.h>

using namespace std;

/*class Position{
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
        virtual Position getPosition()=0;
        
};

class Triangle:public Movable{
 private: 
    int sideA;
    int sideB;
    int sideC;
 
    Position point;
  
 
 public:
    Triangle(int sideA,int sideB,int sideC,Position point){
  this->sideA = sideA;
  this->sideB = sideB;
  this->sideC = sideC;
  this->point= point;
 }
 
 
 public:void setPosition(Position p) override{
  this->point = p;
 }

 
 public:Position getPosition()override{
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
}; */  

        void MoveServent::moveTo(Movable &serviced,Position where){
        Position *previousPosition=serviced.getPosition();
        cout << "moving from "<<endl;
        cout<<where.xPosition,where.yPosition;
        serviced.setPosition(where);
        
    }
    
    
       /* void MoveServent::moveBy(Movable &serviced, int x, int y){
        Position *previousPosition = serviced.getPosition();
        cout<<"Moving smoothly from position x=%d,y=%d to position x=%d,y=%d"<<endl;
        cout<<previousPosition.xPosition,
        previousPosition.yPosition,
        (previousPosition.xPosition + x),
        (previousPosition.yPosition+ y);
        serviced.setPosition(Position(previousPosition.xPosition + x, previousPosition.yPosition + y));
    }*/
    
