# Strings — Complexity Notes

This file contains the time and space complexity of the 7 string problems I solved.

The explanations are kept simple so I can easily explain them to my mentor.

---

## 1. 344. Reverse String

**Approach:** Two Pointers

### Time Complexity: O(n)

We use two pointers, one at the beginning and one at the end of the string.  
They move towards the middle, so we process the characters once.

### Space Complexity: O(1)

The string is modified in-place, so we don't create another string or array.

**Easy explanation:**

> I use two pointers and swap the characters from both ends. Since I don't use extra memory, the space complexity is O(1).

---

## 2. 1768. Merge Strings Alternately

**Approach:** Two Pointers
### Time Complexity: O(n + m)

We go through both strings and add their characters to the result.  
So the total work depends on the lengths of both strings.

### Space Complexity: O(n + m)

We create a new result string containing all characters from both input strings.

**Easy explanation:**

> I scan both strings once and build a new string, so the time is O(n + m) and the result itself needs O(n + m) space.

---

## 3. 3. Longest Substring Without Repeating Characters

**Approach:** Sliding Window + Hash Map

### Time Complexity: O(n)

I use two pointers, `left` and `right`, to maintain a sliding window.  
Each character is processed efficiently without repeatedly scanning the whole string.

### Space Complexity: O(n)

The Hash Map stores characters and their positions.  
In the worst case, it can store many different characters.

**Easy explanation:**

> I use a sliding window to avoid checking every possible substring. The Hash Map helps me quickly find duplicate characters.

---
## 4. 13. Roman to Integer

**Approach:** Hash Map

### Time Complexity: O(n)

I scan the Roman numeral string once and check the value of each character.

### Space Complexity: O(1)

There are only seven possible Roman symbols:

`I, V, X, L, C, D, M`

So the Hash Map has a fixed size.

**Easy explanation:**

> I go through the Roman string once. Since there are only seven Roman symbols, the extra space stays constant.

---

## 5. 12. Integer to Roman

**Approach:** Greedy

### Time Complexity: O(1)

The input is limited to `1–3999`, and the list of Roman values is fixed.  
Therefore, the number of operations is bounded.

### Space Complexity: O(1)

The list of Roman values is fixed.  

The output string is not counted as extra working space.

**Easy explanation:**

> I process the fixed Roman values from largest to smallest. Since the input range is fixed, the complexity is effectively O(1).

---

## 6. 20. Valid Parentheses

**Approach:** Stack

### Time Complexity: O(n)

I scan the string once.  
Each bracket is pushed into or removed from the stack at most once.

### Space Complexity: O(n)

In the worst case, all characters can be opening brackets, so they may all be stored in the stack.

**Easy explanation:**

> I use a stack to keep track of opening brackets. Each bracket is processed once, so the time is O(n).

---

## 7. 392. Is Subsequence

**Approach:** Two Pointers

### Time Complexity: O(n)

I scan through the string `t` once and move the pointer in `s` whenever a character matches.

### Space Complexity: O(1)
I only use a pointer and don't create any extra data structure.

**Easy explanation:**

> I scan the bigger string and move the pointer in the smaller string when characters match. No extra data structure is needed.

---

# Quick Revision

| Problem | Approach | Time | Space |
|---|---|---:|---:|
| Reverse String | Two Pointers | O(n) | O(1) |
| Merge Strings Alternately | Two Pointers | O(n + m) | O(n + m) |
| Longest Substring | Sliding Window + Hash Map | O(n) | O(n) |
| Roman to Integer | Hash Map | O(n) | O(1) |
| Integer to Roman | Greedy | O(1) | O(1) |
| Valid Parentheses | Stack | O(n) | O(n) |
| Is Subsequence | Two Pointers | O(n) | O(1) |

---

# What I Learned About Complexity

I learned that:

- **O(1)** means the extra work or memory stays constant.
- **O(n)** means the work grows with the input size.
- **O(n + m)** is used when we process two different inputs.
- Two pointers can help avoid unnecessary nested loops.
- Hash Maps and Stacks can make solutions easier, but they may require extra space.
- Space complexity can sometimes be O(1) even when the output itself is large, because the output is not counted as auxiliary space.
- 

If I need to explain my overall learning:

> "For these string problems, I mostly used O(n) solutions. I learned how two pointers can make string scanning efficient, how Sliding Window helps with substring problems, and how Stack is useful for matching brackets. I also started paying attention to both time and space complexity when choosing an approach."
