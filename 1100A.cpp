#include<bits/stdc++.h>

using namespace std;
#define pb push_back

int main()
{
    int n,k,a[100];
    cin>>n>>k;
    vector<int>p;
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<k; i++){
        vector<int>v;
        for(int j=0; j<n; j++)v.pb(a[j]);
        for(int j=i; j<v.size(); j+=k){
            v[j]=0;
        }
        int cnt1=0,cnt2=0;
        for(int j=0; j<v.size(); j++){
            if(v[j]==1)cnt1++;
            if(v[j]==-1)cnt2++;
        }
        p.pb(abs(cnt1-cnt2));
    }
    sort(p.begin(),p.end());
    cout<<p[p.size()-1]<<endl;

    return 0;
}
