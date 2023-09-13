// to find no of bits in a decimal  no - log2(n)+1
// to find no of digits - log10(n)+1




// to find no of bits to change to convert a to b
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int a=10;
    int b=5;
    //to clear the ith bit
    //i=3
    int exor=a^b;
    int count=0;
    while(exor!=0)
    {
    exor=(exor&(exor-1));
    count++;
    }
    
    printf("%d",count);
    

}