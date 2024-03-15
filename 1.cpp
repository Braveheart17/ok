#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n' 
#define mod 1000000007
void solve()
{
   
    vector<string>v= {"eat","tea","tan","ate","nat","bat"};
    vector<string>v2;
    for(string i:v){
        string s=i;
       s=  sort(s.begin(),s.end());
        cout<<i<<endl;

    }

}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}

