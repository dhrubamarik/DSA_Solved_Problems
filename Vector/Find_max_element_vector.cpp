#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a = {-7, -8, -9, -4, -2, -8};

    int max = a[0];
    int second_max = -1;
    int maxIndex = 0;
    int j = -1;

    for(int i = 1; i < a.size(); i++){
        if(a[i] > max){
            second_max = max;
            j = maxIndex;       // Store old maximum's index

            max = a[i];
            maxIndex = i;       // Store new maximum's index
        }
        else if(a[i] < max && ( a[i] > second_max)){
            second_max = a[i];
            j = i;
        }
    }
    cout << "Max: " << max << endl;
    cout << "Second Max: " << second_max << endl;
    cout << "Index: " << j;

    return 0;
}
