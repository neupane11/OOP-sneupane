#include <string>
#include <iostream>
//#include <Queen.h>
#include "../include/Queen.h"

void Queen::getFed(){
    
    isHungry=false;
}   
void Queen::getDrink(){
    isDrunk=true;
}
void Queen::receiveCompliments(){
    complimentReceived=true;
}
void Queen::changeMood(){
    if(complimentReceived && isDrunk && !isHungry){
        isHappy=true;
        cout<<"queen is happy"<<endl;
    }
}
bool Queen::getMood(){
    return isHungry;
}
