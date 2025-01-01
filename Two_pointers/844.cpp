class Solution {
public:
    bool backspaceCompare(string s, string t) {
      stack<char>s1,s2;
      for(int i=0;i<s.length();i++){
        if(s[i]=='#' && !s1.empty()){
            s1.pop();
        }
        else{
            if(s[i]!='#'){
                s1.push(s[i]);
            }
        }
      }
      for(int i=0;i<t.length();i++){
        if(t[i]=='#' && !s2.empty()){
            s2.pop();
        }
        else{
            if(t[i]!='#'){
                s2.push(t[i]);
            }
        }
      }
      if(s1.size()!=s2.size()){
        return false;
      }
      while(!s1.empty() || !s2.empty()){
         char c1,c2;
         c1=s1.top();
         c2=s2.top();
         s1.pop();
         s2.pop();
         if(c1!=c2){
            return false;
         }
      }
      return true;
    }
};