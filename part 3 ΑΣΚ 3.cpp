#include <iostream>
using namespace std;

    struct {
        string ARKI;
        string MARK;
        string XROM;
        int KIB;
        int IPO;
    } car;

int main() {
    cout << "Enter license plate: ";
    cin >> car.ARKI; 
    cout << "Enter brand: ";
    cin >> car.MARK; 
    cout << "Enter color: ";
    cin >> car.XROM;
    cout << "Enter engine capacity (in cc): ";
    cin >> car.KIB;
    cout << "Enter horsepower: ";
    cin >> car.IPO;
    return 0;
}
