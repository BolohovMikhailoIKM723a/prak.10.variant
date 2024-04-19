#include <iostream>
#include <Windows.h>

using namespace std;
void printAgeCategory(int age)
{
    if (age < 14) {
        cout << "дитина" << endl;
    }
    else if (age < 18) {
        cout << "підліток" << endl;
    }
    else if (age < 100) {
        cout << "дорослий" << endl;
    }
}
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int age;
    cout << "введіть вік: ";
    cin >> age;

    printAgeCategory(age);

    return 0;
}