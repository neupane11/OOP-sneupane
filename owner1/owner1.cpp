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
};


//derived class
class Triangle:public Movable{
    private:
        Position p;
    public:
        void setPosition(Position p) {
		    this->p = p;
	}

	// Method, which returns position of geometric object
	    Position getPosition() {
		    return this->p;
	}
};

class Reactangle:public Movable{
    private:
        Position p;
    public:
        void setPosition(Position p) {
		    this->p = p;
	}

	// Method, which returns position of geometric object
	    Position getPosition() {
		    return this->p;
	}
};
class Eclipse:public Movable{
    private:
        Position p;
    public:
        void setPosition(Position p) {
		    this->p = p;
	}

	// Method, which returns position of geometric object
	    Position getPosition() {
		    return this->p;
	}
};
int main(){
    return 0;
}