#include<iostream>
using namespace std;

int num_people ;

int main(int argc, char const *argv[])
{
    /* code */
    cin>>num_people;
    for (int i = 0 ; i< num_people ; i++){
        int answer ;
        cin>>answer;

        if (answer==1)
        {
            cout<<"HARD";
            return 0 ;
        }
        
    }

    cout<<"EASY";


    return 0;
}
