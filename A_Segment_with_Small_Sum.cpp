#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
const int N = 2e5+10;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,k;
    cin>>n>>k;

    vector<long long>v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    long long l=0,r=0,sum=0,ans=0;

    while(r<n){
        sum+=v[r];

        if(sum<=k){
            ans=max(ans,r-l+1);
        }

        while(sum>k){
            sum-=v[l];
            l++;
        }

        r++;
    }

    cout << ans <<endl;
    
    return 0;
}