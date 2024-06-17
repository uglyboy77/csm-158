#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Constants
    const double REGULAR_RATE = 5.0;
    const double OVERTIME_MULTIPLIER = 1.5;
    const double INCOME_TAX_RATE = 0.15;
    const double HEALTH_LEVY_RATE = 0.025;
    const double DISTRICT_TAX_RATE = 0.01;
    const double EDUCATION_FUND_PER_CHILD = 0.50;
    const int REGULAR_HOURS = 40;
    
    // Input variables
    double hoursWorked;
    int numChildren;
    
    // Input employee details
    cout << "Enter hours worked: ";
    cin >> hoursWorked;
    cout << "Enter number of children: ";
    cin >> numChildren;
    
    // Calculate gross pay
    double grossPay;
    if (hoursWorked <= REGULAR_HOURS) {
        grossPay = hoursWorked * REGULAR_RATE;
    } else {
        double overtimeHours = hoursWorked - REGULAR_HOURS;
        grossPay = (REGULAR_HOURS * REGULAR_RATE) + (overtimeHours * REGULAR_RATE * OVERTIME_MULTIPLIER);
    }
    
    // Calculate deductions
    double incomeTax = grossPay * INCOME_TAX_RATE;
    double healthLevy = grossPay * HEALTH_LEVY_RATE;
    double districtTax = grossPay * DISTRICT_TAX_RATE;
    
    double educationFund = 0;
    if (numChildren > 3) {
        educationFund = (numChildren - 3) * EDUCATION_FUND_PER_CHILD;
    }
    
    double totalDeductions = incomeTax + healthLevy + districtTax + educationFund;
    
    // Calculate net pay
    double netPay = grossPay - totalDeductions;
    
    // Display results
    cout << fixed << setprecision(2);
    cout << "Gross Pay: " << grossPay << " cedis" << endl;
    cout << "Income Tax: " << incomeTax << " cedis" << endl;
    cout << "Health Levy: " << healthLevy << " cedis" << endl;
    cout << "District Tax: " << districtTax << " cedis" << endl;
    cout << "Education Fund: " << educationFund << " cedis" << endl;
    cout << "Total Deductions: " << totalDeductions << " cedis" << endl;
    cout << "Net Pay: " << netPay << " cedis" << endl;
    

    return 0;
}