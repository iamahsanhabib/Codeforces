#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int x=(c-b);
        (x>0)?x=c+1:x=c;
        cout<<a<<" "<<x<<" "<<d<<endl;
    }
    return 0;
}
