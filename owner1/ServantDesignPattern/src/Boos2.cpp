#include <string>
#include <iostream>
//#include "../include/Boss2.h"
#include <Boos2.h>


void Boss2::getFed(){
    
    isHungry=true;
}   
void Boss2::getDrink(){
    isDrunk=false;
}
void Boss2::receiveCompliments(){
    complimentReceived=true;
}
void Boss2::changeMood(){
    if(isHungry && !isDrunk){
        isHappy=false;
        //cout<<"Boss2 is not happy"<<endl;
    }
}
bool Boss2::getMood(){
    return isHappy;
}
