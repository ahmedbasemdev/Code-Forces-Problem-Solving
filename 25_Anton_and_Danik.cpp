#include<iostream>

using namespace std;

int nGames;
string playedGames ;
int AntonCounter;
int DanikCounter;

int main(int argc, char const *argv[])
{
    /* code */
    cin>>nGames >>playedGames;

    for(int i =0 ; i<nGames ; i++){
        if(playedGames[i] == 'A'){
            AntonCounter++;
        }
        if(playedGames[i] == 'D'){
            DanikCounter++;
        }
    }

    if (AntonCounter > DanikCounter)
            cout<<"Anton";
    if (DanikCounter > AntonCounter)
            cout<<"Danik";
    if(DanikCounter == AntonCounter)
            cout<<"Friendship";
    
    
    return 0;
}
