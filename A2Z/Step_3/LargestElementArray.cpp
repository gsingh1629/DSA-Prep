#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Linear Search
    int maxElemet=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxElemet){
            maxElemet=arr[i];
        }
    }
    return maxElemet;
    // Sorting 
    sort(arr.begin(),arr.end());
    return arr[n-1];
}
