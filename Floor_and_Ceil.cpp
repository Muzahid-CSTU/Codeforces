#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        long long x , m , n;
        cin >> x >> n >> m;
        double s = 1.0*x;
        double ss = s;
        
        int f = pow(2,m);
        s = ceil(s/f);
        int d = pow(2,n);
        s = floor(s/d);
        
        int e = pow(2,n);
        ss = floor(ss/e);
        int g = pow(2,m);
        ss = ceil(ss/g);
        
        cout << s << " " << ss << endl;
    }
}