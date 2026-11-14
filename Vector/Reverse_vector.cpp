#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> a= {7,2,9,4,2,8};
	int temp=a[a.size()-1];
	for(int i=a.size()-1;i>0;i--){
		a[i] = a[i-1];
	}
	a[0]=temp;
	for(int x : a){
		cout << x <<" ";
	}
	return 0;
}
