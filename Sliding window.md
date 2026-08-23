LeetCode Sliding Window Solutions

This repository contains C++ solutions for common Sliding Window problems from LeetCode.

Problems

643. Maximum Average Subarray I

Difficulty: Easy

Approach: Sliding Window

Time Complexity: O(n)

Space Complexity: O(1)

Idea: Calculate the sum of the first k elements, then move the window one position at a time by adding the new element and removing the element that leaves the window.

76. Minimum Window Substring

Difficulty: Hard

Approach: Sliding Window + Frequency Array

Time Complexity: O(m + n)

Space Complexity: O(1)

Idea: Expand the right side until the window contains all required characters from t, then shrink from the left to find the smallest valid window.

239. Sliding Window Maximum

Difficulty: Hard

Approach: Sliding Window + Monotonic Deque

Time Complexity: O(n)

Space Complexity: O(k)

Idea: Store indices in a deque while keeping their corresponding values in decreasing order. The front of the deque always contains the maximum value for the current window.

424. Longest Repeating Character Replacement

Difficulty: Medium

Approach: Sliding Window + Frequency Array

Time Complexity: O(n)

Space Complexity: O(1)

Idea: Keep a window where the number of characters that need to be replaced is at most k.

The key formula is:

replacements = windowSize - maxFrequency

The window is valid when:

replacements <= k

Concepts Covered

Fixed-size sliding window

Variable-size sliding window

Frequency counting

Two pointers

Monotonic deque

Efficient O(n) array and string processing

Language

All solutions are implemented in C++ and use the standard LeetCode Solution class format.
