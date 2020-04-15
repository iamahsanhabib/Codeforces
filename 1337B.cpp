#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,n,m;
        cin>>x>>n>>m;
        while(n!=0){
            if(m*10>=x or x<=0)break;
            x = x/2 + 10;
            n--;
            if(m*10>=x or x<=0)break;
        }
        x = x- m*10;
        //cout<<x<<endl;
        if(x>0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
