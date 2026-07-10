# Arrays & Hashing Approaches

## 1. Two Sum

### Why this approach?
I first thought about checking every pair, but that would take O(n²) time. Instead, I used a HashMap to store previously seen numbers and quickly check whether the required complement already exists.

### Time Complexity: O(n)

### Space Complexity: O(n)

---

## 2. Contains Duplicate

### Why this approach?
I used a HashSet because it stores only unique values. While traversing the array, if an element already exists in the set, it means a duplicate is found.

### Time Complexity: O(n)

### Space Complexity: O(n)

---

## 3. Best Time to Buy and Sell Stock

### Why this approach?
I kept track of the minimum price seen so far. For each day, I calculated the profit if I sold on that day and updated the maximum profit whenever I found a better one.

### Time Complexity: O(n)

### Space Complexity: O(1)

---

## 4. Product of Array Except Self

### Why this approach?
Since division is not allowed, I used prefix and suffix products. The first pass stores the product of elements on the left, and the second pass multiplies it with the product of elements on the right.

### Time Complexity: O(n)

### Space Complexity: O(1)

---

## 5. Maximum Subarray

### Why this approach?
I used Kadane's Algorithm, which keeps track of the current subarray sum and updates the maximum sum whenever a better answer is found.

### Time Complexity: O(n)

### Space Complexity: O(1)

---

## 6. Merge Intervals

### Why this approach?
I first sorted the intervals by their starting point. Then I merged overlapping intervals while traversing the sorted list.

### Time Complexity: O(n log n)

### Space Complexity: O(n)

---

## 7. Find the Difference of Two Arrays

### Why this approach?
I used two HashSets to quickly check which unique elements exist in one array but not in the other.

### Time Complexity: O(n + m)

### Space Complexity: O(n + m)

---

## 8. Subarray Sum Equals K

### Why this approach?
I used Prefix Sum with a HashMap. The HashMap stores the frequency of previous prefix sums, allowing me to count valid subarrays efficiently.

### Time Complexity: O(n)

### Space Complexity: O(n)

---

## 9. Longest Consecutive Sequence

### Why this approach?
I stored all numbers in a HashSet. I only started counting when the current number was the beginning of a sequence, which avoids unnecessary work.

### Time Complexity: O(n)

### Space Complexity: O(n)

---

# Patterns Learned

- HashMap
- HashSet
- Prefix Sum
- Two-Pass Array
- One-Pass Array
- Kadane's Algorithm
- Sorting
- Greedy
- Two Pointers

# Total Problems Solved

✅ 9 / 10

> **Note:** I completed all required Arrays & Hashing problems except **4Sum**, which I plan to solve next.
