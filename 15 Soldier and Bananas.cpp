#include<iostream>

using namespace std;

int bananaPrice , ourMoney , nBananas;

int cost = 0 ;

int main(){

    cin >> bananaPrice >> ourMoney >> nBananas;

    for(int i =1 ; i < (nBananas + 1) ; i++){
        cost += bananaPrice * i;
    }

    if (cost > ourMoney )
        cout<< cost-ourMoney;
    else
        cout<<0;


    return 0 ;
}
