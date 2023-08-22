#include <iostream>
#include <algorithm> // Include this header for the reverse function
using namespace std;

string reverseStringWordWise(string input)
{
    reverse(input.begin(), input.end()); // Reverse the entire string
    int start = 0;
    for (int i = 0; i <= input.length(); i++) {
        if (i == input.length() || input[i] == ' ') {
            reverse(input.begin() + start, input.begin() + i); // Reverse each word
            start = i + 1; // Move the start index to the next word
        }
    }
    return input; // Return the modified string
}
int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}
