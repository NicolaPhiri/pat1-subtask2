#include <iostream>
using namespace std;
int main()
{
    /* Declare variables*/
    int intTemp1, intTemp2;
    /*Capture Values*/
    cout<< "Enter first tempreture";
    cin>> intTemp1;
    cout<< "Enter second Temprture";
    cin>> intTemp2;
    cout<< "Please enter the third tempreture"<< " ";
    cin>> intTemp3;
if ( intTemp1>intTemp2)
{
    cout<<"First tempreture is greater";
}
else
    {
        cout<< "Second tempreture is greater";
    }
return 0; 
}