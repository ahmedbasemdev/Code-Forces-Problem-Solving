#include<iostream>
#include<string>

using namespace std;


int number ;

int times ;
int main(int argc, char const *argv[])
{
	cin>>number>>times;

	for (int i =0 ; i < times ; i++){

		string numberString = to_string(number);
		// cout << "numer in String " << numberString<< endl;

		// get the last letter in string 
		char lastDigit =numberString.back();
		// get numerical value of char-int
		int lastNumber = lastDigit - '0';
		//cout<<"i is " << i << " , digit is " << lastNumber <<endl;

		 if(lastNumber == 0){
			number = number / 10;
		}

		if (lastNumber > 0){
			number = number - 1;
		}  




	}


	cout<<number;

	return 0;
}
