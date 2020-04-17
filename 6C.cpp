#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    int n;
    cin>>n;
    ll a[100004];
    for(int i=0; i<n; i++)cin>>a[i];
    ll alice = 0, bob = 0,cnt1=0, cnt2=0;
    int j=n-1;
    for(int i=0; i<n; ){
        if(i==j){
            if(alice<=bob)cnt1++;
            else cnt2++;
            break;
        }
        if(alice<=bob){
            alice += a[i];
            i++;
            cnt1 ++;
        }
        else{
            bob += a[j];
            j--;
            cnt2++;
        }
    }
    cout<<cnt1<<" "<<cnt2<<endl;

    return 0;
}
