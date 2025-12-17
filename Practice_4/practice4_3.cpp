#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    //y = sin(i / 4.5) - функция синуса в коде (см.частота волны)
    int O_x = 100; 
    int O_y = 21;

    vector<string> sinus(O_y, string(O_x, ' '));
    sinus[O_y / 2] = string(O_x, '-'); 

    for (int i = 0; i < O_x; i++) // i координата на О_х
    {
        sinus[(round(10 * sin(i / 4.5) + 10))][i] = '*'; // на 10 смещаем по вертикали 
    }

    for (auto s : sinus) 
    { 
        cout << s << '\n';
    }
}