#include <string>
#include <iostream>
//#include <Queen.h>
#include "../include/Boss1.h"

void Boss1::getFed(){
    
    isHungry=false;
}   
void Boss1::getDrink(){
    isDrunk=true;
}
void Boss1::receiveCompliments(){
    complimentReceived=true;
}
void Boss1::changeMood(){
    if(complimentReceived && isDrunk && !isHungry){
        isHappy=true;
        //cout<<"Boss1 is happy"<<endl;
    }
}
bool Boss1::getMood(){
    return isHappy;
}
