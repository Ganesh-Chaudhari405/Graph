


class Solution 
{
    public:
    bool bfsc(vector<int> adj[],int node,vector<bool> &vis)
    {
        queue<pair<int,int>> q;
        q.push({node,-1});
        vis[node]=true;
        
        while(!q.empty())
        {
            
            int s=q.front().first;
            int pare=q.front().second;
            q.pop();
            for(auto i: adj[s])
               {
                   if(!vis[i])
                      {
                          q.push({i,s});
                          vis[i]=true;
                      }
                    else if(i!=pare)
                        return true;
                   
               }
            
            
        }
        
        
        
        
    }
    
    
    
    //Function to detect cycle in an undirected graph.
	bool isCycle(int V, vector<int>adj[])
	{
	    vector<bool> vis(V,0);
	    for(int i=0;i<V;i++)
	     {
	         if(!vis[i])
	           {
	               if(bfsc(adj,i,vis))
	                   {
	                       return true;
	                   }
	               
	           }
	         
	         
	     }
	     return false;
	}
};
