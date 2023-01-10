//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K) 
    { 
    
       int start=0,end=N-1,mid=end+(start-end)/2;
       
       while(start<end){
           
           if(arr[mid]==K)
                return 1;
           else if(K>arr[mid])
                start=mid+1;
            else
                end=mid-1;
            mid=end+(start-end)/2;
       }
       
       return -1;
       
    }
};