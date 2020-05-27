#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a[200005];
        cin>>n;
        int cnt = 0;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a, n+a);
        for(int i=n-1; i>=0; i--){
            if(a[i]<=i+1){
                cnt = i+1;
                break;
            }
        }
        cout<<cnt+1<<endl;

    }
    return 0;
}
