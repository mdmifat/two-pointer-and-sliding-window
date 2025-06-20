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
    for(long long i=0;i<n;i++)cin>>v[i];

    long long l=0,r=0,ans=0;
    multiset<long long>st;

    while(r<n){
        st.insert(v[r]);
        long long mx=*st.rbegin(),mn=*st.begin();

        if(mx-mn<=k){
            ans+=(r-l+1);
        }
        else{
            while(l<=r){
                mx=*st.rbegin(),mn=*st.begin();
                if(mx-mn<=k)break;
                st.erase(st.find(v[l]));
                l++;
            }

            mx=*st.rbegin(),mn=*st.begin();
            if(mx-mn<=k){
            ans+=(r-l+1);
          }
        }

        r++;
    }

    cout<< ans <<endl;
    
    return 0;
}