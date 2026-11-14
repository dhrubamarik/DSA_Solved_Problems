#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> a = {1, 1, 2, 2, 3, 3};
	int i=1,j=0;
	int result =1;
	while(i<a.size()){
		if(a[i]!=a[i-1]){
			result++;
			j++;
			a[j] = a[i];
		}
		i++;
	}
	for(int x : a){
		cout<< x <<" ";
	}
	cout<< endl << "No of distinct elements"<< result;
	
}
