//******************************Shhhhhhh, Kartik is Coding!!!***************************************//
#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
const long long MOD = 1e9+7;
using namespace std;
void solve()
{
    ll n,x,p,k;
    cin>>n>>x>>p>>k;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }   
    sort(arr,arr+n);
    if(p<k)
    {
        if(arr[p-1]<x)
        {
            cout<<"-1"<<endl;
            return;
        }
        if(arr[p-1]==x)
        {
            cout<<"0"<<endl;
            return;
        }
        else
        {
            ll tmp=upper_bound(arr,arr+n,x)-arr;
            cout<<p-tmp<<endl;
            return;
        }
    }
    else if(p>k)
    {
        if(arr[p-1]>x)
        {
            cout<<"-1"<<endl;
            return;
        }
        else if(arr[p-1]==x)
        {
            cout<<"0"<<endl;
            return;
        }
        else
        {
            ll tmp=lower_bound(arr,arr+n,x)-arr;
            cout<<tmp-p+1<<endl;
            return;
        }
    }
    else
    {
        if(arr[p-1]==x)
        {
            cout<<"0"<<endl;
            return;
        }
        else if(arr[p-1]>x)
        {
            ll tmp=upper_bound(arr,arr+n,x)-arr;
            cout<<p-tmp;
        }
        else
        {
            ll tmp=lower_bound(arr,arr+n,x)-arr;
            cout<<tmp-p+1<<endl;
            return;
        }
        
    }
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL); 
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}