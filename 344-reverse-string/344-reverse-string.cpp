class Solution {
public:
    
    void reverseString(vector<char>& s) {
      if(s.size()==1) return;
      char c = s[0];
      s.erase(s.begin());
      reverseString(s);
      s.push_back(c);
        
    }
};