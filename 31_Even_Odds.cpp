#include<iostream>

using namespace std;

int n , k ;
int main(int argc, char const *argv[])
{
    long long int a, b, c;
    cin >> a >> b;
    if(a%2 == 0)
    {
        c = a / 2;
    }
    else
    {
        c = (a + 1) / 2;
    }
    if(b <= c)
    {
        cout << (b * 2) - 1;
    }
    else
    {
        cout << (b - c) * 2;
    }

        

    
    return 0;
}
