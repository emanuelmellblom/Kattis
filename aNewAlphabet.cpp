// A new Aplhabet

#include <iostream>
#include <string>
#include <unordered_map>
 
using namespace std;

int main(){
	 unordered_map<string,string> alphabet = {
        {"a","@"},
        {"b","8"},
        {"c","("},
        {"d","|)"},
        {"e","3"},
        {"f","#"},
        {"g","6"},
        {"h","[-]"},
        {"i","|"},
        {"j","_|"},
        {"k","|<"},
        {"l","1"},
        {"m","[]\\/[]"},
        {"n","[]\\[]"},
        {"o","0"},
        {"p","|D"},
        {"q","(,)"},
        {"r","|Z"},
        {"s","$"},
        {"t","']['"},
        {"u","|_|"},
        {"v","\\/"},
        {"w","\\/\\/"},
        {"x","}{"},
        {"y","`/"},
        {"z","2"}
    };

	string inputString;
	string inputLower;
	getline(cin, inputString);
	
	for (int i = 0; i < inputString.length(); i++){
		inputLower += tolower(inputString.at(i));
	}

	string output;

	string temp;
	for (int i = 0; i < inputLower.length(); i++){
		temp = inputLower.at(i);
		unordered_map<std::string,string>::const_iterator it = alphabet.find(temp);
		if(it == alphabet.end()){
			output += temp;
		}else{
			output += it->second;
		}
	}
	cout << output << endl;
}

