# 🧩 Sudoku Solver in C++

A Sudoku Solver implemented in **C++** using the **Backtracking Algorithm**. The program validates the input Sudoku, solves any valid 9×9 Sudoku puzzle, and reports invalid or unsolvable puzzles.

---

## 📌 Features

- Solves any valid 9×9 Sudoku puzzle
- Uses the Backtracking algorithm
- Validates the input board before solving
- Detects invalid Sudoku configurations
- Detects unsolvable Sudoku puzzles
- Clean and modular C++ implementation

---

## 🛠️ Technologies Used

- C++
- Standard Template Library (STL)

---

## 🧠 Algorithm

The solver uses **Backtracking**, a recursive algorithm that tries all possible values for each empty cell until a valid solution is found.

### Steps

1. Find the first empty cell.
2. Try placing numbers from **1 to 9**.
3. Check if placing the number is valid:
   - Row check
   - Column check
   - 3×3 sub-grid check
4. If valid, place the number.
5. Recursively solve the remaining board.
6. If no number works, backtrack and try the next possibility.

---

## 📂 Project Structure

```
Sudoku-Solver/
│── sudoku_solver.cpp
└── README.md
```

---

## ▶️ How to Run

### Compile

```bash
g++ sudoku_solver.cpp -o sudoku_solver
```

### Run

```bash
./sudoku_solver
```

On Windows (MinGW):

```bash
g++ sudoku_solver.cpp -o sudoku_solver.exe
sudoku_solver.exe
```

---

## 📝 Input Format

Enter the Sudoku board as **9 rows**, each containing **9 integers**.

- Use **0** for empty cells.
- Numbers must be between **0 and 9**.

### Example Input

```
5 3 0 0 7 0 0 0 0
6 0 0 1 9 5 0 0 0
0 9 8 0 0 0 0 6 0
8 0 0 0 6 0 0 0 3
4 0 0 8 0 3 0 0 1
7 0 0 0 2 0 0 0 6
0 6 0 0 0 0 2 8 0
0 0 0 4 1 9 0 0 5
0 0 0 0 8 0 0 7 9
```

---

## ✅ Example Output

```
Solved Sudoku

-------------------------
| 5 3 4 | 6 7 8 | 9 1 2 |
| 6 7 2 | 1 9 5 | 3 4 8 |
| 1 9 8 | 3 4 2 | 5 6 7 |
-------------------------
| 8 5 9 | 7 6 1 | 4 2 3 |
| 4 2 6 | 8 5 3 | 7 9 1 |
| 7 1 3 | 9 2 4 | 8 5 6 |
-------------------------
| 9 6 1 | 5 3 7 | 2 8 4 |
| 2 8 7 | 4 1 9 | 6 3 5 |
| 3 4 5 | 2 8 6 | 1 7 9 |
-------------------------
```

---

## ⏱️ Complexity Analysis

- **Time Complexity:** Worst case **O(9^(81))**
- **Space Complexity:** **O(81)** (recursion stack)

> Although the theoretical worst-case time complexity is very high, most valid Sudoku puzzles are solved much faster because invalid choices are eliminated early through constraint checking.

---

## 🚀 Future Improvements

- Read Sudoku puzzles from a file
- Generate random Sudoku puzzles
- Graphical User Interface (GUI)
- Show solving steps visually
- Measure solving time
- Optimize using heuristic techniques (e.g., Minimum Remaining Values)

---

## 👨‍💻 Author

**Mahesh Malipeddi**

If you found this project useful, feel free to ⭐ the repository!
