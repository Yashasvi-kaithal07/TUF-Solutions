class Solution{	
	public:
		bool rotateString(string& s,string& goal){
            if ( s.size() != goal.size())
            {return false;}

            string temp =s;

            for( int i=0 ; i< s.size(); i++){
                if(temp == goal){
                    return true;
                }

                char shift= temp[0];
                temp.erase(0,1);
                temp.push_back(shift);

            }
            return false;
		}
};