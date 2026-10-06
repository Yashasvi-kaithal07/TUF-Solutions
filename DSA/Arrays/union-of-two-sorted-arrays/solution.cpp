class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {

        vector<int> a3;

        for(int i=0 ; i<nums1.size() ; i++){
            a3.push_back(nums1[i]);
        }

        for(int i=0 ; i<nums2.size() ; i++){
            a3.push_back(nums2[i]);
        }

        set<int>st;
        for(int x : a3){
            st.insert(x);
        }
        
        vector<int> ans;
        for(auto it : st){
            ans.push_back(it);
        }
return ans;
    }
};