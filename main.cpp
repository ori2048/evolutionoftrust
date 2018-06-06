#include <QCoreApplication>
#include "cooperate.h"
#include "allcheat.h"

int main()
{
    /*cooperate uno(5);
    cout<<uno;*/

    character *vector[3];
        vector[0] = new cooperate(0);
        vector[1] = new cooperate(0);
        vector[2] = new allcheat(0);
        vector[0]->behavior();
        vector[1]->behavior();
        vector[2]->behavior();


    return 0;
}
