#include<iostream>

using namespace std;

int nStages ;
int nPassanger = 0;
int minimun  ;
int exitPassanger , enterPassanger;
int main(int argc, char const *argv[])
{
    /* code */
    cin>>nStages;

    for(int i =0 ; i < nStages ; i++){
        cin>>exitPassanger>>enterPassanger;
        nPassanger += enterPassanger - exitPassanger;

        if(i==0) minimun = nPassanger;
        // cout<<"min is "<<minimun <<"n pass is "<<nPassanger<<endl;

        if(nPassanger > minimun) minimun = nPassanger;

        

    }

    cout<<minimun;



    return 0;
}
