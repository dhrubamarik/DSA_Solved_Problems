#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	vector<int> a = {7, 0, 2, 0, 9, 4, 0, 2, 8}; 
	int count=0;
	for (int i=0;i<a.size();i++){
		if(a[i] != 0){
			a[count] = a[i];
			count++;
		}
	}
	while(count<a.size()){
		a[count]=0;
		count++;
	}
	for(int x : a){
		cout<< x <<" ";
	}
	
}
