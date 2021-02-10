#pragma once

#include <string>
using namespace std;
namespace moon
{
    class Moon
    {
        private:int m_size;//m for member
        private:string m_color;
        private:int m_phase;
        //constructor
        public:Moon(int size,string color, int phase=0);

        bool isNewMoon();
        void cycle();
        int phase();
        //getter for color
        string color();
        //setter for color
        void color(string value);
        int size();
        
    };
} // namespace moon