//#include <servant.h>
#include "../include/servant.h"
#include <string>
using namespace std;

Servant::Servant(string name){
    m_name=name;
}
void Servant::feed(Interface &I){
    I.getFed();
}
void Servant::giveWine(Interface &I){
    I.getDrink();
}
void Servant::giveCompliments(Interface &I){
    I.receiveCompliments();
}
void Servant::whatisMood(Interface &I){
    I.changeMood();
}