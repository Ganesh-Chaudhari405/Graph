#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

void adde(vector<int> g[],int x,int y)
{
    g[x].push_back(y);
    g[y].push_back(x);
}


void display(vector<int> g[],int &V)
{

  for(auto i=0;i<V;i++)
  {
    cout<<i<<"--->";

    for(auto j=0;j<g[i].size();j++)
    	  cout<<g[i][j];
  cout<<endl;
  }


}

void bfs(vector<int> g[],int src,int V)
{
	vector<bool> vis(V,0);
	queue<int> q; 
    
      q.push(src);
      vis[src]=true;
      while(!q.empty())
      {

          int node =q.front();
          q.pop();
          cout<<node<<" ";
          for(auto i:g[node])
          {
              if(!vis[i])
              	  {
              	  	q.push(i);
              	  	vis[i]=true;
              	  }

          }





      }


    



}

void dfs(vector<int> g[],int src,int V)
{
	vector<bool> vis(V,0);
	stack<int> q; 
    
      q.push(src);
      vis[src]=true;
      while(!q.empty())
      {

          int node =q.top();
          q.pop();
          cout<<node<<" ";
          for(auto i:g[node])
          {
              if(!vis[i])
              	  {
              	  	q.push(i);
              	  	vis[i]=true;
              	  }

          }
      }

}

void dfs2(vector<int> g[],int src,vector<bool> & vis)
{

 cout<<src;
 vis[src]=true;

 for(auto i:g[src])
 {
    if(!vis[i])
    	 dfs2(g,i,vis);
 }

}



int main()
{
int V=6;	
 vector<int> g[V];



 adde(g,0,1);
 adde(g,0,2);
 adde(g,1,3);
 adde(g,3,5);
 adde(g,5,4);
 adde(g,2,4); 
display(g,V);

cout<<"traversal";
bfs(g,0,V);
cout<<" external traversal";
dfs(g,0,V);

cout<<"Using interanl stack";
vector<bool> vis1(V,0);
dfs2(g,0,vis1);


}
