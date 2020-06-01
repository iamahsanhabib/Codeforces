#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int n,len;
    cin>>n;
    vector<string>v;
    for(int i=1; i<=n; i++){
        cin>>s;
        sort(s.begin(), s.end());
        len=0;
        for(int i=0; s[i]!='\0'; i++){
            len++;
        }
        int k=0;
        for(int i=0; i<len-1; i++){
            int a=s[i];
            int b=s[i+1];
            if(b-a!=1){
                cout<<"No"<<endl;
                break;
            }
            else{
                k++;
            }
        }
        if(len==1 || k==len-1){
            cout<<"Yes"<<endl;
        }


    }
    return 0;
}
