#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back

int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll ans;
        ((n*m)&1)?ans = n*m/2+1:ans = n*m/2;
        cout<<ans<<endl;
    }

    return 0;
}
