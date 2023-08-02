#include <stdio.h>
#include <conio.h>

 int n,m;
char a[100][100];
 int i,j,r,s;
int main()
{
   
printf("Enter no of rows\n");
scanf("%d",&n);

printf("Enter no of columns\n");
scanf("%d",&m);


  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
        printf("Enter [%d,%d]th element: ",i,j);

        scanf("%s",&a[i][j]);
    }
  }


   for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
        if(!((i%2!=0) || (j%2!=0)))
        {
            a[i][j]='*';
        }
        
        printf("%c\t",a[i][j]);
        if(j==m-1)
        {
            printf("\n");
        }
    }
  }

    return(0);
}