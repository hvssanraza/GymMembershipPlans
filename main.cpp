#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "---Gym Membership Plans---" << endl;
    cout << "Available Membership Plans: " << endl;
    cout << "1: Basic Plan - $30/month" << endl;
    cout << "2: Standard Plan - $50/month" << endl;
    cout << "3: Premium Plan - $70/month" << endl;
    cout << "4: VIP Plan - $100/month" << endl;
    cout << endl;

    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "You have selected: Basic Plan" << endl;
        cout << "Cost: $30/month" << endl;
        break;
        case 2:
            cout << "You have selected: Standard Plan" << endl;
        cout << "Cost: $50/month" << endl;
        break;
        case 3:
            cout << "You have selected: Premium Plan" << endl;
        cout << "Cost: $70/month" << endl;
        break;
        case 4:
            cout << "You have selected: VIP Plan" << endl;
        cout << "Cost: $100/month" << endl;
        break;
        default:
            cout << "Invalid choice! Please select a valid plan (1-4)." << endl;
        break;
    }

    return 0;
}
