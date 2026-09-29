class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {

        unordered_map<int,int> freq;

        for(int x : nums){
            freq[x]++;
        }

        // Step 1: find max frequency
        int maxf = 0;

        for(auto it : freq){
            maxf = max(maxf, it.second);
        }

        // Step 2: find second max frequency
        int secmaxf = 0;

        for(auto it : freq){
            if(it.second < maxf){
                secmaxf = max(secmaxf, it.second);
            }
        }

        if(secmaxf == 0){
            return -1;
        }

        // Step 3: smallest element having second max frequency
        int ans = INT_MAX;

        for(auto it : freq){
            if(it.second == secmaxf){
                ans = min(ans, it.first);
            }
        }

        return ans;
    }
};



// class Solution {
// public:
//     int secondMostFrequentElement(vector<int>& nums) {

//         unordered_map<int,int> freq;

//         // Frequency count
//         for(int x : nums) {
//             freq[x]++;
//         }

//         int maxf = 0;
//         int secmaxf = 0;

//         // Find highest and second highest frequency
//         for(auto it : freq) {

//             if(it.second > maxf) {
//                 secmaxf = maxf;
//                 maxf = it.second;
//             }
//             else if(it.second > secmaxf &&
//                     it.second < maxf) {

//                 secmaxf = it.second;
//             }
//         }

//         // No second most frequent element
//         if(secmaxf == 0) {
//             return -1;
//         }

//         int ans = INT_MAX;

//         // Find smallest element having frequency = secmaxf
//         for(auto it : freq) {

//             if(it.second == secmaxf) {
//                 ans = min(ans, it.first);
//             }
//         }

//         return ans;
//     }
// };