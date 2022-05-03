#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cout << "Enter the string: ";
    int cnt = 0;
    getline(cin,s);
    int t = s.length();

    for (int i = 0; i <= (s.length()); i++)
    {
        if (s[i] != ' ' && i != t)
        {
            cnt++;
        }
        
        if (s[i] == ' ' || i == t)
        {
            // for (int j = (i - cnt); j < i; j++)
            // {
            //     cout << s[j];
            // }
            for (int j = (i-1); j >= (i - cnt); j--)
            {
                cout << s[j];
            }
            cout << " ";
            cnt = 0;
        }
        
    }
    
    return 0;
}