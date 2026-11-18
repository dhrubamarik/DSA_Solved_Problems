#include<iostream>
#include<string>
using namespace std;

int main(){
	string s = "Hello";
	int i=0,j=s.length()-1;
	while(i<j){
		char temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;j--;
	}
	cout<< s << endl;
}

