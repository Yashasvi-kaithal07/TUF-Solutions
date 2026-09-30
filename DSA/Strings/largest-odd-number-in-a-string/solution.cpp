class Solution{
public:
    string largeOddNum(string& s){

        for(int i = s.size()-1; i >= 0; i--){

            if((s[i]-'0') % 2 != 0){

                string ans = s.substr(0, i+1);

                int j = 0;

                while(j < ans.size() && ans[j] == '0'){
                    j++;
                }

                return ans.substr(j);
            }
        }

        return "";
    }
};