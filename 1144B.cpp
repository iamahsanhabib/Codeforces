#include<bits/stdc++.h>

using namespace std;
#define pb push_back

int main()
{
    int n;
    cin>>n;
    vector<int>odd,even;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(x&1)odd.pb(x);
        else even.pb(x);
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());
    int len1 = odd.size(), len2 = even.size();
    int ans=0;
    if(len1==len2)ans=0;
    else if(len1<len2){
        for(int i=0; i<len2-len1-1; i++)ans += even[i];
    }
    else{
        for(int i=0; i<len1-len2-1; i++) ans += odd[i];
    }
    cout<<ans<<endl;

    return 0;
}
