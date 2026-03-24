#include <iostream>
#include <string>
using namespace std;

class book {
    string title;
    string author;
    int copies;

public:

    book(string t, string a, int c) {
        title = t;
        author = a;
        copies = c;
    }

    
    void displaybook() {
        cout << "\n--- Book Details ---" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Available Copies: " << copies << endl;
    }

    
    void issuebook() {
        if (copies > 0) {
            cout << "Book issued " << endl;
            copies; 
        } else {
            cout << "Sorry, the book is not available right now." << endl;
        }
    }
};

int main() {
   
    book b1("C++ Programming", "Maths", 2);

    b1.displaybook();


    cout << "\nStudent requests to issue the book " << endl;
    b1.issuebook();

    b1.displaybook();

    return 0;
}