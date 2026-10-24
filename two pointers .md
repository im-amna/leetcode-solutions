# Two Pointers — Complexity Notes

This file contains the time and space complexity of the 14 problems I practised.

The explanations are kept simple so I can easily explain my solutions to my mentor.

---

# Array Problems

## 1. 1. Two Sum

**Approach:** Two Pointers

### Time Complexity: O(n log n)

I sort the numbers first and then use two pointers to find the pair that adds up to the target. Sorting takes O(n log n) time.

### Space Complexity: O(n)

I store the original indices with the numbers so I can return the correct indices after sorting.

**Explanation:**

> I sort the numbers and use two pointers to find the target sum. I also keep the original indices because the answer needs the indices from the original array.

**Note:** My earlier hash map solution has O(n) average time and O(n) space. The two-pointer version needs sorting.

---

## 2. 88. Merge Sorted Array

**Approach:** Two Pointers

### Time Complexity: O(m + n)

I compare values from the ends of both arrays and place the larger value at the end of the first array. Each value is processed once.

### Space Complexity: O(1)

I modify the first array directly, so I do not need another array.

**Explanation:**

> I start from the end so I don't overwrite the values I still need. I compare the values and put the larger one in the correct position.

---

## 3. 2570. Merge Two 2D Arrays by Summing Values

**Approach:** Two Pointers

### Time Complexity: O(n + m)

I go through both arrays using two pointers. If the IDs match, I add their values. Otherwise, I take the smaller ID first.

### Space Complexity: O(n + m)

I create a new array to store the merged result.

**Explanation:**

> Both arrays are sorted by ID, so I can compare their IDs and merge them in one pass instead of searching for every ID separately.

---

## 4. 905. Sort Array By Parity

**Approach:** Two Pointers

### Time Complexity: O(n)

One pointer starts at the beginning and the other at the end. I move them and swap values when an odd number is on the left and an even number is on the right.

### Space Complexity: O(1)

I rearrange the values in the same array without creating another array.

**Explanation:**

> I move even numbers towards the beginning and odd numbers towards the end by swapping values when needed.

---

## 5. 922. Sort Array By Parity II

**Approach:** Two Pointers

### Time Complexity: O(n)

I check the even and odd indices and move the pointers to find values that are in the wrong positions.

### Space Complexity: O(1)

I swap values directly in the input array.

**Explanation:**

> Even numbers should be at even indices and odd numbers should be at odd indices. I swap the values that are in the wrong positions.

---

## 6. 2161. Partition Array According to Given Pivot

**Approach:** Three Passes

### Time Complexity: O(n)

I go through the array to collect numbers smaller than the pivot, equal to the pivot, and greater than the pivot.

### Space Complexity: O(n)

I create a new result array to store the numbers in the required order.

**Explanation:**

> I use three passes to put smaller numbers first, pivot values in the middle, and greater numbers at the end.

---

## 7. 189. Rotate Array

**Approach:** Reversal Algorithm

### Time Complexity: O(n)

I reverse the whole array, then reverse the first `k` elements and the remaining elements. Each reversal takes linear time.

### Space Complexity: O(1)

I reverse the array in-place without creating another array.

**Explanation:**

> Instead of moving every element one by one, I use three reversals to rotate the array using constant extra space.

---

## 8. 15. 3Sum

**Approach:** Sorting + Two Pointers

### Time Complexity: O(n²)

I sort the array, fix one number, and use two pointers to find the other two numbers. The two-pointer search takes O(n) for each fixed number.

### Space Complexity: O(log n) auxiliary space for sorting in typical implementations

The extra space used by sorting depends on the language and implementation. The space used for storing the answer is not included here.

**Explanation:**

> I fix one number and use two pointers to find two other numbers that make the total zero. I skip duplicate values so I don't add the same triplet more than once.

---

# String Problems

## 9. 125. Valid Palindrome

**Approach:** Two Pointers

### Time Complexity: O(n)

I compare characters from both ends and skip non-alphanumeric characters. Each character is checked at most a small number of times.

### Space Complexity: O(1)

I only use two pointers and do not create another string.

**Explanation:**

> I compare characters from both ends while ignoring spaces, symbols, and letter case. If the characters match, I continue moving towards the middle.

---

## 10. 680. Valid Palindrome II

**Approach:** Two Pointers

### Time Complexity: O(n)

I compare characters from both ends. If I find a mismatch, I check whether skipping either one of the two characters makes the remaining string a palindrome.

### Space Complexity: O(1)

I use pointers to check the remaining parts without creating another string.

**Explanation:**

> If two characters don't match, I try skipping the left character or the right character. If either option gives a palindrome, the answer is true.

---

## 11. 345. Reverse Vowels of a String

**Approach:** Two Pointers

### Time Complexity: O(n)

I move two pointers from opposite ends until they find vowels, then swap those vowels.

### Space Complexity: O(n)

In C++, I usually create a mutable copy of the input string to swap the vowels. This copy takes O(n) space.

**Explanation:**

> I find vowels from both ends and swap them. The other characters stay in their original positions.

---

## 12. 2000. Reverse Prefix of Word

**Approach:** Find and Reverse

### Time Complexity: O(n)

I find the first occurrence of the given character and reverse the prefix up to that position.

### Space Complexity: O(n)

If I create a copy of the word to return the modified string, that copy takes O(n) space.

**Explanation:**

> I find the first matching character and reverse the word from the beginning up to that character.

---

## 13. 1768. Merge Strings Alternately

**Approach:** Two Pointers

### Time Complexity: O(n + m)

I take characters alternately from both strings and then add any remaining characters. Each character is processed once.

### Space Complexity: O(n + m)

I create a new string containing all characters from both input strings.

**Explanation:**

> I scan both strings and add their characters alternately. If one string finishes first, I add the remaining characters from the other string.

---

## 14. 1754. Largest Merge of Two Strings

**Approach:** Greedy + Two Pointers

### Time Complexity: O((n + m)²) in my current approach

I compare the remaining parts of both strings at each step. These comparisons can take longer when many characters are the same, so the total time can become quadratic.

### Space Complexity: O(n + m)

The result contains all characters from both strings. Creating temporary substrings during comparisons can also use extra memory.

**Explanation:**

> I compare the remaining parts of both strings, not just their current characters. I take the next character from the lexicographically larger remaining part to try to make the largest possible merge.



# What I Learned About Complexity

I learned that:

- **O(1)** means the extra working space or number of operations stays constant.
- **O(n)** means the work grows with the input size.
- **O(n + m)** is used when we process two inputs.
- Two pointers can help avoid checking every possible pair.
- Sorting can help make a two-pointer solution possible, but sorting also takes time.
- Skipping duplicates is important in problems like 3Sum.
- In-place solutions usually need less extra space than solutions that create a new array.
- Comparing whole suffixes repeatedly can take more time than comparing individual characters.

If I need to explain my overall learning:

> I practised using two pointers from both ends and moving pointers through arrays and strings. I learned how this approach can reduce unnecessary work, how sorting helps with problems like 3Sum, and why I need to consider both time and space complexity when choosing a solution.
