#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

const int SIZE = 3;

int main(){
	int list[SIZE] = {0,0,0};
	int outList[SIZE] = {0,0,0};
	string order = "";

	for(int i = 0; i <SIZE; i++){
		cin >> list[i];
	}
	cin >> order;
	
	sort(list, list+SIZE);

	for(int i = 0; i < SIZE; i++){
		switch(order.at(i)){
			case 'A' : outList[i] = list[0];
				break;
			case 'B' : outList[i] = list[1];
				break;
			case 'C' : outList[i] = list[2];
				break;
		}
	}

	for (int i = 0; i < SIZE; i++){
		cout << outList[i] << " ";
	}
	cout<<endl;
}