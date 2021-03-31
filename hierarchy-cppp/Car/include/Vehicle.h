#pragma once

#include <string>
namespace car{
class Vehicle{
    private:const std::string m_typ;
    private:const  std::string m_usedfor;
    public:Vehicle(const std::string &typ, const std::string &usedfor);
    
    public:const std::string &typ() const; //decorate getter as const, you are not changing object
    public:const std::string &usedfor() const;
};
}