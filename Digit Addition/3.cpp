#include<iostream>
using namespace std;

int main(){
    int num, lastDigit, firstDigit;

    cout << "Enter a number: ";
    cin >> num;

    lastDigit = num % 10;

    while(num != 0){
        firstDigit = num % 10;
        num /= 10;
    }

    cout << firstDigit + lastDigit;

    return 0;
}