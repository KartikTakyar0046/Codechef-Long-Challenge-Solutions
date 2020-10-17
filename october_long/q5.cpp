//******************************Shhhhhhh, Kartik is Coding!!!***************************************//
#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
const long long MOD = 1e9+7;
using namespace std;
ll maxKey(ll key[] ,bool mstSet[] , ll v)
{
	ll max=-1;
	ll index=-1;
	for(ll i=0;i<v;i++){
		if(mstSet[i]==false && key[i]>max){
			max=key[i];
			index=i;
		}
	}
    return index;
}
void mst(vector<vector<ll>>graph, ll n)
{
    ll parent[n];
    ll key[n];
    bool mstset[n];
    for(ll i=0;i<n;i++)
    {
        key[i]=-1;
        mstset[i]=false;
    }
    key[0]=0;
    parent[0]=-1;
    for(ll count=0;count<n-1;count++){
		ll u=maxKey(key,mstset,n);
		mstset[u]=true;
		for(long j=0;j<n;j++){
			if(graph[u][j]!=0 && mstset[j]==false && graph[u][j]>key[j]){
				parent[j]=u;
				key[j]=graph[u][j];
			}
		}
	}
    ll sum=0;
	for(ll i=1;i<n;i++){
		sum+=graph[parent[i]][i];
	}
	cout<<sum<<"\n";
}
ll weight(vector<ll> x,vector<ll> y)
{
    ll w=0;
    for(ll k=0;k<x.size();k++)
    {
        w+=abs(x[k]-y[k]);
    }
    return w;
}
int main()
{
     ll n,d;
    cin>>n>>d;
    vector <vector<ll> > v(n,vector<ll>(d));
    vector <vector<ll> > graph(n,vector <ll>(n,0));
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<d;j++)
        {
            int tmp;
            cin>>tmp;
            v[i].push_back(tmp);
        }
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=i+1;j<n;j++)
        {
            ll wt=weight(v[i],v[j]);
            graph[i][j]=wt;
            graph[j][i]=wt;
        }
    }
    mst(graph,n);
    return 0;
}