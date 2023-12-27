#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <stdlib.h> 
#include <ctype.h>
#include <vector>

// Задача про слова

using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string input;
    getline(cin, input);

    vector <string> str;
    str.push_back(input);
    vector <int> p;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == " ") {
            int a = i;
            p.push_back(a);
        }
    }


    for (int i = 0; i < p.size(); i++) {
        cout << p[i];
    }

    system("pause");
    return 0;
}
