#include <iostream>
#include <string>
using namespace std;

int main() {
    string phrases[10];
    for(int i = 0; i < 10; i++) {
        cout << "Enter phrase " << (i+1) << ": ";
        cin >> phrases[i];
    }
    int spaces = 0;
    for(int i = 0; i < 10; i++) {
        for(char c : phrases[i]) {
            if(c == ' ') {
                spaces++;
            }
        }
    }
    cout << "Total spaces: " << spaces << endl;
    return 0;
}
