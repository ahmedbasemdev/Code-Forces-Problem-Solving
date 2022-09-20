#include <iostream>

using namespace std;

int a , b ;

int numYears ;

int main(int argc, char const *argv[])
{


	cin>> a>>b;

	while (a <= b){
		a = a * 3;

		b = b *2;

		numYears ++;
	}

	cout<<numYears;

	return 0;
}
