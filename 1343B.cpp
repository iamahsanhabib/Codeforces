#include<bits/stdc++.h>

using namespace std;
#define Y cout<<"YES"<<endl;
#define N cout<<"NO"<<endl;
#define Value cout<<v[i]<<endl;
#define Pie 3.14159265358979323846
#define Vin vector<int>v;
#define Vchar vector<char>v;
#define pb push_back
#define pp pop_back
#define ll long long


int main()
{
    int test;
    cin>>test;
    while(test--){
        ll n;
        cin>>n;
        if((n/2)%2!=0)cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            vector<ll>v;
            ll sum1 = 0, sum2=0;
            for(ll i=2;i<=n; i+=2){
                v.pb(i);
                sum2+=i;
            }
            for(ll i=1;i<=n; i+=2){
                v.pb(i);
                sum1+=i;
            }
            ll dif = sum2-sum1;
            v[n-1]=v[n-1]+dif;
            for(int i=0; i<n; i++)cout<<v[i]<<" ";
            cout<<endl;
        }

    }
    return 0;
}

