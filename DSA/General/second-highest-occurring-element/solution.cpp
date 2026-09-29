// class Solution {
// public:
//     int secondMostFrequentElement(vector<int>& nums) {
//     unordered_map<int,int>f;
//     // int max=0;
//     int secmax=0;
//     int ans = INT_MAX;

//     for(int i=0 ; i<nums.size();i++){
//         f[nums[i]]++;
//     }

//     for(auto it: f){
//     int maxf = max(maxf, it,second)
//     }
//      if(it.second > secmax && it.second < max){
//         secmax= it.second;
//     }
//     if(it.second == secmax){
//         ans=  min(ans,it.first);
//     }

// }
//     return -1;
//     }

// };

class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {

        unordered_map<int,int> freq;

        // Frequency count
        for(int x : nums) {
            freq[x]++;
        }

        int maxf = 0;
        int secmaxf = 0;

        // Find highest and second highest frequency
        for(auto it : freq) {

            if(it.second > maxf) {
                secmaxf = maxf;
                maxf = it.second;
            }
            else if(it.second > secmaxf &&
                    it.second < maxf) {

                secmaxf = it.second;
            }
        }

        // No second most frequent element
        if(secmaxf == 0) {
            return -1;
        }

        int ans = INT_MAX;

        // Find smallest element having frequency = secmaxf
        for(auto it : freq) {

            if(it.second == secmaxf) {
                ans = min(ans, it.first);
            }
        }

        return ans;
    }
};