#include <iostream>
using namespace std;

int digitsFunction(const char *str) {
    int count = 0;
    while (*str != '\0') {
        if (*str >= '0' && *str <= '9') {
            cout << *str;
            count++;
        }
        str++;
    }
    cout << endl;
    return count;
}

int main() {

    char text[100];
    cout << "Δωστε μια λεξη: " << endl;
    cin >> text;
    int result = digitsFunction(text);
    cout << "Πληθος αριθμον: " << result << endl;

    return 0;
}
