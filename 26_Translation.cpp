#include<iostream>

using namespace std;

string inputWord;
string targetWord;

int main(int argc, char const *argv[])
{
    cin>>inputWord>>targetWord;
    int n = inputWord.length();

    for (int i = 0 ; i < n /2 ; i++){
        swap(inputWord[i],inputWord[n-i-1]);
    }

    if(inputWord==targetWord)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
