class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        int i=0,j=0;
        while( i < nums1.size() && j < nums2.size()){
                if(nums1[i]<nums2[j]){
                    if(!arr.empty() && arr.back() == nums1[i]){
                        i++;
                        continue;
                    }
                    arr.push_back(nums1[i]);
                    i++;
                }
                else if(nums2[j]<nums1[i]){
                    if(!arr.empty() && arr.back() == nums2[j]){
                        j++;
                        continue;
                    }
                    arr.push_back(nums2[j]);
                    j++;
                }
                else if(nums1[i]==nums2[j]){
                    if(!arr.empty() && arr.back() == nums2[j]){
                        j++;
                        i++;
                        continue;
                    }
                    arr.push_back(nums1[i]);
                    i++;
                    j++;
                }


            
            }
        
        while(i<nums1.size()){
            if(!arr.empty() && arr.back() == nums1[i]){
                i++;
                continue;
                
            }
            arr.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()){
            if(!arr.empty() && arr.back() == nums2[j]){
                j++;
                continue;
                
            }
            arr.push_back(nums2[j]);
            j++;
        }
        return arr;
    }
};