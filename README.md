# 🎮 Tic Tac Toe Game using C

A **console-based Tic Tac Toe game developed in C**, implementing structured programming and game logic using arrays and modular design.

This project demonstrates strong fundamentals in **C programming, control flow, functions, and basic game logic implementation**.

---

## 🚀 Project Description

Tic Tac Toe is a two-player console game where players take turns marking spaces in a 3×3 grid.

The game validates user input, updates the board dynamically, and checks for winning or draw conditions after every move.

This project focuses on implementing clean logic, modular design, and proper input validation in C.

---

## 🎯 Objective

- Implement a classic 3×3 Tic Tac Toe game in C  
- Practice control structures and conditional logic  
- Apply functions for modular code design  
- Improve logical thinking and game-state handling  

---

## ✨ Features

- Two-player gameplay (Player X and Player O)  
- Real-time board display after each move  
- Input validation to prevent invalid or repeated moves  
- Win detection (rows, columns, diagonals)  
- Draw condition detection  
- Clean and simple console interface  

---

## 🛠️ Technologies & Concepts Used

- **C Programming**
- **Arrays (2D Array for Board)**
- **Functions**
- **Loops and Conditional Statements**
- **Input Validation**
- **Game Logic Implementation**

---

## 🧠 How the Game Works

- The game board is represented using a **2D character array (3×3)**.
- Players take turns entering positions (1–9).
- The program checks:
  - If the move is valid
  - If the player has won
  - If the game ends in a draw
- The board is updated dynamically after each move.

---

## 📂 Project Structure

```
TicTacToe/
├── main.c
├── game.c
├── game.h
└── README.md
```

---

## ▶️ Compilation and Execution

### Compile:
```bash
gcc *.c -o tic_tac_toe
```

### Run:
```bash
./tic_tac_toe
```
---

## 🎮 Sample Game Output

### Initial Board


|---|---|---|
| 1 | 2 | 3 |
| 4 | 5 | 6 |
| 7 | 8 | 9 |

---

### After Player X Chooses Position 5


|---|---|---|
| 1 | 2 | 3 |
| 4 | X | 6 |
| 7 | 8 | 9 |

---

## 🖥️ Console Version (Terminal Style)

```
===== TIC TAC TOE GAME =====

 1 | 2 | 3
-----------
 4 | 5 | 6
-----------
 7 | 8 | 9

Player X, enter position (1-9): 5

 1 | 2 | 3
-----------
 4 | X | 6
-----------
 7 | 8 | 9
```

---



## 🧪 Sample Output

```
===== TIC TAC TOE GAME =====

 1 | 2 | 3
-----------
 4 | 5 | 6
-----------
 7 | 8 | 9

Player X, enter position (1-9): 5

 1 | 2 | 3
-----------
 4 | X | 6
-----------
 7 | 8 | 9
```

---

## 📊 Winning Conditions

The program checks for:

- All rows matching  
- All columns matching  
- Both diagonals matching  

If no winning condition is met and all positions are filled, the game is declared a draw.

---

## 📈 Learning Outcome

This project strengthened my understanding of:

- Array manipulation  
- Control flow and conditional logic  
- Modular programming using functions  
- Real-time game-state validation  

It improved my ability to design structured and interactive console-based applications.

---

## 👨‍💻 Author

**Manu H P**  
Embedded Systems Enthusiast  
Strong in C Programming, Data Structures, and Linux Internals  

---

## 📄 License

This project is developed for learning and educational purposes.
