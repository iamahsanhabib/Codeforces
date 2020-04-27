#include<bits/stdc++.h>

using namespace std;
#define Y cout<<"YES"<<endl
#define N cout<<"NO"<<endl
#define Value cout<<v[i]<<endl
#define Pie 3.14159265358979323846
#define Vin vector<int>v
#define Vchar vector<char>v
#define pb push_back
#define pp pop_back
#define ll long long


int main()
{
    int test;
    cin>>test;
    while(test--){
        string s;
        cin>>s;
        int l=s.size();
        int cnt=0;
        for(int i=0; i<l; i++){
            if(s[i]=='1')cnt++;
        }
        if(cnt==l or cnt==0)cout<<s<<endl;
        else{
           for(int i=0; i<l; i++)cout<<"01";
           cout<<endl;

        }

    }
    return 0;
}
