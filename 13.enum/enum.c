//Enumeration (or enum) is a user defined data type in C. 
//It is mainly used to assign names to integral constants, the names make a program easy to read and maintain.

//macros(#define) only have global scope. but enum can have global/local scope


#include<stdio.h>
#include<stdlib.h>

int main()
{
    enum days1
    {
        mon,
        tue,
        wed,
        thu,
        fri,
        sat,
        sun
    };
    printf("%d",mon);

    enum days2
    {
        mon2=5,
        tue2,
        wed2,
        thu2,
        fri2,
        sat2,
        sun2
    };
    printf("\n%d",tue2);

    enum days3
    {
        mon3=5,
        tue3,
        wed3=3,
        thu3,
        fri3,
        sat3,
        sun3
    };
    printf("\n%d",thu3);
}