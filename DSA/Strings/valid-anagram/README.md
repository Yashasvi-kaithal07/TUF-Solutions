# [52. Valid Anagram](https://takeuforward.org/practice/dsa/valid-anagram)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Given two strings **s** and **t** , return **true** if t is an anagram of s, and **false** otherwise.

An **Anagram** is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

### Example 1:

**Input:** s = "anagram" , t = "nagaram"

**Output:** true

**Explanation:**

We can rearrange the characters of string s to get string t as frequency of all characters from both strings is same.

### Example 2:

**Input:** s = "dog" , t = "cat"

**Output:** false

**Explanation:**

We cannot rearrange the characters of string s to get string t as frequency of all characters from both strings is not same.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= s.length , t.length <= 5*10^4
- s and t consist of only lowercase English letters

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
