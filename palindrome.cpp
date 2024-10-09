#include <iostream>
using namespace std;

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    int original = num;  // Store the original number
    int reversed = 0;    // To store the reversed number
    int remainder;

    while (num > 0) {
        remainder = num % 10;          // Get the last digit
        reversed = reversed * 10 + remainder;  // Append digit to reversed number
        num /= 10;                     // Remove the last digit from num
    }

    // If original number and reversed number are the same, it's a palindrome
    return (original == reversed);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num)) {
        cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }

    return 0;
}
