//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
        if(n==0)
            return false;
        while(n!=1){
            
            if(n%2!=0)
                return false;
            n=n/2;
        }
        
        return true;
        
    }
};