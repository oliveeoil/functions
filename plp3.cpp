#include <iostream>
#include <sstream> 
#include <vector> 
using namespace std;

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}


int main() {
    int num1;
    cout << "Enter a number: ";
    cin >> num1;
    cout << "You entered: " << num1 << endl;
    
    int num2; 
    cout << "Enter a number: "; 
    cin >> num2; 
    cout << "You entered: " << num2 <<endl;
    
    int sum = num1 * num2;
    cout << "Your sum is " <<sum << endl;
    
    int num3;
    cout << "Enter a positive integer: ";
    cin >> num3;
    cout << "Your factorial for " << num3 << " is " << factorial(num3) << endl;
    
    std::string exString = "hello_world!";
    std::cout << exString << std::endl;
    
    std::stringstream ss(exString);
    std::string token;
    std::vector<std::string> tokens;
    char delimiter = '_';

    while (std::getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }

    for (const auto& part : tokens) {
        std::cout << part << std::endl;
    }

    
    return 0;
}