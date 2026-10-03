
class Solution {
public:
    bool isomorphicString(string s, string t) {

        if(s.size() != t.size()) {
            return false;
        }

        int sToT[26];
        int tToS[26];

        fill(sToT, sToT + 26, -1);
        fill(tToS, tToS + 26, -1);

        for(int i = 0; i < s.size(); i++) {

            int a = s[i] - 'a';
            int b = t[i] - 'a';

            // s -> t
            if(sToT[a] != -1 && sToT[a] != b) {
                return false;
            }

            // t -> s
            if(tToS[b] != -1 && tToS[b] != a) {
                return false;
            }

            // Create mapping
            sToT[a] = b;
            tToS[b] = a;
        }

        return true;
    }
};