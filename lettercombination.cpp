#include <iostream>
#include <vector>
#include <string>

using namespace std;

const vector<string> digitToLetters = {
    "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
};

void generateCombinations(const string& digits, int index, string current, vector<string>& result) {
    if (index == digits.length()) {
        result.push_back(current);
        return;
    }

    int digit = digits[index] - '0';
    const string& letters = digitToLetters[digit];
    for (char letter : letters) {
        generateCombinations(digits, index + 1, current + letter, result);
    }
}

vector<string> letterCombinations(const string& digits) {
    vector<string> result;
    if (digits.empty()) {
        return result;
    }
    generateCombinations(digits, 0, "", result);
    return result;
}

int main() {
    string phoneNumber;
    cout << "Enter a phone number: ";
    cin >> phoneNumber;

    vector<string> combinations = letterCombinations(phoneNumber);

    cout << "Letter combinations of the phone number are: ";
    for (const auto& combination : combinations) {
        cout << combination << " ";
    }
    cout << endl;

    return 0;
}

