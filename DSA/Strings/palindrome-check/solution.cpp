class Solution{	
	public:		
		bool palindromeCheck(string& s){

            string rev=s;
            reverse(s.begin(),s.end());
            if(rev==s){
                return true;
            }
            return false;
		}
};