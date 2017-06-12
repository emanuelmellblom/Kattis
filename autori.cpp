//Autori

#include <iostream>

using namespace std;

int main(){
	string fullName;
	getline(cin, fullName);

	string output;

	for (int i = 0; i < fullName.length(); i++){
		if(isupper(fullName.at(i))>0){
			output += fullName.at(i);
		}
	}
	cout << output << endl;
}