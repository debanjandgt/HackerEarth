#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> sieve(pow(10,6),1);
    vector<int> freq(pow(10,6),1);
    for(int i=2;i*i<=pow(10,6);i++)
    {
        if(sieve[i] == 1)
        {
            for(int j=i*i;j<=pow(10,6);j+=i)
            {
                if(sieve[j] == 1)
                {
                    freq[i]++;
                    sieve[j]=0;
                }
            }
        }
    }
    int t;
    cin >> t;
    while(t)
    {
        t--;
        int x;
        cin >> x;
        if(x==2)
        {cout << 500000 << endl;
        continue;}
        cout << freq[x] << endl;
    }
}
