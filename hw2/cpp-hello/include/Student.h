#pragma once

#include <string>
using namespace std;

namespace student
{
    class Student
    {
        private:string m_first;
        private:string m_last;
        private:float m_grade;

        //constructor
        public:Student(string first,string last,float grade);

        string fullname();
        string email();
        float curvegrade();

        string getfirst();
        string getlast();
        float getgrade();

    };
} // namespace student