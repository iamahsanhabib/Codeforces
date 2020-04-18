#include<bits/stdc++.h>

using namespace std;
#define pb push_back

int main()
{
    int n;
    int x,y,mint[100005];
    cin>>n;
    for(auto i=0; i<n; i++){
        cin>>x>>y;
        mint[i]=60*x+y;
    }
    vector<int>v;
    v.pb(1);
    int k=mint[0];
    for(auto i=1; i<n; i++){
        if(mint[i]-k<1)v[v.size()-1]++;
        else v.pb(1),k=mint[i];
    }
    sort(v.begin(),v.end());
    cout<<v[v.size()-1]<<endl;

    return 0;
}
