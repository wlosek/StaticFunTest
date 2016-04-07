#ifndef FIRST_H
#define FIRST_H

#include <iostream>

using namespace std;

static void StatFun()
{
    cout << "Funkcja statyczna" << endl;
}

class First
{
public:
    First();

    void RunStaticFun()
    {
        StatFun();
    }
};

#endif // FIRST_H
