class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> freq(128, 0);

        // Count characters required from t
        for (char c : t) {
            freq[c]++;
        }

        int left = 0;
        int required = t.size();

        int minLength = INT_MAX;
        int start = 0;

        for (int right = 0; right < s.size(); right++) {

            // If this character is needed
            if (freq[s[right]] > 0) {
                required--;
            }

            freq[s[right]]--;

            // Window contains all characters of t
            while (required == 0) {

                // Update minimum window
                if (right - left + 1 < minLength) {
                    minLength = right - left + 1;
                    start = left;
                }

                // Remove left character
                freq[s[left]]++;

                if (freq[s[left]] > 0) {
                    required++;
                }

                left++;
            }
        }

        if (minLength == INT_MAX) {
            return "";
        }

        return s.substr(start, minLength);
    }
};