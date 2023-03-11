# super-duper-octo-umbrella
Credit card validator app created with C++

## Description
Compile and run ```main.cpp``` and enter a [Test credit card numbers](https://www.paypalobjects.com/en_AU/vhelp/paypalmanager_help/credit_card_numbers.htm). 

## Method
Luhn Algorithm:
1. Double every second digit from right to left. (If doubled number is 2 digits, split them)
2. Add all single digits from step 1
3. Add all odd numbered digits from right to left
4. Sum results from steps 2 & 3
5. If step 4 is divisible by 10, # is valid