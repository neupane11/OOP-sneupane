//#include <servant.h>
#include "../include/servant.h"
#include <string>
using namespace std;


void Servant::feed(Interface *I){
    I->getFed();
}
void Servant::giveWine(Interface *I){
   I->getDrink();
}
void Servant::giveCompliments(Interface *I){
    I->receiveCompliments();
}
void Servant::moodechange(Interface *I){
    I->changeMood();
}
bool Servant::whatisMood(Interface *I){
   return I->getMood();
}