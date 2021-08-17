//weighted graph undirected

#include<iostream>
#include<vector>

using namespace std;

void adde(vector<vector<int>> & g,int x,int y,int w )
{
    g[x][y]=w;
    g[y][x]=w;
}


void display(vector<vector<int >> &g)
{

  for(auto i=0;i<g.size();i++)
  {
    for(auto j=0;j<g[i].size();j++)
    	  cout<<g[i][j]<<" ";
    cout<<endl;
  }

}
int main()
{
int V=6;	
 vector<vector<int> > g(V,vector<int>(V));
//cout<<"ganesh";
 adde(g,0,1,10);
 adde(g,0,2,20);
 adde(g,1,3,30);
 adde(g,3,5,40);
 adde(g,5,4,50);
 adde(g,2,4,60); 

display(g);



}

