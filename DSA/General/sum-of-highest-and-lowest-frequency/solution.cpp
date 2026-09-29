class Solution {
public:
    int sumHighestAndLowestFrequency(vector<int>& nums) {
    unordered_map<int,int>f;
    int maxf=0;
    int minf=INT_MAX;
    
    for(int i: nums){
        f[i]++;
    }
     for( auto it : f){
         maxf=max(maxf,it.second);
         minf= min(minf, it.second);
     }
    int sum=maxf + minf;
    return sum;

    }
};
