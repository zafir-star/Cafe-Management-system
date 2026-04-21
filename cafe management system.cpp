#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main() {
    // Defining the menu using a map (similar to a Python dictionary)
    map<string, int> menu = {
        {"Pizza", 60},
        {"Pasta", 40},
        {"Burger", 30},
        {"Momos", 90},
        {"Coffee", 20},
        {"Salad", 10}
    };

    cout << "--- Welcome to My Restaurant ---" << endl;
    cout << "Pizza: 60tk\nPasta: 40tk\nBurger: 30tk\nMomos: 90tk\nCoffee: 20tk\nSalad: 10tk" << endl;

    int order_total = 0;
    string item_1;

    cout << "\nEnter the name of the item you want: ";
    cin >> item_1;

    // In C++, we check if a key exists using the .count() or .find() method
    if (menu.count(item_1)) {
        order_total += menu[item_1];
        cout << "Your item " << item_1 << " has been added to your cart." << endl;
    } else {
        cout << "Item is not available." << endl;
    }

    string another_order;
    cout << "\nDo you want to add another item? (yes/no): ";
    cin >> another_order;

    if (another_order == "yes" || another_order == "Yes") {
        string item_2;
        cout << "Enter the name of the second item: ";
        cin >> item_2;

        if (menu.count(item_2)) {
            order_total += menu[item_2];
            cout << "Your item " << item_2 << " has been added to your cart." << endl;
        } else {
            cout << "Item is not available." << endl;
        }
    }

    cout << "\nThe total amount to pay is: " << order_total << "tk" << endl;
    cout << "Thank you for visiting!" << endl;

    return 0;
}