#include <string>
#include <iostream>
#include "../include/servant.h"
#include "../include/interfaceClass.h"
#include "../include/Queen.h"

int main(){
    Servant ram("Ram");
    Queen q;
    
    //feed
    ram.feed(q);
    ram.giveWine(q);
    ram.giveCompliments(q);
    ram.whatisMood(q);
    
    return 0;
}