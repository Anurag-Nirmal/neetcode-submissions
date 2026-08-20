class Solution {
public:
    bool valid(int i , int j ,string& s){
       while(i < j){
         if(s[i] == s[j]){
            i++;
            j--;
        }
        else{
          return false;
        } 
       }
       return true;
    }
    bool validPalindrome(string s) {
      int i =0 ; int j = s.size()-1;
      while(i < j){
        if(s[i] == s[j]){
            i++;
            j--;
        }
        else{
          return valid(i+1,j,s) || valid(i,j-1,s) ;  
        }
      } 
      return true; 
    }
};