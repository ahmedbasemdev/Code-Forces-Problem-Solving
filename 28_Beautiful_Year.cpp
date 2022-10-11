#include<iostream>

using namespace std;

int currentYear ;
int main(int argc, char const *argv[])
{
    /* code */
    cin>>currentYear;

    while (true)
    {
        currentYear++;

        int a = currentYear / 1000;
        int b = currentYear / 100 %10;
        int c = currentYear / 10 %10;
        int d = currentYear%10;


        if (a != b & a !=c & a!=d & b !=c & b != d & c!=d)
        {
            cout<<currentYear;
            break;
        }
        
    }

    
    
    
    return 0;
}
