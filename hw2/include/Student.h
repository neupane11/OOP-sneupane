#pragma once

#include <string>
using namespace std;

namespace student
{
    class Student
    {
        private:string m_first;
        private:string m_last;
        private:double m_grade;

        //constructor
        public:Student(string first,string last,double grade);

        string fullname();
        string email();
        double curvegrade();

        string getfirst();
        string getlast();
        double getgrade();

    };
} // namespace student