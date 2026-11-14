#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {
    // Write C++ code here
    vector <int>nums = {2, 7, 11, 15};
    int target =9;
    unordered_map<int,int> mp;
    for(int i=0;i<nums.size();i++){
        int b = target - nums[i];
        if(mp.find(b) !=mp.end()){
            cout <<"["<<i<<","<<mp[b]<<"]"<<endl;
            break;
        }
        mp[nums[i]] = i;
    }
    
    return 0;
}
