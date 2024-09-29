// C++ Program Example: switch case statement


#include <iostream>
using namespace std;

class Solution {
    public:
        void checkVowel();
};

void Solution::checkVowel() {
    char ch = 'a';

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << ch << " is a vowel" << endl;
            break;
        default:
            cout << ch << " is a consonant" << endl;
    }
}

int main() {
    Solution solution;
    solution.checkVowel();
    return 0;
}
