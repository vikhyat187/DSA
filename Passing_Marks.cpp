    #include <bits/stdc++.h>
    using namespace std;
    #define ar array
    #define ll long long
    const int MAX_N = 1e5 + 1;
    const ll MOD = 1e9 + 7;
    void solve(int a_min,int b_min,int c_min,int t_min,int a,int b,int c)
    {
        if (a>=a_min && c>=c_min && b>=b_min )
        {
            if (a + b+ c>=t_min){
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }
        else cout<<"NO"<<endl;

    }
    int main()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int tc = 1;
        cin >> tc;
        int a_min,b_min,c_min,t_min,a,b,c;
        for (int t = 1; t <= tc; t++)
        {
            cin>>a_min>>b_min>>c_min>>t_min>>a>>b>>c;   
            solve(a_min,b_min,c_min,t_min,a,b,c);
        }
    }
