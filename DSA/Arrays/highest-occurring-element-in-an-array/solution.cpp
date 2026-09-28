class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        unordered_map<int,int>f;
        int maxf=0;
        int ans= INT_MAX;

        for(int i=0; i<nums.size(); i++){
            f[nums[i]]++;}

            for(auto it : f){
            if(it.second > maxf){
                maxf = it.second;
                ans=it.first;
            }

            else if(it.second == maxf){
                ans= min(ans,it.first);
            }
        }
        return ans;
    }
};