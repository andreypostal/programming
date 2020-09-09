#include <bits/stdc++.h>

using namespace std;

map<string, char> alfabeto = {
    {"=.===", 'a'},
    {"===.=.=.=", 'b'},     // -...
    {"===.=.===.=", 'c'},   // -.-.
    {"===.=.=", 'd'},       // -..
    {"=", 'e'},             // .
    {"=.=.===.=", 'f'},     // ..-.
    {"===.===.=", 'g'},     // --.
    {"=.=.=.=", 'h'},       // ....
    {"=.=", 'i'},           // ..
    {"=.===.===.===", 'j'}, // .---
    {"===.=.===", 'k'},     // -.-
    {"=.===.=.=", 'l'},     // .-..
    {"===.===", 'm'},       // --
    {"===.=", 'n'},         // -.
    {"===.===.===", 'o'},   // ---
    {"=.===.===.=", 'p'},   // .--.
    {"===.===.=.===", 'q'}, // --.-
    {"=.===.=", 'r'},       // .-.
    {"=.=.=", 's'},         // ...
    {"===", 't'},           // -
    {"=.=.===", 'u'},       // ..-
    {"=.=.=.===", 'v'},     // ...-
    {"=.===.===", 'w'},     // .--
    {"===.=.=.===", 'x'},   // -..-
    {"===.=.===.===", 'y'}, // -.--
    {"===.===.=.=", 'z'}};

int main()
{
    int n;
    scanf(" %d", &n);
    while (n--)
    {
        string str;
        cin >> str;
        for (int i = 0, p = 0, ip = 0; i < str.size(); i++)
        {
            if (str[i] == '.')
                p++;
            else
            {
                if (p == 3 || p == 7)
                    ip = i;
                p = 0;
            }

            if (p == 3 || i + 1 == str.size())
            {
                int dif = i - ip - 2;
                if (str.size() == i + 1)
                    dif = i - ip + 1;
                string st = str.substr(ip, dif);
                //cout << st << endl;
                putchar(alfabeto[st]);
            }
            if (p == 7)
                putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}