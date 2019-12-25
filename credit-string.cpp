#include <iostream>
using namespace std;

int main() {
    cout << "請輸入卡號:";

    string number; //number 卡號
    cin >> number;

    int i;
    int evenSum = 0;
    int oddSum = 0;
    int sum = 0;
    int even;
    
    bool mastercardHead = 0;
    bool americanExpressHead = 0;
    bool visaHead = 0;
    
    int answer = oddSum + evenSum;

    for (i = 0; number[i] != '\0'; i++) {
    } 
    int length = number[i] - '0'; //幾個數字
    while (length > 0) {
        i++;
        int now = length % 10;

        if (even) {
            now *= 2;
            evenSum += (now % 10) + (now / 10);
        } else {
            oddSum += now;
        }
        
        length /= 10;

        
        if (length >= 10 && length <= 99) {
            if (length >= 40 && length <= 49) {
                visaHead = true;
            } else if (length >= 51 && length <= 55) {
                mastercardHead = true;
            } else if (length == 34 || length == 37) {
                americanExpressHead = true;
            }
        }
    }

    if (answer % 10 != 0) {
        cout << "無效卡號";
    } else if (visaHead && (i == 13 || i == 16)) {
        cout << "VISA";
    } else if (mastercardHead && i == 16) {
        cout << "MasterCard";
    } else if (americanExpressHead && i == 15) {
        cout << "American Express";
    }  
    return 0;
}
