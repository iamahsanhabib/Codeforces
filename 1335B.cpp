#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        vector<char>v,p;
        char x='a';
        for(int i=0; i<min(b,26); i++){
            p.push_back(x);
            x++;
        }
        int j=0;
        for(int i=0; i<n; i++){
            if(j==min(b,26))j=0;
            v.push_back(p[j]);
            j++;
        }
       for(int i=0; i<n; i++)cout<<v[i];
        cout<<endl;
    }
    return 0;
}
