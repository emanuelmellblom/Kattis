//Pot

#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int numInputs;
	long output = 0;
	cin >> numInputs;

	while(numInputs--){
		int num; 
		cin >> num;
		output += pow(num/10, num%10);
	}
		cout << output << endl;
}
