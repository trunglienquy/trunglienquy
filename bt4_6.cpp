#include <iostream>
#include <string>
using namespace std;

int main(){
    string s, s1, s2, s3, s4;
    cout << "Enter the string: ";
    getline(cin,s);
    int l, x, r, x1, len; 
    l = x = 0;
    while (s[l] != ' ')
    {
        l++;
    }
    if (s[l] == ' ')
    {
        x = l;
    }
    s2 = s.substr(0, x);
    r = len = s.length();
    while (s[r] != ' ')
    {
        r--;
    }
    if (s[r] == ' ')
    {
        x1 = r;
    }
    s3 = s.substr(x1,len);
    s4 = s.substr(x,(r-3));
    s1 = s2 + s3 + s4;
    cout << s1;
    
    
    
    return 0;
}