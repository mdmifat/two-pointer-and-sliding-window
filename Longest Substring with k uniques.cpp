#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
const int N = 2e5+10;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;

    int n=s.size();

    int k;
    cin>>k;

    int l=0,r=0,ans=-1;
    map<char,int>mp;

    while(r<n){
        mp[s[r]]++;
        if(mp.size()==k){
            ans=max(ans,r-l+1);
        }
        else{
            while(mp.size()>k && l<r){
                mp[s[l]]--;
                if(mp[s[l]]==0){
                    mp.erase(s[l]);
                }
                l++;
            }
            if(mp.size()==k){
            ans=max(ans,r-l+1);
           }
        }

        r++;
    }

    cout << ans <<endl;
   
    return 0;
}