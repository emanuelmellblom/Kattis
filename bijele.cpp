//Bijele

#include <iostream>

using namespace std;

int main(){
	int pices[] = {0,0,0,0,0,0};
	int original[] = {1,1,2,2,2,8};
	int output[] = {0,0,0,0,0,0};

	for(int i = 0; i < 6; i++){
		cin >> pices[i];
		//cout << pices[i] << endl;
	}
	
	for (int i = 0; i < 6; ++i){
		if(pices[i] > original[i]){
			int diff = pices[i] - original[i];
			output[i] = diff*-1;
		}else if(pices[i] < original[i]){
			int posDiff = original[i] - pices[i];
			output[i] = posDiff;
		}else{
			output[i] = 0;
		}
	}
	for(int i = 0; i<6; i++){
		cout << output[i] << " ";
	}
	cout << endl;	
}

//pices[i] > original ? 



//output[i] = (pices[i]-original[i]);
		// if(pices[i] > original[i]){
		// 	int diff = original[i] - pices[i];
		// 	output[i] += pices[i]-diff;
		// 	cout << i << endl;
		// }else if(pices[i] == original[i]){
		// 	output[i] = original[i]- pices[i];
		// }
		// cout << output[i] << endl;