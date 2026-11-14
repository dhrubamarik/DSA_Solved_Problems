#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	vector<int> a = {7, 2, 9, 4, 2, 8};
	
	for(int i=0;i<a.size();i++){
		for(int j=i+1;j<a.size();){
			if(a[i] == a[j]){
				a.erase(a.begin()+j);
			}else{
				j++;
			} 
		}
	}
	
	for(int x : a){
		cout<< x <<" ";
	}
}
