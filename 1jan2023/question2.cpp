//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> minAnd2ndMin(int a[], int n) {
    set<int> ans;
    vector<int> answer;
    for(int i=0;i<n;++i){
        ans.insert(a[i]);
    }
    if(ans.size()==1)
    {
        answer.push_back(-1);
        return answer;
    }
    set<int>:: iterator itr=ans.begin();
    int key=*itr;
    ++itr;
    int key1=*itr;
    
    answer.push_back(key);
    answer.push_back(key1);
    return answer;
}