#pragma once
#include <string>
#include "../include/interfaceClass.h"
using namespace std;

class Servant{
    private: string name;
    public:Servant(string name){
        this->name=name;
    }
    public:Servant();
    public:void feed(Interface *I);
    public:void giveWine(Interface *I);
    public:void giveCompliments(Interface *I);
    public:void moodechange(Interface *I);
    public:bool whatisMood(Interface *I);

};