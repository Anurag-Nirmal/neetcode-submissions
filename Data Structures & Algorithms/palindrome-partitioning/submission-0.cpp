class Solution {
public:
    vector<vector<string>>output;
    vector<string>ans;
    bool isPal(string ans){
       int i =0 ;
       int j = ans.size()-1;
       while(i < j){
        if(ans[i] == ans[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
       }
       return true;
    }
    void solve(string s,int idx){
        if(idx == s.size()){
            output.push_back(ans);
            return;
        }
        for(int i = idx ; i<s.size() ;i++){
            string temp = s.substr(idx,i-idx+1);
            if(isPal(temp)){
                ans.push_back(temp);
                solve(s,i+1);
                 ans.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
      solve(s,0);
      return output;   
    }
};
