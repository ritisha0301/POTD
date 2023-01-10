//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    
    
    
    int primeSum(int N){
        
        int ans=0;
        
        while(N!=0){
            
            int rem=N%10;
            if(rem==2 || rem==3 || rem==5 || rem==7 )
                ans+=(rem);
            N/=10;
        }
        
        return ans;
    }
};