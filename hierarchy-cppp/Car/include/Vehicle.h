#pragma once

#include <string>
namespace car{
class Vehicle{
    private:std::string m_typ;
    private:std::string m_usedfor;
    public:Vehicle(const std::string &typ, std::string usedfor);
    
    
    
    public:std::string typ();
    
    public:std::string usedfor();
       
};
}