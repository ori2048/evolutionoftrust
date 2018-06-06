#include "character.h"


character::character( int _coins)
{
    coins=_coins;
}

character::~character()
{

}


void character::set_coins(int _coins)
{
    coins=_coins;
}

int character::get_coins()
{
    return coins;
}
bool character::behavior()
{
    cout<<"aaaaaaaaaaa"<<endl;
    //comportamiento
}

