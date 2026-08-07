class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
     int n = numCourses;
     vector<int>ind(n,0);
     queue<int>q;
      vector<vector<int>>adj(n);
      for(auto x : prerequisites){
          adj[x[1]].push_back(x[0]);
          ind[x[0]]++; 
      }
     priority_queue<int,vector<int>,greater<int>>pq;
     for(int i =0 ;i < ind.size();i++){
        if(ind[i] ==0)
         pq.push(i);
     }
     
     while(!pq.empty()){
        auto node = pq.top();
        pq.pop();
        q.push(node);
        for(auto neigh : adj[node]){
             ind[neigh]--;
             if(ind[neigh] == 0){
                pq.push(neigh);
             }
        }
     }
     if(q.size() == numCourses)return true;
      else{
        return false;
      }
    }
};
