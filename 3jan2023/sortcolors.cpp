class Solution {
public:
    void sortColors(vector<int>& nums) {
    
        int cz=0,co=0,ct=0;
   
    for(int i=0;i<nums.size();++i){
        if(nums[i]==0)
            cz++;
        if(nums[i]==1)
            co++;
        if(nums[i]==2)
            ct++;
    }
        
    nums.clear();
    
    while(cz>0){
        nums.push_back(0);
        --cz;
    }
        
    while(co>0){
        nums.push_back(1);
        --co;
    }
    
    while(ct>0){
        nums.push_back(2);
        --ct;
    }
    
    }
};