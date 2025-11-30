#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    string result = (num % 2 == 0) ? 
                    "The number " + to_string(num) + " is even" :
                    "The number " + to_string(num) + " is odd";

    cout << result;
}
