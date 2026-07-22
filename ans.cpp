#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int a[N],b[N];
void sieve()
{
    for(int i=1;i*i<=N;i++)
    {
        a[i*i] --;
        for(int j=i*i;j<=N;j+=i)
        {
            a[j] += 2;
        }
    }
}
void sie(){
    for(int i=2;i*i<=N;i++)
    {
        b[i*i] -= i;
        for(int j=i*i;j<=N;j+=i)
        {
            b[j] += j + i;
        }
    }
}
signed main()
{
    sieve();
    sie();
        int x; cin>>x;
        cout<<a[x]<<" "<<b[x];
    return 0;
}