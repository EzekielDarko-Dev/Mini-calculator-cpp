#include <iostream>
using namespace std;

float add(float a, float b)
{
    return a+b;
}

float subtract(float a, float b)
{
    return a-b;
}

float multiply(float a, float b)
{
    return a*b;
}

float divide(float a, float b)
{
    if(b==0)
    {
        cout<<"Division by zero not allowed\n";
        return 0;
    }
    return a/b;
}

int main()
{
    float a,b;
    char op;
    char choice;

    do
    {
        cout<<"\nEnter first number: ";
        cin>>a;

        cout<<"Enter second number: ";
        cin>>b;

        cout<<"Choose operator (+,-,*,/): ";
        cin>>op;

        if(op=='+')
            cout<<"Answer = "<<add(a,b);

        else if(op=='-')
            cout<<"Answer = "<<subtract(a,b);

        else if(op=='*')
            cout<<"Answer = "<<multiply(a,b);

        else if(op=='/')
            cout<<"Answer = "<<divide(a,b);

        else
            cout<<"Invalid operator";

        cout<<"\nDo you want to continue? (y/n): ";
        cin>>choice;

    }while(choice=='y');

    return 0;
}