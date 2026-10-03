class Solution {
public:
    int secondLargestElement(vector<int>& nums) {

int max = nums[0];
int secmax = INT_MIN;

for(int i = 1; i < nums.size(); i++) {

    if(nums[i] > max) {
        secmax = max;
        max = nums[i];
    }
    else if(nums[i] < max && nums[i] > secmax) {
        secmax = nums[i];
    }
}

if(secmax == INT_MIN){
    return -1;}

return secmax;
    }
};