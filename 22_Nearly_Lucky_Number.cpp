#include<iostream>
#include<string>
using namespace std;

// int 64 bit

int main(int argc, char const *argv[])
{
    long long number ;
    int countLucky = 0;
    cin>>number;

    while(number !=0){
        // cout<< "number is " << number << " digit is " << number %10 <<endl;
        if(number %10 == 4 || number %10 == 7 ){
            countLucky +=1;
        }
        number = number / 10;
    }

    if(countLucky == 7 || countLucky == 4)
        cout<<"YES";
    else
        cout<<"NO";
    
    
    return 0;
}
