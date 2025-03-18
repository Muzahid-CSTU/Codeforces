#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        long long x , m , n;
        cin >> x >> n >> m;
        long long nx = x;
        long long f,d;
        if(m>=60){
            f = 1LL << 60;
        }
        else{
            f = 1LL << m;
        }
        if(n>=60){
            d = 1LL << 60;
        }
        else{
            d = 1LL << n;
        }
        double s = ceil(1.0*x/f);
        s = floor(s/d);
        long long sk = (long long) s;
        double ss = floor(1.0*nx/d);
        ss = ceil(ss/f);
        long long ssk = (long long) ss;
        
        cout << sk << " " << ssk << endl;
    }
}
