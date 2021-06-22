#include <stdio.h>
#include <stdlib.h>

int main()
{
   while(1)
   {

       int n;
    float Old, New;
    float intrest;

    printf("enter the value of day \n");
    scanf("%d",&n);
      printf("enter the value of Old \n");
    scanf("%f",&Old);
      printf("enter the value of intrest \n");
    scanf("%f",&intrest);
    int i;

    for(i=1;i<=n;i++)
    {
     New = Old + ( Old*(intrest/1000));
     Old = New;

    }
    printf(" New is %f \n ", New);
   }


    return 0;
}
