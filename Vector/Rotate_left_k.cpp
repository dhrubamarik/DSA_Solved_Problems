#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
	vector<int> a = {7, 2, 9, 4, 2, 8};
	int n=a.size();
	if(a.size() == 0) cout<<"Array is empty"<<endl;
	else{
		int k;
		cout<< "Enter value of k:";
		cin>>k;
		k=k%n;
		reverse(a.begin(),a.begin()+k);
		reverse(a.begin()+k, a.end());
		reverse(a.begin(),a.end());
	}
	for(int x : a){
		cout << x <<" ";
	}
	return 0;
	
}
