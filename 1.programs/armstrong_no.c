#include <stdio.h>
#include <math.h>


int arm(int m);
int main()
{
    int n,out;
    printf("Enter the number: ");
    scanf("%d",&n);
    out=arm(n);
    if(n==out)
    printf("\nIt is a Armstrong number");
    else
    printf("\nIt is not a Armstrong number");
}

int arm(int m)
{
    int rem;
    int n1;
    int sum=0;
    n1=m;
    int c;

    do
    {
        n1=n1/10;
        c++;
    } while (n1>0);
    
    while(m>0)
    {
        rem=m%10;
        sum=sum+pow(rem,c);
        m=m/10;
    }
    return(sum);
}