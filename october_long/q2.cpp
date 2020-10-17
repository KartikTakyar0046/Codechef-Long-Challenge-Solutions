//******************************Shhhhhhh, Kartik is Coding!!!***************************************//
#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
const long long MOD = 1e9+7;
using namespace std;
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        cout<<(a[0]/k)+1<<endl;
        return;
    }
    else
    {
    ll carry=0;
    ll res=-1;
    for(int i=0;i<n;i++) //10 5 5 3 2 1 ///
    {   
        if(a[i]>k)
        {
            a[i+1]+=a[i]-k;
            carry=a[i]-k;
        }
        if(a[i]<k)
        {
            res=i+1;
            break;
        }
    }
    if(res==-1) 
    {
        cout<<n+1+(carry/k)<<endl;
    }
    else
    {
        cout<<res<<endl;
    }
    }
    

    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}