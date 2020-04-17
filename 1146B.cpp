#include<bits/stdc++.h>

using namespace std;
#define pb push_back

int main()
{
    string s;
    cin>>s;
    int len=s.size();
    vector<char>v,p;
    for(int i=0; i<len; i++){
        if(s[i]!='a')v.pb(s[i]);
    }
    bool x=true;
    int k=v.size()/2;
    if(v.size()&1)x=false;
    else{
        int i=k-1;
        for(int j=len-1; j>=len-k; j--){
            if(s[j]!=v[i])x=false;
            i--;
        }
    }
    if(x){
        for(int i=0; i<len-k; i++)cout<<s[i];
    }
    else cout<<":(";
    cout<<endl;
}
