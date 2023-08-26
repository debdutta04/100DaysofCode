#include <bits/stdc++.h>
using namespace std;

char firstNonRepeatingCharacter(string str) {
   // Create a vector to store the frequency of characters. We use 128 as the size
   // to cover the ASCII character set, where each index represents a character's ASCII value.
   vector<int> hash(128, 0);

   // Iterate through each character in the input string.
   for (auto &it : str) {
      // Increment the count of the current character in the hash vector.
      hash[it]++;
   }

   // Iterate through the input string again.
   for (int i = 0; i < str.size(); i++) {
      // Check if the frequency of the current character is 1.
      // If yes, it means this is the first non-repeating character, so return it.
      if (hash[str[i]] == 1)
         return str[i];
   }

   // If no non-repeating character is found, return the first character of the input string.
   return str[0];
}
