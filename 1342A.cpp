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
        ll x,y,a,b;
        cin>>x>>y>>a>>b;
        ll m = a*abs(x-y)+ min(x,y)*b;
        ll n = (x+y)*a;
        cout<<min(m,n)<<endl;

    }
    return 0;
}
