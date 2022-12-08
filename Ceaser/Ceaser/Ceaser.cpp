#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char buff[50] = {};
    int key;

    puts("Введите сообщение");
    gets_s(buff);
    puts("Введите ключ");
    cin >> key;
    for (int i = 0; i < strlen(buff); i++)
        if (buff[i] != ' ') {
            buff[i] += key;
        }
    cout << buff << endl;

    cout << "Расшифровка: " << endl;
    for (int i = 0; i < strlen(buff); i++)
        if (buff[i] != ' ') {
            buff[i] -= key;
        }
    cout << buff << endl;
    return 0;
}