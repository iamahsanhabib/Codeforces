#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    double time = 0;
    double a,b;
    cin>>a>>b;
    for(int i=0; i<n-1; i++){
        double x,y;
        cin>>x>>y;
        a = abs(a-x), b = abs(b-y);
        time += sqrt(a*a+b*b);
        a=x, b=y;
    }
    printf("%.9lf\n",time/50*k);
    return 0;
}
