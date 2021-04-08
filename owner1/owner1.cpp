#include <string>
using namespace std;

class Position{
    public:
        int xPosition;
        int yPosition;
    public:
        Position(int dx,int dy){
            xPosition=dx;
            yPosition=dy;
        }
};
//interface class
class Movable{
    public:
        virtual void setPosition(Position P)=0;
        virtual Position getPosition()=0;
        
}  ;

class  MoveServent{
    public:
        void moveTo(Movable &serviced,Position where){
        serviced.setPosition(where);
    }
    public:
        void moveBy(Movable &serviced,int dx,int dy){
        dx += serviced.getPosition().xPosition;
		dy += serviced.getPosition().yPosition;
		serviced.setPosition(Position(dx, dy));
    }
    public:
        void printName(Movable &serviced,string first,string last){
            
        }
};


//derived class, serviced class
class Triangle:public Movable{
 private: 
    int sideA;
    int sideB;
    int sideC;
 
    Position p;
  
 
 public:
    Triangle(int sideA,int sideB,int sideC,Position p){
  this->sideA = sideA;
  this->sideB = sideB;
  this->sideC = sideC;
  this->Position = p;
 }
 
 @Override
 public void setPosition(Point p) {
  this.position = p;
 }

 @Override
 public Point getPosition() {
  return this.position;
 }

 public int getSideA() {
  return sideA;
 }

 public void setSideA(int sideA) {
  this.sideA = sideA;
 }

 public int getSideB() {
  return sideB;
 }

 public void setSideB(int sideB) {
  this.sideB = sideB;
 }

 public int getSideC() {
  return sideC;
 }

 public void setSideC(int sideC) {
  this.sideC = sideC;
 }
};
//serviced class
class Reactangle:public Movable{
    private:
        Position m_p;
    public:
        void setPosition(Position p) {
		    m_p = p;
	}

	// Method, which returns position of geometric object
	    Position getPosition() {
		    return m_p;
	}
};
//serviced class
class Eclipse:public Movable{
    private:
        Position m_p;
    public:
        void setPosition(Position p) {
		    m_p = p;
	}

	// Method, which returns position of geometric object
	    Position getPosition() {
		    return m_p;
	}
};

int main(){
    return 0;
}