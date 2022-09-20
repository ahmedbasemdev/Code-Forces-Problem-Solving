#include <iostream>

using namespace std;

string b;
int a ,counter;

int main(){

    cin>>a>>b;
    counter = 0;
    for (int i =0 ; i < a ; i++){
        if(b[i] == b[i+1]){
            counter ++;
        }
    }

    cout<<counter;
};
