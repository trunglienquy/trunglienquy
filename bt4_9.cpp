#include <iostream>
#include <fstream>
#include <string>
using namespace std;



int main(){
    fstream ip1;
    ofstream ip2("CHUOI.OUT");
    int n, max;
    max = 0;
    string s;
    ip1.open("CHUOI.INP" , ios_base::in);
    ip1 >> n;
    ip1 >> s;
    for (int i = 0; i < n;)
    {
        int l = i, r = i;
        while (r < (n - 1) && s[r+1] == s[r])
        {
            r++;
        }
        i = r + 1;
        while (r < (n - 1) && l > 0 && s[l - 1] == s[r + 1])
        {
            --l;
            ++r;
        }
        int newMax = r - l + 1;
        if (max < newMax)
        {
            max = newMax;
        }
    }
    ip2 << max;
    
    // ip1.close();
    ip2.close();
    return 0;
}