#include "Student.h"

using namespace std;

namespace student{
    Student::Student(string first,string last,double grade){
        m_first=first;
        m_last=last;
        m_grade=grade;
    }
    string Student::fullname(){
        return m_first+" "+ m_last;
    }

    string Student::email(){
        return m_first+"."+ m_last+"@email.com";
    }
    double Student::curvegrade(){
        return m_grade+1.0;
    }
    string Student::getfirst(){
        return m_first;
    }
    string Student::getlast(){
        return m_last;
    }
    double Student::getgrade(){
        return m_grade;
    }
}