#include <iostream>

using namespace std;

int main(){

	int numInputs;
	int numBelow = 0;
	cin >> numInputs;

	int measurements[numInputs];

	for (int i = 0; i < numInputs; i++){
		cin >> measurements[i];
	}

	for (int i = 0; i < numInputs; ++i){
		if(measurements[i]<0){
			numBelow++;
		}
	}

	cout << numBelow << endl;

}