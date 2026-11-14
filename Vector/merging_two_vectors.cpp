#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> a = {1, 3, 5, 7};
	vector<int> b = {2, 4, 6, 8};
	vector<int> c={};
	int i=0,j=0;
	while(i<a.size() && j<b.size()){
		if(a[i] < b[j]){
			c.push_back(a[i]);
			i++;
		}
		else{
			c.push_back(b[j]);
			j++;
		}
	}
	while(i<a.size()){
		c.push_back(a[i]);
		i++;
	}
	while(j<a.size()){
		c.push_back(b[j]);
		j++;
	}
	for(int x : c){
		cout<< x <<" ";
	}
	return 0;
}

