#include <iostream>

using namespace std;


int theResult(int a, int b, char c) {
    int result = 0;

    if (c == '+') {
        result = a + b;
    }
    else if (c == '-') {
        result = a - b;
    }
    else if (c == '*') {
        result = a * b;
    }
    else if (c == '/') {
        result = a / b;
    }

    return result;
}

int configere(char command) {

    if (command == '1') {
        return 1;
    }
    else if (command == '2') {
        return 2;
    }
    else if (command == '3') {
        return 3;
    }
    else {
        return 0;
    }
}


int main() {
    // Calculator

    int a, bl, result;
    char c, command;
    bool b = true;

    while (b) {

        cout << "Enter the first value: \n";
        cin >> a;

        cout << "Enter the operation: \n";
        cin >> c;

        cout << "Enter the second value: \n";
        cin >> bl;

        result = theResult(a, bl, c);

        if (result != 0) {
            cout << "Result: \n" << result << "\n\n";
        }
        else {
            cout << "The wrong operator was entered\n";
        }

        cout << "For \nContinue - 1\nDelete - 2\nClose - 3\nYour answer:\n";
        cin >> command;

        int comResult = configere(command);


        if (comResult == 1) {
            b = true;
        }
        else if (comResult == 2) {
            system("cls");
        }
        else if (comResult == 3) {
            b = false;
        }
        else {
            b = true;
        }
    }




    return 0;
}
