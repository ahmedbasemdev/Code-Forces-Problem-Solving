#include<iostream>

using namespace std;

int n ;
int x,y,z;

int xSum , ySum , zSum;
int main(int argc, char const *argv[])
{

    cin>>n;

    for(int i =0 ; i<n ; i++){
        cin>> x >> y >> z;
        xSum += x;
        ySum += y;
        zSum += z;
    }

    if (xSum == 0 & ySum ==0 & zSum ==0)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
