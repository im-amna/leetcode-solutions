
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int right = word.find(ch);

        if (right == string::npos) {
            return word;
        }

        int left = 0;

        while (left < right) {
            swap(word[left], word[right]);
            left++;
            right--;
        }

        return word;
    }
};
