class Solution {
public:
    bool checkRecord(string s) {
        int sumL=0, sumA=0;
        if(s.size()<2){
            return true;
        }
        else{
            for(int i=0; i<s.size(); ++i){
            if(s[i]=='A'){
                sumA++;      
            }
        }
         for(int i=0; i<(s.size()-2); ++i){
            if(s[i]=='L' && s[i+1]=='L' && s[i+2]=='L'){
                sumL++;   
            }
               }
            if(sumA>=2 || sumL>0)
                return false;
        else
            return true;
        
            
        }
        
    }
};