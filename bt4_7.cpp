#include <iostream>
#include <string>
using namespace std;

string encrypt(string s, int k){
    string tmp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {
            tmp += char(int(s[i] + k - 97)%26 + 97);
        }
        if (s[i] == ' ')
        {
            tmp += ' ';
        }
    }
    return tmp;
}

int main(){
    string s;
    int k;
    cout << "Enter the string: ";
    getline(cin, s);
    cout << "Enter the key: ";
    cin >> k;
    cout << encrypt(s,k);
    return 0;
}