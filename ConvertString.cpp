#include <bits/stdc++.h>
using namespace std;

string convertString(string str)
{
    // WRITE YOUR CODE HERE
    cout << str << endl;
    for (int i = 0; i < str.length(); i++)
    {
        if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        else if (i != 0 && str[i - 1] == ' ' && str[i] >= 'a' && str[i] <= 'z')
        {

            str[i] -= 32;
        }
    }
    cout << str << endl;
    return str;
}
int main()
{
    string str ;
    cin>>str;
    convertString(str);
     return 0;
}