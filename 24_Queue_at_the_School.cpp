#include <iostream>
#include<string>

using namespace std;

int nChildren;
int stepsTime;
string Childqueue;
int main(int argc, char const *argv[])
{

    cin>>nChildren >> stepsTime>> Childqueue;

    while (stepsTime--)
    {
        for(int i = 1; i <nChildren ; i++ ){
            if(Childqueue[i-1]=='B' & Childqueue[i]=='G'){
                Childqueue[i] = 'B';
                Childqueue[i-1] = 'G';
                i++;
            }
        }

    }

    cout<<Childqueue;
    



    
    return 0;
}
