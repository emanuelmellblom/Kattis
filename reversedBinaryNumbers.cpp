//Reversed Binary Numbers

#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main(){
	long input;
	cin >> input;

 	std::bitset<32> x(input);
    string str = x.to_string();

    size_t removeZeros = str.find_first_not_of("0");
    str = str.substr(removeZeros);

    string output = "";
    for (int i = str.length()-1; i >=0; i--){
    	output += str.at(i); 
    }
    
    bitset<32> o(output);
    int out = o.to_ulong();

    cout << out << endl;
}