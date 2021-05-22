#include <iostream>
using namespace std;

int main()
{
    /* write number between 100and 500 which are divisible by 3 and 5*/
    cout<<"enter the number \n";

    int x;
    int count=0;
    int r=0,y;
    cin >> x;
    if (x==0)
    {
        cout<< "you have enterd 0 plese enter non zreo\n";
        
    }
    else
    {
        if(x<0)
        {
            x=-1*x;
        }
        while(x>0)
        {
             y=x%10;
            x=x/10;
           
            r=(r*10) +y;
            count++;
            //cout<<x<<" count is = "<<count<<"\n";
        }
        cout<<"number of digits  is"<< count;
        cout<<"\nrevers digits is "<< r;

    }cout<<"\nend of programm\n";

   
}