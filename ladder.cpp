//Ladder

#include <iostream>
#include <math.h>

using namespace std;
#define PI 3.14159265

int main(){
	int aX = 90;
	int aY = 0;
	int s1, s2 = 0;
	cin>>s1;
	cin>>aY;

	s2 = (s1*sin(aX*PI/180))/sin(aY*PI/180)+1;

	cout<<s2<<endl;
}