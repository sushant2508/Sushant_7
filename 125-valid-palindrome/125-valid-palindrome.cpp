class Solution {
public:
    bool isPalindrome(string s) {
        
        if(s.size()==0) return true;
        int start=0;
        int end = s.size()-1;
        while(start<end){
            
            if(!isalnum(s[start])) start++;
            else if(!isalnum(s[end])) end--;
            else if(tolower(s[start++]) != tolower(s[end--])) return false;
            // start++;
            // end--;
                
        }
        return true;       
    }
};