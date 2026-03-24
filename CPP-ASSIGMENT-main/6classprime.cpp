#include <iostream>
using namespace std;

class prime {
public:
    bool isprime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    prime p;
    int num;
    cout << "enter a number: ";
    cin >> num;
    if (p.isprime(num))
        cout << num << " is a prime number" << endl;
    else
        cout << num << " is not a prime number" << endl;
    return 0;
}