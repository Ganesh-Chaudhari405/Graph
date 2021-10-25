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




--------------------------------------------------
--------------------------------------------------
    
    
#include<iostream>
#include <vector>
using namespace std;

int main()
{

int e,v;

cin>>e>>v;
vector<vector<int>> a(v,vector<int>(v,0));


for(int i=0;i<e;i++)
{   int x,y;
    cin>>x>>y;

    a[x][y]=1;
    a[y][x]=1;

}

for(int i=0;i<v;i++)
{
for(int j=0;j<v;j++)
{
	cout<<a[i][j]<<" ";
}
cout<<endl;
}


}








