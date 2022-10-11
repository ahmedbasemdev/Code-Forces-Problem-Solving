#include<iostream>

using namespace std;

string inputWord,targetWord = "hello";
int j = 0 , trueLetters = 0 ;
int main(int argc, char const *argv[])
{
    /* code */
    cin>>inputWord;

    for (int i = 0 ; i < inputWord.size() ; i++){
        if(targetWord[j] == inputWord[i]){
            j++;
            trueLetters++;

            if (trueLetters == 5)
            {
                break;
            }
            
        }
    }

    if (trueLetters == 5)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
