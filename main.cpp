#include <iostream>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main()
{
    
    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card #: ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if (result % 10 == 0) {
        std::cout << cardNumber << " is valid" << std::endl;
    }
    else {
        std::cout << cardNumber << " is not valid" << std::endl;
    }

    return 0;
}

// passing in an integer, if
int getDigit(const int number)
{
    return number % 10 + (number / 10 % 10);
}

int sumOddDigits(const std::string cardNumber)
{
    int sum = 0;

    for(int i = cardNumber.size() -1; i >= 0; i -= 2) {
        // cardNumber is being passed in as a string so we can iterate over it 
        // when we pass the string into getDigit it is expecting an int so it will convert the string to the ascii number
        // we are subtracting cardNumber[i] by the ascii number of '0', which is 48. Please look up ascii table for futher clarification
        sum += cardNumber[i] - '0'; 
    }

    return sum;
}

int sumEvenDigits(const std::string cardNumber)
{
    int sum = 0;

    for(int i = cardNumber.size() -2; i >= 0; i -= 2) {
        // cardNumber is being passed in as a string so we can iterate over it 
        // when we pass the string into getDigit it is expecting an int so it will convert the string to the ascii number
        // we are subtracting cardNumber[i] by the ascii number of '0', which is 48. Please look up ascii table for futher clarification
        sum += getDigit((cardNumber[i] - '0') * 2); 
    }

    return sum;
}