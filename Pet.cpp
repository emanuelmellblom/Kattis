#include <iostream>
using namespace std;

int main(){
	int rows[5] = {0,0,0,0,0};
	int input[20];
	int lineNumber = 0;

	for (int i = 0; i < 20; i++){
		cin >> input[i];
	}
	for (int i = 0; i < 20; i++){
		if(i<=3){
			rows[0] += input[i];
		}else if(i>3 && i<=7){
			rows[1] += input[i];
		}else if(i>7 && i<= 11){
			rows[2] += input[i];
		}else if(i>11&& i<= 15){
			rows[3] += input[i];
		}else if(i>15 && i<= 20){
			rows[4] += input[i];
		}
	}
	int tmp = 0;
	for (int i = 0; i < 5; ++i){
		if(rows[i]>tmp){
			tmp = rows[i];
			lineNumber = i+1;
		}
	}
	cout << lineNumber << " " << tmp << endl;
}