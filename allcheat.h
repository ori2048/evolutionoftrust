#ifndef ALLCHEAT_H
#define ALLCHEAT_H
#include "character.h"

class allcheat: public character
{
    public:
        allcheat(int _coins);
        ~allcheat();
        void behavior();

};


#endif // ALLCHEAT_H
