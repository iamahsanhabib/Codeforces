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
        int n;
        cin>>n;
        //vector<int>v;
        int k=1;
        int sum =1;
        for(int i=1; i<=30; i++){
            //v.pb(k);
            k = k*2;
            sum += k;
            if(n%sum==0){
                cout<<n/sum<<endl;
                break;
            }
        }

    }
    return 0;
}

