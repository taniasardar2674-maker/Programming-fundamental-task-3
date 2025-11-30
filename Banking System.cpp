#include <iostream>
using namespace std;

int main() {

    double balance;
    int loyal;  // 1 = loyal, 0 = not loyal

    cout << "Enter account balance: ";
    cin >> balance;

    cout << "Are you a loyal customer (1 for Yes, 0 for No)? ";
    cin >> loyal;

    // Account Type
    string accountType = (balance < 100) ? "Low Balance Account" :
                         (balance <= 500) ? "Standard Account" :
                         "Premium Account";

    // Special Offer Eligibility
    string offer = ( (balance > 200) && (loyal == 1) ) ?
                   "Eligible for Special Offer" :
                   "Not Eligible for Special Offer";

    cout << "Account Type: " << accountType << endl;
    cout << "Special Offer Status: " << offer << endl;

    return 0;
}
