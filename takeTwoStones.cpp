//Take Two Stones

#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;

	if(n%2==1){
		cout << "Alice" << endl;
	}else if(n%2==0){
		cout << "Bob" << endl;
	}
}