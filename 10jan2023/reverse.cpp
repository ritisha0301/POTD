//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    
    string rev(string x){
        
        string ans="";
        
        for(int i=x.length()-1;i>=0;--i){
            ans+=x[i];
        }
        
        return ans;
    }
    
    string reverseWords(string S) 
    { 
        string ans="",temp="";
        
        for(int i=S.length()-1;i>=0;--i){
            if(i==0){
                temp+=S[i];
                ans=ans+rev(temp);
            }
            if(S[i]=='.')
            {    ans=ans+rev(temp)+".";
                temp="";}
                
            else{
                temp+=S[i];
            }
            
        }
        
        return ans;
    } 
}