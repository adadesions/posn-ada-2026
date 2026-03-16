# POSN Ada 2026

Personal study repository for competitive programming practice — focused on algorithms and problem-solving techniques used in Thai national olympiad (POSN) preparation.

---

## Structure

```
posn-ada-2026/
├── posn_day1_2026/          # Day 1 — Searching Algorithms
│   └── posn_day1_2026/
│       ├── linear_search.cpp     # P01–P03: Linear scan & Boyer-Moore voting
│       ├── binary_search.cpp     # P04–P06: Binary search variants
│       ├── upper_lower_bound.cpp # P07–P10: Bounds, LIS, binary search on answer
│       └── main.cpp              # P20, P27: BFS on grids, Cheapest Flights (Bellman-BFS)
│
├── posn_day2_2026/          # Day 2 — Exhaustive Search
│   └── posn_day2_2026/
│       ├── brute_force.cpp       # P02–P03, P10: Brute force, magic square, 2D prefix sum, knapsack bitmask
│       └── main.cpp              # P01–P04: Branch & Bound (0/1 Knapsack, Subset Sum, N-Queens)
│
└── posn_day3_2026/          # Day 3 — (in progress)
    └── posn_day3_2026/
        └── main.cpp
```

---

## Topics Covered

### Day 1 — Searching Algorithms

| Problem | Difficulty | Topic | Key Idea |
|---------|-----------|-------|----------|
| P01 | Easy | Linear Search | First & last occurrence |
| P02 | Easy | Linear Search | Missing number with boolean map |
| P03 | Medium | Linear Search | Majority element — Boyer-Moore Voting O(n) |
| P04 | Medium | Binary Search | Search in rotated sorted array |
| P05 | Medium | Binary Search | Find peak element O(log n) |
| P06 | Hard | Binary Search | Median of two sorted arrays O(log min(m,n)) |
| P07 | Easy | Lower/Upper Bound | Count elements in range with binary search |
| P08 | Medium | Lower/Upper Bound | Minimum difference element |
| P09 | Medium | Lower/Upper Bound | Longest Increasing Subsequence O(n log n) — patience sort |
| P10 | Medium | Binary Search on Answer | Minimize max distance between gas stations |
| P20 | Medium | BFS | Walls and Gates — multi-source BFS on grid |
| P27 | Hard | BFS / Bellman-Ford | Cheapest Flights Within K Stops |

### Day 2 — Exhaustive Search & Branch and Bound

| Problem | Difficulty | Topic | Key Idea |
|---------|-----------|-------|----------|
| P01 | Medium | Branch & Bound | 0/1 Knapsack with fractional upper bound pruning |
| P02 | Medium | Brute Force | Count all 3×3 magic squares via permutations |
| P02 | Medium | Branch & Bound | Subset Sum with suffix-sum pruning |
| P03 | Medium | Brute Force | Maximum sub-rectangle sum using 2D prefix sums |
| P04 | Hard | Branch & Bound | N-Queens — backtracking with O(1) column/diagonal checks |
| P10 | Medium | Brute Force | 0/1 Knapsack with bitmask enumeration + XOR constraint |

---

## How to Run

Each day is a separate **Xcode project** (C++17). Open the `.xcodeproj` file and build/run, or compile manually:

```bash
# Example: compile and run Day 1 binary search problems
cd posn_day1_2026/posn_day1_2026
g++ -std=c++17 -O2 -o binary_search binary_search.cpp && ./binary_search
```

---

## Language & Tools

- **Language:** C++17
- **IDE:** Xcode (macOS)
- **Standard:** Competitive programming style — STL, no external libraries
