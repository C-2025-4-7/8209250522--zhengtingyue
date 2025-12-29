#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
bool is_prime(int num);

int main() {
    int count = 0;
    int num = 2;
    int primes[200]; 
    while (count < 200) {
        if (is_prime(num)) {
            primes[count] = num;
            count++;
        }
        num++;
    }
    cout << "Ç°200¸öËØÊý:" << endl;
    for (int i = 0; i < 200; i++) {
        cout << setw(8) << primes[i];
        if ((i + 1) % 10 == 0) {
            cout << endl;
        }
    }

    return 0;
}
bool is_prime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}