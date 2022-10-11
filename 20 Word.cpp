#include<iostream>
#include<string>
using namespace std;

string text ;
int lowerCount = 0;
int upperCount = 0;
char ch;

int main(int argc, char const *argv[])
{
    cin>>text;

    for(int i =0 ; i < text.length() ; i++){
        if (isupper(text[i]))
        {
           upperCount ++;
        }
        if (islower(text[i]))
        {
           lowerCount ++;

        }

    }

    if (upperCount > lowerCount){
        for (int i = 0 ; i < text.length() ; i++){
            ch = toupper(text[i]);
            cout<<ch;
        }
    }
    if(lowerCount >= upperCount){
       for (int i = 0 ; i < text.length() ; i++){
            ch = tolower(text[i]);
            cout<<ch;
        }
    }





    return 0;
}
