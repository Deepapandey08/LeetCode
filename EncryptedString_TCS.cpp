#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    int key;
    cout << "Enter key: ";
    cin >> key;
    if (key < 0) {
        cout << "INVALID INPUT";
        return 0;
    } else if (key == 0) {
        cout << s;
        return 0;
    }
    for (char &c : s) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            c = (c - base + key) % 26 + base;
        } else if (isdigit(c)) {
            c = '0' + ((c - '0' + key) % 10);
        }
    }
    cout << "Encrypted string: " << s << endl;
    return 0;
}
