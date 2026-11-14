#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> a={3,0,1};
	int n = a.size();
	long actual_sum = 0;
	long expected_sum = (long)(n * (n+1)) /2;
	for(int i=0;i<n;i++){
		actual_sum += a[i];
	}
	int missing;
	if(actual_sum != expected_sum){
		missing = expected_sum - actual_sum;
		cout<<"Missing Number is: "<< missing<< endl;
	}else{
		cout<< "No missisng Number ";
	}
	return 0;
}
