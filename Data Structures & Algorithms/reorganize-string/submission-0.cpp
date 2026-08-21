class Solution {
public:
    string reorganizeString(string s) {
      string temp ="";
      priority_queue<pair<int,char>>pq;
      unordered_map<char,int>freq;
      for(auto x:s){
        freq[x]++;
      }
      for(auto x : freq){
        pq.push({x.second,x.first});
      }
      if((pq.top().first) > (s.size() + 1)/2)return temp;
      while(pq.size() >=2){
        auto first = pq.top();
        pq.pop();

        auto second = pq.top();
        pq.pop();

        temp+=first.second;
        first.first--;
        temp+=second.second;
        second.first--;

        if(first.first > 0)pq.push({first.first,first.second});
        if(second.first >0)pq.push({second.first,second.second});
      }
      if (!pq.empty()) {
            temp += pq.top().second;
        }
      
      return temp;  
    }
};