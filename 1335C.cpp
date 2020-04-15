#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        set<int>s;
        set<int>:: iterator it;
        unordered_map<int,int>mp;
        cin>>n;

        for(int i=0; i<n; i++){
                int x;
                cin>>x;
                s.insert(x);
                mp[x]++;
        }
        if(n==1){
            cout<<0<<endl;
        }
        else if(n==2)cout<<1<<endl;
        else{
            int max1=0;
            for(it=s.begin(); it!=s.end(); it++){
                if(mp[*it]>max1)max1=mp[*it];
            }

            int x = s.size();
            if(max1==x)x--;
            x=min(x,max1);
            if(n==s.size())cout<<1<<endl;
            else cout<<x<<endl;
        }
    }
    return 0;
}
