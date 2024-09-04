#include <iostream>
#include <iomanip>

int main() 

{
    // Welcome prompt
    std::cout << "Welcome to the Ounce Conversion Program!\n";

    // Ask the user for input
    int total_ounces;
    std::cout << "How many ounces do you have? ";
    std::cin >> total_ounces;

    // flash text
    std::cout << "Thank you! Converting ounces to pounds.\n";

    // Convert ounces to pounds and remaining ounces
    int pounds = total_ounces / 16;
    int ounces = total_ounces % 16;

    // Convert ounces to pounds
    double decimal_pounds = static_cast<double>(total_ounces) / 16;

    // shows user results
    std::cout << total_ounces << " oz is equivalent to " 
              << pounds << " lbs and " << ounces << " oz.\n";
    std::cout << total_ounces << " oz is equivalent to " 
              << std::fixed << std::setprecision(3) << decimal_pounds << " lbs.\n";

    // Exit message
    std::cout << "Thank you for using the OCP!\n";

    return 0;
}
