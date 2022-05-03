#include <iostream>
#include <string>
using namespace std;

void cau_a(string s){
    string tmp;
    int k;
    cout << "Enter the string insert: ";
    getline(cin,tmp);
    cout << "Enter the posion you want insert string: ";
    cin >> k;
    s.insert(k, tmp);
    cout << s << endl;
}

void cau_b(string s){
    int k, n;
    cout << "Enter the quantity of string: ";
    cin >> n;
    cout << "Enter the postion you want delete: ";
    cin >> k;
    s.erase((n + 1) ,k);
    cout << s;
}

int main(){
    string s;
    cout << "Enter the string: ";
    getline(cin,s);
    cau_a(s);
    cau_b(s);
    return 0;
}