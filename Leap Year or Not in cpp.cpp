//leap year
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter Year:";
    cin>>year;
    if(year%4==0)
    {
        if(year%100==0){
            if(year%400==0){
                cout<<"Leap Year";
            }
            else
            {
                cout<<"Not Leap Year";
            }
         
        }
        else
            {
                cout<< "Leap Year";
            }
    }
    else
            {
                cout<< "Not Leap Year";
            }
            return 0;
}

