#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	vector <int> a = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
	int currsum =a[0];
	int maxsum=a[0];
	for(int i=0;i<a.size();i++){
		currsum = max(a[i] , currsum+a[i]);
		maxsum = max(currsum,maxsum);
	}
	
	/*for(int x : a){
		cout<< x <<" ";
	} */
	cout<< maxsum << endl;
}
