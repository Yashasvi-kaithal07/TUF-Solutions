# [252. Isomorphic Strings](https://takeuforward.org/practice/dsa/isomorphic-string)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Given two strings **s** and **t** , determine if they are **isomorphic** . Two strings s and t are **isomorphic** if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

### Example 1:

**Input:** s = "egg" , t = "add"

**Output:** true

**Explanation:**

The 'e' in string s can be replaced with 'a' of string t.

The 'g' in string s can be replaced with 'd' of t.

Hence all characters in s can be replaced to get t.

### Example 2:

**Input:** s = "apple" , t = "bbnbm"

**Output:** false

**Explanation:**

Strings are matched **index by index** .

At index 0, 'a' maps to 'b'.

At index 1, 'p' also maps to 'b'.

This is invalid because **two different characters (a and p) cannot map to the same character (b)** in a one-to-one mapping.

Therefore, no valid mapping exists and the output is false.

### Example 3:

<h3 class="ProblemPanel-module__qBixIa__sectionTitle mb-0!">Example 3:</h3>

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= s.length <= 10^3
- s.length == t.length
- s and t consist of only lowercase English letters.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
