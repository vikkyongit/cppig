#include<stdio.h>
void add1(int *);
void add(int m);

int main()
{
    int num = 2;
   

   
    printf("\nthe value of num befor the colling function reff = %d", num);
    add1(&num);
    printf("\nthe value of the number after calling function reff = %d \n", num);
     printf("\n-------------------------------------------------\n");

      printf("\nthe value of num befor calling by function value = %d", num);
    add(num);
    printf("\nthe value of num after calling t he function value = %d \n", num);

    return 0;

}

void add1( int *n)
{
    *n=*n +10;
    printf("\nthe value of num in the calling function by reff = %d",*n);
}
void add(int m)
{
m=m+10;
printf("\nthe value of the number in calling function by value = %d",m);

}

//This function swaps the value of two variables
#include <stdio.h>
void swap_call_val(int, int);
void swap_call_ref(int *, int *);
int main()
{
int a=1, b=2, c=3, d=4;
printf("\n In main(), a = %d and b = %d", a, b);
swap_call_val(a, b);
printf("\n In main(), a = %d and b = %d", a, b);
printf("\n\n In main(), c = %d and d = %d", c, d);
swap_call_ref(&c, &d);
printf("\n In main(), c = %d and d = %d", c, d);
return 0;
}
void swap_call_val(int a, int b)
{
int temp;
temp = a;
a = b;
b = temp;
printf("\n In function (Call By Value Method) – a = %d and b = %d", a, b);
}
void swap_call_ref(int *c, int *d)
{
int temp;
temp = *c;
*c = *d;
*d = temp;
printf("\n In function (Call By Reference Method) – c = %d and d = %d", *c, *d);
}