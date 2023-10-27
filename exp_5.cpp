#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    char cals;
    cout<<"Enter the operator: +"<<endl;
    cout<<"Enter the operator: -"<<endl;
    cout<<"Enter the operator: *"<<endl;
    cout<<"Enter the operator: /"<<endl;
    cin>>cals;
    if(a==0 || b==0)
    {
        cout<<"Operation cannot be done";
    }
    else
    {
        cout<<"Proceed"<<endl;
    }
    switch(cals)
    {
        case '+':
        cout<<a<<" + "<<b<<" = "<< a + b<<endl;
        break;

        case '-':
        cout<<a<<" - "<<b<<" = "<< a - b;
        break;

        case '*':
        cout<<a<<" * "<<b<<" = "<< a * b;
        break;

        case '/':
        if(a==0 || b==0)
    {
        cout<<"Operation cannot be done"<<endl;
    }
        else
    {
        cout<<"Proceed"<<endl;;
    }
        cout<<a<<" / "<<b<<" = "<< a / b;
        break;

        default:
        cout<<"Incorrect operator!";
        break;
    }
    return 0;
}
