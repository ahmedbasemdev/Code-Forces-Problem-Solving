#include<iostream>

using namespace std;

int nFriend ,wallHeight ;
int width = 0 ;
int main(int argc, char const *argv[])
{
    /* code */
    cin >> nFriend >> wallHeight;
    int personHeight ;
    for (int i = 0 ; i < nFriend ; i++){
        cin>>personHeight;

        if (personHeight > wallHeight)
            width += 2;
        if(personHeight<=wallHeight)
            width +=1;
        
    }

    cout<<width;
    return 0;
}
