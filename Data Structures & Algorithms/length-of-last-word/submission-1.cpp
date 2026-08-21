class Solution {
public:
    int lengthOfLastWord(string s) {
     int i = s.size()-1;
     int count =0;
     while(s[i]==' ' && i >=0){
        i--;
     }
     while(s[i] != ' ' && i >=0){
        count++;
        i--;
     } 
     return count;  
    }
};