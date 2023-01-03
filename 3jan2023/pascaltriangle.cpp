class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        
        vector<vector<int>> ans;
    
    for(int i=0;i<numRows;++i){
        vector <int> v;
        int j=0;
        for(int k=0;k<=i;++k)
        {
                
                if(k==0 || k==i)
                {
                    v.push_back(1);
                }
                
                else
                {
                v.push_back(ans[i-1][j]+ans[i-1][j+1]);
                j++;
                }
        }
    
      ans.push_back(v);  
    }
    return ans;
    }
};