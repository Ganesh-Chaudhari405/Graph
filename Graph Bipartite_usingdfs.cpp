class Solution {
public:
    
    bool check(vector<vector<int>>& graph,vector<int>& vis,int src)
    {
        //queue<int> q;
        stack<int> q;
        q.push(src);
        vis[src]=1;
        while(!q.empty())
        { int node=q.top();
          q.pop();
         
         for(auto i: graph[node])
         {
             if(vis[i]==-1)
             {
                 q.push(i);
                 vis[i]=1-vis[node];
             }
             else if(vis[i]==vis[node])
                 return false;
             
         }
            
            
        }
    
        return true;
    }
    
    
    
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> vis(graph.size(),-1);
        for(int i=0;i<graph.size();i++)
        {
            if(vis[i]==-1)
            {
            if(!check(graph,vis,i))
                 return false;
            }
        }
        
        
        return true;
    }
};
