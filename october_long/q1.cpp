//******************************Shhhhhhh, Kartik is Coding!!!***************************************//
#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
const long long MOD = 1e9+7;
using namespace std;
void solve()
{
    int n,k,x,y;
    cin>>n>>k>>x>>y;
    //k ->steps by virus
    //x-> start of virus
    int xr=x;
    while(1){
            if((x+k)%n==y){
                cout<<"YES"<<endl;
                break;
            }else{
                x = (x+k)%n;
                if(x==xr){
                    cout << "NO" << endl;
                    break;
                }
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