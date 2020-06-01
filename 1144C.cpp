#include<bits/stdc++.h>

using namespace std;
#define pb push_back

int main()
{
    int n;
    cin>>n;
    map<int, int>mp;
    map<int, int>::iterator itr;
    vector<int>v;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    int k=0,cnt=0;
    for(itr=mp.begin(); itr!=mp.end(); itr++){
        if(itr->second==2)cnt++;
        if(itr->second>2)k=1;
        v.pb(itr->first);
    }
    if(k==1)cout<<"No"<<endl;
    else{
        cout<<"YES"<<endl;
        cout<<cnt<<endl;
        for(itr=mp.begin(); itr!=mp.end(); itr++){
            if(itr->second==2)cout<<itr->first<<" ";
        }
        cout<<"\n"<<n-cnt<<endl;
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        for(int i=0; i<v.size(); i++)cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}
