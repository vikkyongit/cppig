#include<iostream>
using namespace std;

int main()
{
    int userpin=1214;
    int pin, atm=0;
    cout<<"enter the pin\n";
    cin >> pin;
    do{
      
        if(pin==userpin)
        {
            cout<< "pass\n";
            break;
        }
        else{
            cout<<"enter again";
        }
        

        atm++;
        cin >> pin;

    }
    while(atm<=1);
    if(atm==2)
    {
        cout<<"\n  blocked...\n ";
    }
    cout << "end of code";

}