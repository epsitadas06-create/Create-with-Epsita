#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false; // 0 and 1 are not prime numbers
    if (n == 2)
        return true;  // 2 is the only even prime number
    if (n % 2 == 0)
        return false; // eliminate even numbers greater than 2

    // Check for factors from 3 to sqrt(n)
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number))
        cout << number << " is a prime number." << endl;
    else
        cout << number << " is not a prime number." << endl;

    return 0;
}
