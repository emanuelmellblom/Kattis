//aaah

#include <iostream>

using namespace std;

int main(){
	string inputL1;
	string inputL2;

	cin >> inputL1;
	cin >> inputL2;

	if(inputL1.length() >= inputL2.length()){
		cout << "go" << endl;
	}else if(inputL1.length() < inputL2.length()){
		cout << "no" << endl;
	}
}