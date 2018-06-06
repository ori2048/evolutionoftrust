#ifndef CHARACTER_H
#define CHARACTER_H

#include<iostream>
#include "stdlib.h"
using namespace std;

class character
{
    protected:
        int coins;

    public:
        character( int _coins);
        ~character();

        void set_coins(int coins);
        int get_coins();

        virtual bool behavior();




};
#endif
