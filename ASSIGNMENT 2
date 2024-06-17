#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int numClassmates;

    // Get the number of classmates from the user
    cout << "Enter the number of classmates: ";
    cin >> numClassmates;

    // Validate input (optional, but recommended)
    if (numClassmates <= 0) {
        cout << "Error: Please enter a positive number of classmates." << endl;
        return 1; // Indicate error
    }

    // Create vectors to store ages, marks, concatenations, and products
    vector<int> ages(numClassmates);
    vector<int> marks(numClassmates);
    vector<string> ageMarkConcat(numClassmates);
    vector<int> product(numClassmates);

    // Get ages and marks for each classmate
    cout << "Enter the ages and marks of each classmate (age mark):\n";
    for (int i = 0; i < numClassmates; ++i) {
        cin >> ages[i] >> marks[i];
    }

    // Concatenate ages and marks (using stringstream for efficiency)
    for (int i = 0; i < numClassmates; ++i) {
        stringstream ss;
        ss << ages[i] << marks[i];
        ageMarkConcat[i] = ss.str();
    }

    // Calculate product of ages and marks
    for (int i = 0; i < numClassmates; ++i) {
        product[i] = ages[i] * marks[i];
    }

    // Output concatenation of ages and marks
    cout << "\nConcatenation of Ages and Marks:\n";
    for (int i = 0; i < numClassmates; ++i) {
        cout << ageMarkConcat[i] << endl;
    }

    // Output product of ages and marks
    cout << "\nProduct of Ages and Marks:\n";
    for (int i = 0; i < numClassmates; ++i) {
        cout << product[i] << endl;
    }

    return 0; // Indicate successful execution
}