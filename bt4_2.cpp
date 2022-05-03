#include <iostream>
#include <string>
using namespace std;

int cau_a(string s){
    int cnt, max;
    cnt = max = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {
            cnt++;
        }
        if (max < cnt)
        {
            max = cnt;
        }
        if (s[i] == ' ')
        {
            cnt = 0;
        }
    }
    return max;
}

void cau_b(string s){
    int n = cau_a(s);
    int cnt = 0;
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] != ' ')
        {
            cnt++;
        }
        if (cnt == n)
        {
            cout << "Tu co do dai dai nhat la: ";
            for (int j = (i-(cnt - 1)); j <= i; j++)
            {
                cout << s[j];
            }
            cnt = 0;
        }
        if (s[i] == ' ')
        {
            cnt = 0;
        } 
    }
    
}

void cau_c(string s){
    int cnt = 0;
    int arr[12] = {0};
    int k = 0;
    s[s.length()] += ' ';
    for (int i = 0; i < s.length() + 1; i++)
    {
        if (s[i] != ' ')
        {
            cnt++;
        }
        else{
            arr[cnt - 1]++;
            cnt = 0;
        }
        
    }
    cout << "Nhap tu co k ky tu: ";
    cin >> k;
    cout << "So tu co " << k << " ky tu la: " << arr[(k - 1)] << " ";
    s[s.length()] -= ' ';
}

int firstString(string s){
    bool check = true;
    int c = 0;
    int tmp = 0;
    while (check == true)
    {
        c++;
        if (s[c] == ' ')
        {
            tmp = c;
            check = false;
        }
    }
    return tmp;
}

int lastString(string s){
    bool check = true;
    int c = s.length();
    int tmp = 0;
    while (check == true)
    {
        c--;
        if (s[c] == ' ')
        {
            tmp = c;
            check = false;
        }
    }
    return tmp;
}

void cau_d(string s){
    int a = firstString(s);
    int b = lastString(s);
    for (int i = (a + 1); i <= b; i++)
    {
        cout << s[i];
    }
    
}

int main(){
    string s;
    cout << "Enter the string: ";
    getline(cin,s);
    int max = cau_a(s);
    cout << "Tu dai nhat trong chuoi co " << max << " ky tu";
    cout << endl;
    cau_b(s);
    cout << endl;
    cau_c(s);
    cout << endl;
    int d;
    cau_d(s);
    return 0;
}
