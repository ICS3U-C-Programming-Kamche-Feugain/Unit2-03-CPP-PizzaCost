#include <iostream>
using namespace std;
float round(float var) {
    // we use array of chars to store number
    // as a string.
    char str[40];

    // Print in string the value of var
    // with two decimal point
    sprintf(str, "%.2f", var);

    // scan string value in var
    sscanf(str, "%f", &var);

    return var;
}

int main() {
    float var = 37.66666;
    cout << round(var);
    return 0;
}