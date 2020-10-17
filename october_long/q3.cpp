//******************************Shhhhhhh, Kartik is Coding!!!***************************************//
#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
const long long MOD = 1e9+7;
using namespace std;
bool isPowerOfTwo (int x)
{
    return x && (!(x&(x-1)));
}
void solve()
{
    int N;
    cin>>N;
    if(N==1)
    {
        cout<<"1"<<endl;
        return;
    }
    if(isPowerOfTwo(N))
    {
        cout<<"-1"<<endl;
        return;
    }
    if(N==3)
    {
        cout<<"2 3 1"<<endl;
        return;
    }
    cout<<"2 3 1 ";
    for(int i=4;i<=N;i++)
    {
        if(isPowerOfTwo(i))
        {
            cout<<i+1<<" ";
            continue;
        }
        if(isPowerOfTwo(i-1))
        {
            cout<<i-1<<" ";
            continue;
        }
        cout<<i<<" ";
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