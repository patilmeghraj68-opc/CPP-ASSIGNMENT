#include <iostream>
using namespace std;

class palindrome {
    int num;

public:
    void inputnumber() {
        cout << "enter a number: ";
        cin >> num;
    }

    inline void checkpalindrome() {
        int temp = num, reversed = 0, digit;

        while (temp > 0) {
            digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }

        if (num == reversed)
            cout << num << " is a palindrome." << endl;
        else
            cout << num << " is not a palindrome." << endl;
    }
};

int main() {
    palindrome p;
    p.inputnumber();
    p.checkpalindrome();

    return 0;
}