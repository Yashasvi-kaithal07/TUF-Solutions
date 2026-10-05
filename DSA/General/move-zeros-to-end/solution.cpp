class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int n= nums.size();

    int i=0;
        while(i < n){
            if(nums[i] == 0){
                int shift= nums[i]; 
                nums.erase(nums.begin() + i);
                nums.push_back(shift);
                n--;
                }
            
            else{
                i++;
            }

            
        }
    }
};