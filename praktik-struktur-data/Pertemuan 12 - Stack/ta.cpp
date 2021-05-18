#include <iostream>
using namespace std;
  
bool sentencePalindrome(string str)
{
    int l = 0, h = str.length() - 1;
  
    for (int i = 0; i <= h; i++)
        str[i] = tolower(str[i]);
  
    while (l <= h) {
        if (!(str[l] >= 'a' && str[l] <= 'z'))
            l++;
        else if (!(str[h] >= 'a' && str[h] <= 'z'))
            h--;
        else if (str[l] == str[h])
            l++, h--;
        else
            return false;
    }

    return true;
}

int main()
{
    string str;

    cout << "Masukkan Kalimat : ";
    getline(cin, str);
  
    if (sentencePalindrome(str))
        cout << "\nKalimat polindrom";
    else
        cout << "\nBukan kalimat polindrom";
  
    return 0;
}