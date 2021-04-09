#pragma once
#include <string>
#include "../include/interfaceClass.h"
using namespace std;

class Servant{
    string m_name;
    public:Servant(string name);

    public:void feed(Interface &I);
    public:void giveWine(Interface &I);
    public:void giveCompliments(Interface &I);
    public:void whatisMood(Interface &I);

};