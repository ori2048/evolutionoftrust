#ifndef COOPERATE_H
#define COOPERATE_H
#include "character.h"

class cooperate: public character
{
    public:
        cooperate(int _coins);
        ~cooperate();
        void behavior();

};



#endif // COOPERATE_H
