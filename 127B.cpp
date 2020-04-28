#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    unordered_map<int,int>mp;
    unordered_map<int,int>:: iterator it;
    for(int i=1; i<=n; i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    vector<int>v;
    int sum = 0;
    for(it=mp.begin(); it!=mp.end(); it++){
        int x=it->second;
        sum += (x/2*2);
        v.push_back(it->second/2*2);
    }
    //sort(v.begin(), v.end());
    //int l=v.size();
    //cout<<max(v[l-1]/2,min(v[l-1]/2,v[l-2]/2))<<endl;
    cout<<sum/4<<endl;
    return 0;

}
