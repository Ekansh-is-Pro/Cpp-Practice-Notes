#include <iostream>

using namespace std;

/*
Luhn Algorithm = 1. Double every second digit from right to left
                    If doubled number is 2 digits, split them
                 2. Add all single digits from step 1
                 3. Add all odd numbered digits from right to left
                 4. Sum results from step 2 & 3.
                 5. If Step 4 is divisible by 10, number is valid.
*/

int getDigit(const int number);
int sumOddDigit(const string cardNumber);
int sumEvenDigit(const string cardNumber);

int main(){
    cout << "\033[2J\033[1;1H";
    string cardNumber;
    int result = 0;

    cout << "Enter a credit card number : " << endl;
    cin >> cardNumber;
    result = sumEvenDigit(cardNumber) + sumOddDigit(cardNumber);
    if(result % 10 == 0){
        cout << "Card number is valid!" << endl;
    }
    else{
        cout << "Card number is not valid" << endl;
    }
    return 0;
}

int getDigit(const int number){
    return number % 10 + (number / 10 % 10);
}
int sumOddDigit(const string cardNumber){
    int sum = 0;
    for(int i = cardNumber.size() - 1; i >=0; i-=2){
        sum += (cardNumber[i] - '0');
    }
    return sum;
}
int sumEvenDigit(const string cardNumber){
    int sum = 0;
    for(int i = cardNumber.size() - 2; i >=0; i-=2){
        sum += getDigit((cardNumber[i] - '0') * 2);
    }
    return sum;
}