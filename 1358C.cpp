#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--){
        ll x,y,m,n;
        cin>>x>>y>>m>>n;
        ll ans=0;
        if(x==m or y==n)ans = 1;
        else{
            ans = (m-x)*(n-y)+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
