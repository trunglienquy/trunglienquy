#include <iostream>
#include <string>

using namespace std;
void cau_a(string s){
    int cnt = 0;
    int cnt2 = 0;
    s[s.length()] += ' ';
    for (int i = 0; i < (s.length() - 1); i++)
    {
        if (s[i] == 'a'|| s[i] == 'o'|| s[i] == 'u'|| s[i] == 'i'|| s[i] == 'e')
        {
            cnt++;
        }
        else
        {
            if (s[i] != ' ')
            {
                cnt2++;
            }
        }
    }
    cout << "So ky tu nguyen am la: " << cnt << endl;
    cout << "So ky tu phu am la: " << cnt2;
}

int main(){
    string s;
    cout << "Enter the string: ";
    getline(cin,s);
    cau_a(s);
    
    return 0;
}