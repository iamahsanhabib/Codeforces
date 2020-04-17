#include<bits/stdc++.h>

using namespace std;

int main()
{
    char n[8][8];
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++)cin>>n[i][j];
    }
    int cnt1=0, cnt2=0;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(n[i][j]=='W'){
                cnt1++;
                break;
            }
        }
    }
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(n[j][i]=='W'){
                cnt2++;
                break;
            }
        }
    }
    int ans;
    if(cnt1+cnt2==0)ans = 8;
    else{
        ans = 16-cnt1-cnt2;
    }
    cout<<ans<<endl;

    return 0;
}
