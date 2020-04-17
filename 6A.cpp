#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[4];
    for(int i=0; i<4; i++)cin>>a[i];
    sort(a, a+4);
    int x=0;
    if(a[0]+a[1]>a[2] or a[1]+a[2]>a[3])x=1;
    else if(a[0]+a[1]==a[2] or a[1]+a[2]==a[3])x=2;
    if(x==1)cout<<"TRIANGLE"<<endl;
    else if(x==2)cout<<"SEGMENT"<<endl;
    else cout<<"IMPOSSIBLE"<<endl;

    return 0;
}
