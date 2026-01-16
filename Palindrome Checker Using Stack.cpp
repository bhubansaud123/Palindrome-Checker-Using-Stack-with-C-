#include <iostream>
#include <stack>
using namespace std;

class PalindromeChecker {
public:
    bool isPalindrome(string s) {
        stack<char> st;
        for (char c : s) st.push(c);

        for (char c : s) {
            if (c != st.top())
                return false;
            st.pop();
        }
        return true;
    }
};

int main() {
    PalindromeChecker p;
    string word;
    cout << "Enter word: ";
    cin >> word;

    if (p.isPalindrome(word))
        cout << "Palindrome\n";
    else
        cout << "Not Palindrome\n";
    return 0;
}
