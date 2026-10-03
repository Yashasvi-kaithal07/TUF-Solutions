class Solution{	
	public:
		bool anagramStrings(string &s,string &t){
            if( s.size() != t.size()){
                return false;
            }
            int a[26];
            fill(a, a + 26 , -1);
            // for(int i=0 ; i < 26; i++){
            //     a[i]=-1;}

                for(int i=0 ; i < s.size(); i++){
                a[s[i]-'a'] ++;
                a[t[i]-'a'] --;

            }

            for(int i=0 ; i<26; i++){
               if(a[i] != -1) {
                return false;
               }
            }
            return true;
		}
};