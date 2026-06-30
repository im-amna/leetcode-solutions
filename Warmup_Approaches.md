# LeetCode Warm-up Approaches

## 1. Running Sum of 1D Array

### Why this approach?
Each element depends on the sum of all previous elements. Instead of creating another array, I updated the existing array by adding the previous cumulative sum to the current element. This reduces extra memory usage.

### Time Complexity: O(n)
The array is traversed only once from left to right.

### Space Complexity: O(1)
No extra array is created. The input array is modified in place.

---

## 2. Find the Highest Altitude

### Why this approach?
The biker starts at altitude 0. After every gain, I update the current altitude and keep track of the maximum altitude reached. This avoids storing all altitudes in another array.

### Time Complexity: O(n)
Each gain value is processed exactly once.

### Space Complexity: O(1)
Only two variables (current altitude and maximum altitude) are used.

---

## 3. Squares of a Sorted Array

### Why this approach?
The largest square will always come from either the leftmost negative number or the rightmost positive number. Using two pointers avoids sorting after squaring, giving a more efficient solution.

### Time Complexity: O(n)
Each element is visited only once.

### Space Complexity: O(n)
A new result array is created to store the sorted squares.

---

## 4. Move Zeroes

### Why this approach?
Two pointers are used to move non-zero elements to the front while preserving their relative order. This satisfies the in-place requirement without creating another array.

### Time Complexity: O(n)
The array is traversed only once.

### Space Complexity: O(1)
No extra array is used.

---

## 5. Jewels and Stones

### Why this approach?
I stored all jewels in an unordered_set because it provides average O(1) lookup. Then I checked each stone to see whether it exists in the set.

### Time Complexity: O(n + m)
Building the set takes O(n), where n is the number of jewels. Checking all stones takes O(m), where m is the number of stones.

### Space Complexity: O(n)
The unordered_set stores all jewel characters.

---

## 6. Fizz Buzz

### Why this approach?
The problem only requires checking divisibility conditions for every number from 1 to n. A simple loop with if-else conditions is the most efficient solution.

### Time Complexity: O(n)
Each number is checked exactly once.

### Space Complexity: O(n)
The answer vector stores n strings.

---

## 7. Valid Anagram

### Why this approach?
I first checked if both strings have the same length. If the lengths are different, they cannot be anagrams. Then I sorted both strings alphabetically and compared them. If both sorted strings are equal, it means they contain the same characters with the same frequencies, so they are anagrams.

### Time Complexity: O(n log n)
Sorting each string takes O(n log n) time. Comparing the two sorted strings takes O(n), so the overall time complexity is O(n log n).

### Space Complexity: O(1)
No additional data structure is used. The solution only sorts and compares the given strings.

---

## 8. Reverse Vowels of a String

### Why this approach?
The vowels that need to be swapped are located at both ends of the string. Using two pointers allows swapping them efficiently without creating another string.

### Time Complexity: O(n)
Each character is visited at most once.

### Space Complexity: O(1)
The string is modified in place without extra memory.

---

## 9. Valid Palindrome

### Why this approach?
Two pointers compare characters from both ends while skipping non-alphanumeric characters. This avoids creating a cleaned string and makes the solution more memory efficient.

### Time Complexity: O(n)
Each character is processed at most once.

### Space Complexity: O(1)
Only two pointers are used; no additional string is created.

---

# Patterns Learned

- Prefix Sum
- Two Pointers
- Hashing
- Frequency Array
- Simulation

# Total Problems Solved

✅ 9 / 9
