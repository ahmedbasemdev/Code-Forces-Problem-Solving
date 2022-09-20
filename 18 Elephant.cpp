#include<iostream>

using namespace std;

int number ;

int steps;

int main(int argc, char const *argv[])
{
    cin>>number;

    if (number % 5 ==0)
        steps = int(number / 5 );
    else
        steps = int(number / 5) + 1;

    
    cout<<steps;
    
    
    return 0;
}
