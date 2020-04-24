#include<bits/stdc++.h>

using namespace std;

int main()
{
    int r,c,k;
    cin>>r>>c>>k;
    int g = 0;
    while(k--){
        g = g+2*r+2*(c-2);
        r -= 4;
        c -= 4;
    }
    cout<<g<<endl;

    return 0;
}
