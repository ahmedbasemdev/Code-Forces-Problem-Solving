#include <iostream>

using namespace std;

string situation ;
char old;
int output = 0;
int main(int argc, char const *argv[])
{
    cin >> situation;

    old = situation[0];

    for(int i =1 ; i < situation.length() ;i++){

        if (output == 6)
            break;
        //cout<<old << situation[i]<<endl;
        if(old == situation[i]){
            output ++;

        }else
            output =0;
        old = situation[i];
    }

    if (output >= 6)
            cout<<"YES";
        else
            cout<<"NO";



    return 0;
}
