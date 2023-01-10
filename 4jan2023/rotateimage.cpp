class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int m=matrix.size();
        int n=matrix[0].size();
        vector <int> ans;
        int count=0;

        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                ans.push_back(matrix[i][j]);
            }
        }

        


        for(int col=n-1;col>=0;--col){

            for(int row=0;row<m;++row){
                matrix[row][col]=ans[count];
                ++count;

            }
        }
    }
};