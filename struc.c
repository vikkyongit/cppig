#include <stdio.h>
int main()
{
int ap, num, *pnum;
pnum = &num;
ap = &pnum;

printf("\n Enter the number : ");
scanf("%d", &num);
printf("\n The number that was entered is : %d\n", *pnum);
printf("the value of *p= %d",num);
printf("adress of the &num %d", &num);
return 0;
}