// This is a program which implements Kadane's Algorithm
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// The following is the main method/ primary logic for the Kadane's Algorithm
int maxSubarraySum(vector<int> &arr){
    int res = arr[0];
    int maxEnding = arr[0];
    for(int i = 0; i < arr.size(); i++){
            maxEnding = max(maxEnding + arr[i], arr[i]);
            res = max(res, maxEnding);
    }
    return res;
}

int main(){
    vector<int> arr = {2, 5, 8, -3, 6, -9};
    cout << maxSubarraySum(arr);
    return 0;
}
