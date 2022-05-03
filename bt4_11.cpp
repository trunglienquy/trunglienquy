#include <iostream>
#include <string>
using namespace std;

void cau_a(string s){
    int cnt = 0;
    int arr[12] = {0};
    s[s.length()] += ' ';
    for (int i = 0; i <= s.length(); i++)
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
    cout << "So luong tu co 3 ky tu xuat hien: "<< arr[2] << " lan";
    cout << endl;
    s[s.length()] -= ' ';
}

void cau_b(string s){
    char n;
    int cnt = 0;
    bool check = false;
    cout << "Enter the word n: ";
    cin >> n;
    for (int i = 0; i <= s.length(); i++)
    {
        if (s[i] != ' ' && s[i] == n)
        {
            check = true;
        }
        if (s[i] == ' ' && check == true)
        {
            cnt++;
        }
        
    }
    cout << "So tu co chua ky tu " << n << " xuat hien " << cnt << " lan";
}

int countlongString(string s){
    int cnt = 0;
    for (int i = 0; i < s.length(); i++)
    {
        cnt++;
    }
    return cnt;   
}

void bubbleSort(string arr[], int n)
{
    int i,j;
    bool haveSwap = false;
    for (i = 0; i < n-1; i++){
        haveSwap = false;
        for (j = 0; j < n-i-1; j++){
            if (countlongString(arr[j]) > countlongString(arr[j+1])){
                swap(arr[j], arr[j+1]);
                haveSwap = true;
            }
        }
        if(haveSwap == false){
            break;
        }
    }
}


int main(){
    string s;
    string arr[10000];
    cout << "Enter the string: ";
    getline(cin, s);
    cau_a(s);
    cau_b(s);
    bubbleSort(arr,1);
    for (int j = 0; j < 1; j++)
    {
        cout << arr[j] << " " << endl;
    }
    return 0;
}