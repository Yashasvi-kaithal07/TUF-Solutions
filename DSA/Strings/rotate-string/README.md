# [324. Rotate String](https://takeuforward.org/practice/dsa/rotate-string)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Given two strings **s** and **goal** , return **true** if and only if s can become goal after some number of shifts on s.

A **shift** on s consists of moving the leftmost character of s to the rightmost position.

For example, if s = "abcde", then it will be "bcdea" after one shift.

### Example 1:

**Input:** s = "abcde" , goal = "cdeab"

**Output:** true

**Explanation:**

After performing 2 shifts we can achieve the goal string from string s.

After first shift the string s is => bcdea

After second shift the string s is => cdeab.

### Example 2:

**Input:** s = "abcde" , goal = "adeac"

**Output:** false

**Explanation:**

Any number of shift operations cannot convert string s to string goal.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= s.length <= 100
- 1 <= goal.length <= 100
- s and goal consist of only lowercase English letters.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
