#include <iostream>
using namespace std;

    struct {
        string Title[100];
        string Author[100];
        int YearPubl[100];
        int Pages[100];
        int price[100];
    } bookstuff;

int main() {
    int i=0;
    do{
        cout << "Enter the title of the book: ";
        cin >> bookstuff.Title[0];
        cout << "Enter the author of the book: ";
        cin >> bookstuff.Author[0];
        cout << "Enter the year of publication: ";
        cin >> bookstuff.YearPubl[0];
        cout << "Enter the number of pages: ";
        cin >> bookstuff.Pages[0];
        cout << "Enter the price of the book: ";
        cin >> bookstuff.price[0];
    }while (bookstuff.Title[0] != " " && i<=100);
    return 0;
}
