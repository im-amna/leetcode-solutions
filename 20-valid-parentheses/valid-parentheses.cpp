class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char ch : s) {

            // Opening brackets
            if (ch == '(' || ch == '[' || ch == '{') {
                st.push(ch);
            }
            else {
                // Agar closing bracket aya aur stack empty hai
                if (st.empty()) {
                    return false;
                }

                // Top bracket check karo
                if ((ch == ')' && st.top() != '(') ||
                    (ch == ']' && st.top() != '[') ||
                    (ch == '}' && st.top() != '{')) {
                    return false;
                }

                st.pop();
            }
        }

        // Agar stack empty hai, sab brackets properly match hue
        return st.empty();
    }
};