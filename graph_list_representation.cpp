#include<iostream>
#include<vector>

using namespace std;

void adde(vector<pair<int,int>> g[],int x,int y,int w)
{
    g[x].push_back({y,w});
    g[y].push_back({x,w});
}


void display(vector<pair<int,int >> g[],int V)
{

  for(auto i=0;i<V;i++)
  {
    cout<<i<<"--->";

    for(auto j=0;j<g[i].size();j++)
    	  cout<<g[i][j].first<<" "<<g[i][j].second<<" ";
  cout<<endl;
  }

}
int main()
{
int V=6;	
 vector<pair<int,int>> g[V];
//cout<<"ganesh";
 adde(g,0,1,10);
 adde(g,0,2,20);
 adde(g,1,3,30);
 adde(g,3,5,40);
 adde(g,5,4,50);
 adde(g,2,4,60); 

display(g,V);



}





-------==============================================================
    ============================================================
    
    
    #include<iostream>
#include <vector>
using namespace std;

int main()
{
int n;
cin>>n;
vector<pair<int,int>> v[n];

for(int i=0;i<n;i++)
{
	int x,y,w;
	cin>>x>>y>>w;
	v[x].push_back({y,w});
	v[y].push_back({x,w});
}

cout<<"out"<<endl;
for(int i=0;i<n;i++)
{
	cout<<i<<"--->";

for(int j=0;j<v[i].size();j++)
{
	cout<<v[i][j].first<<" -> "<<v[i][j].second<<"           ";
}
cout<<endl;

}





}






















