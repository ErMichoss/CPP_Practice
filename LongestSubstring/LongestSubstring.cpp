#include <string>
#include <unordered_set>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        std::unordered_set<char> chars; // Para guardar los caracteres únicos de la ventana actual.
        int left = 0, right = 0; // Extremos de la ventana deslizante (left = inicio, right = final)
        int maxLen = 0;

        while (right < s.size()) {
            if (chars.find(s[right]) == chars.end()) {
                chars.insert(s[right]);
                maxLen = std::max(maxLen, right - left + 1);
                right++;
            } else {
                chars.erase(s[left]);
                left++;
            }
        }

        return maxLen;
    }
};
