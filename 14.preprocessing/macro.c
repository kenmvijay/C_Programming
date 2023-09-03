//Macro in c is defined by the #define directive. 
//Macro is a name given to a piece of code, so whenever the compiler encounters a macro in a program, it will replace it with the macro value
// we can use const keyword or #define to declare a constant

//predefined macros - __DATE__
//                    __time__
//                    __FILE__
//                    __LINE__
//                    __STDC__

/*
#ifdef
#ifndef
#if
#else
*/


#include<stdio.h>
#define a 1
#define str "Hello"

#define max(a,b) if(a>b) \
                 printf("%d is bigger",a); \
                 else \
                 printf("%d is bigger",b);

const int b=2;

int main()
{
    printf("%d",a+b);
    printf("\n%s\n",str);
    max(2,3)

    #ifdef max
    printf("max is defined");
    #endif

    #undef max                   // used to undefine the defined constants

    #ifndef max
    printf("maxis undefined");         
    #endif

    //max(3,4);

    printf("\ndate: %s",__DATE__);
    printf("\ntime: %s",__TIME__);
    printf("\nfile: %s",__FILE__);
    printf("\nline: %d",__LINE__);
    printf("\nansi: %d",__STDC__);        // whether is according to ansi standard or not. if yes  then returns 1
}