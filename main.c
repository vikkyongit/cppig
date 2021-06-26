
#include<stdio.h>
int main()
{
    char c;
    printf("enter a alphabet \n\n");
    scanf("%c",&c);
    printf("ASCII value of char is %d \n and char of c is %c \n\n",c,c);
    if(c=='a' || c=='e' || c=='i'|| c=='o' || c=='u')
    {
        printf("%c is a vowel\n\n",c);
    }
    else
    {
        printf("%c is consnent\n\n",c);
    }
}



