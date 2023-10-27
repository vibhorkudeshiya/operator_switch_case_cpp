/*22070123132 Experiment 3(a)*/
#include<iostream>
using namespace std;
main()
{
    int mark;
    cout<<"Enter the marks obtained: ";
    cin>>mark;
    if(mark>90)
    {
        cout<<"Grade is O.";
    }
    else if(mark>=85)
    {
        cout<<"Grade is A+.";
    }
    else if(mark>=75)
    {
        cout<<"Grade is A.";
    }
    else if(mark>=65)
    {
        cout<<"Grade is B+.";
    }
    else if(mark>=50)
    {
        cout<<"Grade is B.";
    }
    else if(mark>=40)
    {
        cout<<"Grade is P.";
    }
    else
    {
        cout<<"Grade is F.";
    }
    return 0;
}
