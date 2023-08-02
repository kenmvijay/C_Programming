#include <stdio.h>

int month;

int main()
{
   printf("Enter the month in digit\n Jan  -1\n Feb  -2\n March-3\n April-4\n May  -5\n June -6\n July -7\n Aug  -8\n Sept -9\n Oct  -10\n Nov  -11\n Dec  -12\n");
   scanf("%d",&month);

   switch(month)
   {
    case(1):printf("31 days");
            break;
    case(2):printf("28 or 29 days");
            break;
    case(3):printf("31 days");
            break;
    case(4):printf("30 days");
            break;
    case(5):printf("31 days");
            break;
    case(6):printf("30 days");
            break;
    case(7):printf("31 days");
            break;
    case(8):printf("31 days");
            break;
    case(9):printf("30 days");
            break;
    case(10):printf("31 days");
            break;
    case(11):printf("30 days");
            break;
    case(12):printf("31 days");
            break;
    default:printf("Invalid Entry");
   }
   
    return(0);

}