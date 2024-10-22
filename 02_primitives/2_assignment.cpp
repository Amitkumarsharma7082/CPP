#include <iostream>
#include <string>
using namespace std;

int main() {
    string teaPriceStr;
    double teaPrice;
    double bestPrice;
    double price;

    cout << "Best Price of tea: " << endl;
    getline(cin, teaPriceStr);

    // Convert the string to a double
    teaPrice = stod(teaPriceStr); // Use stod to convert string to double
    bestPrice = 0.10 * teaPrice; // Calculate 10% of teaPrice
    price = teaPrice - bestPrice;

    cout << "Price: " << teaPrice << " Best Price: " << price << endl;

    return 0;
}
