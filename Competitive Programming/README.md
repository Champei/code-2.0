# Beginner's Guide to Competitive Programming

This guide is designed for beginners who want to get started with competitive programming.  
It provides a **carefully selected set of beginner-friendly Codeforces problems** to practice logic and implementation skills, along with a **collection of learning resources** (courses, books, and problem sets) to build a strong foundation in programming and problem-solving.

---

## 📚 Recommended Learning Resources

### 🎥 Beginner-Friendly Courses
- **[Luv's Competitive Programming Course](https://youtube.com/playlist?list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&si=9lZhPhQPWk7y8VP8)**  
  A solid introduction to competitive programming and problem solving.  

- **[Striver's Competitive Programming Course](https://youtube.com/playlist?list=PLgUwDviBIf0oF6QL8m22w1hIDC1vJ_BHz&si=ZsMOyH6-cPVYdL-J)**  
  Structured C++-based course covering algorithms, problem-solving, and contests.  

- **[The Cherno for C++ (OOP Focus)](https://youtube.com/playlist?list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&si=Zldc3P87S4ruL-xo)**  
  A popular series for mastering C++ fundamentals and object-oriented programming.  

---

### 📖 Advanced References (Bookmark for Later)
- **[USACO Guide](https://usaco.guide/)**  
  Structured roadmap for algorithmic problem-solving.  

- **[CSES Competitive Programmer’s Handbook](https://cses.fi/book/book.pdf)**  
  Beginner-friendly book introducing key algorithms and problem-solving techniques.  

- **[CSES Problem Set](https://cses.fi/problemset/)**  
  Progressive set of practice problems, widely recommended for skill-building.  

- **[CP-Algorithms](https://cp-algorithms.com/)**  
  Encyclopedia of competitive programming algorithms and techniques.  

---

## 🧠 Implementation & Simulation

These problems test your ability to translate a problem's rules directly into code.

- [Team (231A)](https://codeforces.com/problemset/problem/231/A)  
  **Rating:** 800  
  **Topic:** Simple Loop  
  <details><summary>Hint</summary>For each problem, sum the three inputs (0s and 1s). If the sum is 2 or greater, add 1 to your answer.</details>

- [Stones on the Table (266A)](https://codeforces.com/problemset/problem/266/A)  
  **Rating:** 800  
  **Topic:** String Iteration  
  <details><summary>Hint</summary>Iterate through the string from the first to the second-to-last character. Compare each character `s[i]` with the next one `s[i+1]`. If they're the same, increment a counter.</details>

- [Queue at the School (266B)](https://codeforces.com/problemset/problem/266/B)  
  **Rating:** 900  
  **Topic:** Array Simulation  
  <details><summary>Hint</summary>You need to simulate the process `t` times. In each second, iterate through the queue and find all adjacent "BG" pairs to swap. Be careful not to swap a newly moved 'B' again in the same second.</details>

- [Nearly Lucky Number (110A)](https://codeforces.com/problemset/problem/110/A)  
  **Rating:** 800  
  **Topic:** Digit Manipulation  
  <details><summary>Hint</summary>First, count the number of '4's and '7's in the input number. Let this count be `c`. Then, check if `c` itself is a lucky number (i.e., 4 or 7).</details>

- [Two-gram (977B)](https://codeforces.com/problemset/problem/977/B)  
  **Rating:** 900  
  **Topic:** Substring Counting  
  <details><summary>Hint</summary>Iterate through all substrings of length 2. Use a map or dictionary to store the frequency of each two-gram. Then, find the one with the highest count.<br><br>🎥 [Watch Tutorial](https://youtu.be/hMag-s8SYoI)</details>

---

## 📈 Greedy & Sorting

These problems often require sorting the input first and then applying a greedy strategy.

- [Honest Coach (1360B)](https://codeforces.com/problemset/problem/1360/B)  
  **Rating:** 800  
  **Topic:** Sorting, Min Difference  
  <details><summary>Hint</summary>To minimize the difference between two numbers, they must be as close as possible. Sort the array of strengths and then find the minimum difference between any two adjacent athletes.</details>

- [Dragons (230A)](https://codeforces.com/problemset/problem/230/A)  
  **Rating:** 900  
  **Topic:** Greedy with Sorting  
  <details><summary>Hint</summary>It's always optimal to fight the weakest dragons first. This increases your strength as much as possible for the tougher fights. Sort the dragons by their strength before simulating the battles.<br><br>🎥 [Watch Tutorial](https://youtu.be/cQ0_Lya-p8s)</details>

- [Two Arrays And Swaps (1353B)](https://codeforces.com/problemset/problem/1353/B)  
  **Rating:** 800  
  **Topic:** Greedy with Sorting  
  <details><summary>Hint</summary>To maximize the sum of array `a`, you should always swap its smallest elements with the largest available elements from array `b`. Sort `a` ascending and `b` descending to easily find these elements.<br><br>🎥 [Watch Tutorial](https://youtu.be/1B2C62-2iA4)</details>

- [Vanya and Lanterns (492B)](https://codeforces.com/problemset/problem/492/B)  
  **Rating:** 1000  
  **Topic:** Sorting, Gaps  
  <details><summary>Hint</summary>The darkest spots are either at the ends of the street or halfway between two lanterns. Sort the lantern positions. The required radius will be the maximum of: (first lantern's position), (street length - last lantern's position), or (max distance between any two adjacent lanterns / 2).<br><br>🎥 [Watch Tutorial](https://youtu.be/k95Q5aGcz1c)</details>

- [Unique Number (1462C)](https://codeforces.com/problemset/problem/1462/C)  
  **Rating:** 1200  
  **Topic:** Greedy, Constructive  
  <details><summary>Hint</summary>To make the number as small as possible, it must have the fewest digits. To do that with a fixed sum, you must use the largest distinct digits. Greedily pick digits starting from 9, then 8, 7, etc., until the sum is met.<br><br>🎥 [Watch Tutorial](https://youtu.be/yS-8G5c-9yY)</details>

---

## 🔢 Basic Math & Number Theory

These problems are solved by applying properties of numbers like divisibility, prime factors, and parity.

- [Sum of Round Numbers (1352A)](https://codeforces.com/problemset/problem/1352/A)  
  **Rating:** 800  
  **Topic:** Digit Decomposition  
  <details><summary>Hint</summary>A "round number" is determined by a single non-zero digit's place value. The '7' in '9876' represents '70'. Use modulo (`% 10`) and division (`/ 10`) in a loop to extract each digit and its place value.</details>

- [Balanced Array (1343B)](https://codeforces.com/problemset/problem/1343/B)  
  **Rating:** 900  
  **Topic:** Parity, Construction  
  <details><summary>Hint</summary>A solution is only possible if `n` is a multiple of 4. If so, construct it: fill the first `n/2` spots with even numbers (2, 4, 6...) and the next `n/2 - 1` spots with odd numbers (1, 3, 5...). Finally, calculate the last odd number needed to make the sums equal.<br><br>🎥 [Watch Tutorial](https://youtu.be/hD41A2G5LoE)</details>

- [Multiply by 2, divide by 6 (1374B)](https://codeforces.com/problemset/problem/1374/B)  
  **Rating:** 1000  
  **Topic:** Prime Factorization  
  <details><summary>Hint</summary>The only prime factors involved are 2 and 3. Dividing by 6 removes one 2 and one 3. Multiplying by 2 adds a 2. You can never add a 3. For a solution to exist, the count of factor 2s must be less than or equal to the count of factor 3s.<br><br>🎥 [Watch Tutorial](https://youtu.be/h9Z8Y7ilp9M)</details>

- [Phoenix and Balance (1348A)](https://codeforces.com/problemset/problem/1348/A)  
  **Rating:** 900  
  **Topic:** Math, Powers of 2  
  <details><summary>Hint</summary>The coin with weight $2^n$ is heavier than all others combined. To minimize the difference, put $2^n$ in one pile. Then, to balance it, put some of the remaining coins in the *first* pile and the rest in the *second* pile. The optimal way is to put the `n/2 - 1` smallest coins with the $2^n$ coin.<br><br>🎥 [Watch Tutorial](https://youtu.be/a9-e82A0aDo)</details>

- [Same Differences (1520D)](https://codeforces.com/problemset/problem/1520/D)  
  **Rating:** 1300  
  **Topic:** Algebra, Counting  
  <details><summary>Hint</summary>Rearrange the equation! `a[j] - a[i] = j - i` is the same as `a[j] - j = a[i] - i`. This transforms the problem into counting pairs of indices where the value `a[k] - k` is the same. Use a map to count the frequencies of these values.<br><br>🎥 [Watch Tutorial](https://youtu.be/lsoo_a72aAs)</details>

---

## 🛠️ Constructive & Ad-Hoc Logic

These problems require you to "think outside the box" and build a valid solution.

- [Presents (136A)](https://codeforces.com/problemset/problem/136/A)  
  **Rating:** 800  
  **Topic:** Array Mapping  
  <details><summary>Hint</summary>Create a new array for your answer. If the input says friend `i` gives a gift to friend `p[i]`, it means the `p[i]`-th friend received a gift from friend `i`. So, you should set `answer[p[i]] = i`.</details>

- [Beautiful Matrix (263A)](https://codeforces.com/problemset/problem/263/A)  
  **Rating:** 800  
  **Topic:** Grid, Manhattan Dist  
  <details><summary>Hint</summary>The number of moves is the Manhattan distance from the '1's current position `(r, c)` to the center `(2, 2)`. The formula is `|r - 2| + |c - 2|` (using 0-indexing).</details>

- [Bad Ugly Numbers (1326A)](https://codeforces.com/problemset/problem/1326/A)  
  **Rating:** 900  
  **Topic:** Constructive  
  <details><summary>Hint</summary>The case `n=1` is impossible. For `n > 1`, a simple construction always works. Consider a number made of mostly one digit. A `2` followed by `n-1` `3`'s (`233...3`) is a valid solution that is easy to build.<br><br>🎥 [Watch Tutorial](https://youtu.be/U-gl7-7dnP4)</details>

- [Even Array (1367B)](https://codeforces.com/problemset/problem/1367/B)  
  **Rating:** 800  
  **Topic:** Parity, Counting  
  <details><summary>Hint</summary>An array is "good" if each element `a[i]` has the same parity as its index `i`. Count the number of misplaced elements: even numbers at odd indices, and odd numbers at even indices. If these two counts are equal, that's your answer. Otherwise, it's impossible.<br><br>🎥 [Watch Tutorial](https://youtu.be/Y5qVcz_52zM)</details>

- [Not Adjacent Matrix (1520C)](https://codeforces.com/problemset/problem/1520/C)  
  **Rating:** 1200  
  **Topic:** Constructive, Grid  
  <details><summary>Hint</summary>A simple sequential filling won't work. A checkerboard pattern is a great strategy. Try filling all the odd numbers (1, 3, 5...) in order, then fill all the even numbers (2, 4, 6...). This naturally separates adjacent numbers like `i` and `i+1`.<br><br>🎥 [Watch Tutorial](https://youtu.be/UqUEV2n5s54)</details>
