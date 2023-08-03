 //Loop Do While - Cálculo de fatorial:
#include <iostream>
using namespace std;

int main() {
    int num = 5;
    int factorial = 1;
    int i = 0;
    do {
        i++;
        factorial *= i;
    } while (i < num); // loop encerra quando chegar em num
    cout << "O fatorial de " << num << " é " << factorial << endl;

    return 0;
}
