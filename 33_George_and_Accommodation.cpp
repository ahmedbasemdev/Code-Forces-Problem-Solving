#include<iostream>
using namespace std;


int number_rooms ;
int p , q;
int available_rooms= 0 ;
int main(int argc, char const *argv[])
{
    /* code */
    cin>>number_rooms;

    for (int i = 0; i < number_rooms; i++)
    {
        cin>>p>>q;
        if(p+2 <= q){
            available_rooms+=1;
        }
    }
    cout<<available_rooms;
    return 0;
}


