//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
// #include <algorithm>


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr){
        
        for(int i=0;i<n;i+=2){
            
            if(i+1>=n)
                break;
            swap(arr[i],arr[i+1]);
            
        }
        
    }
};