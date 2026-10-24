
class Solution {
public:
    string largestMerge(string word1, string word2) {
        int i = 0;
        int j = 0;
        string merge = "";

        while (i < word1.size() && j < word2.size()) {
            if (word1.substr(i) >= word2.substr(j)) {
                merge += word1[i];
                i++;
            }
            else {
                merge += word2[j];
                j++;
            }
        }

        while (i < word1.size()) {
            merge += word1[i];
            i++;
        }

        while (j < word2.size()) {
            merge += word2[j];
            j++;
        }

        return merge;
    }
};
