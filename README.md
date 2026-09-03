cat << 'EOF' > README.md
<div align="center">

# 🏊‍♂️ 1337 Coding School — Piscine C & Shell

![42 Network](https://img.shields.io/badge/School-1337%20Morocco%20(42%20Network)-1f2328?style=for-the-badge&logo=42)
![Language C](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Shell Scripting](https://img.shields.io/badge/Shell-Bash%20%2F%20Zsh-4EAA25?style=for-the-badge&logo=gnu-bash&logoColor=white)
![Norminette](https://img.shields.io/badge/Norminette-v3%20Passing-success?style=for-the-badge)

<p align="center">
  A comprehensive collection of my solutions, exercises, and scripts developed during the intense 4-week <b>1337 (42 Network) Piscine</b>.
</p>

</div>

---

## 📌 Overview

The **Piscine** is an intensive 4-week immersion into low-level programming, peer-to-peer learning, and problem-solving without external high-level libraries.

* **Language:** Pure C (strictly following the 42 Norminette).
* **Environment:** macOS / Linux (UNIX terminal environment).
* **Allowed Functions:** `write`, `malloc`, `free` (depending on the module constraints).

---

## 📂 Curriculum Structure

| Module | Focus Areas | Key Topics Covered |
| :--- | :--- | :--- |
| **Shell 00** | Basics of UNIX | Environment, file permissions, users, hard/symbolic links, `tar` |
| **Shell 01** | Advanced Shell | Pipelines, complex parsing, `find`, environment variables, regex |
| **C 00** | Basic Output | `ft_putchar`, loops, printing numbers/combos, recursive concepts |
| **C 01** | Pointers | Pointer arithmetic, dereferencing, swap functions, `div_mod` |
| **C 02** | Strings Basics | String copying, validation, casing, printable characters |
| **C 03** | String Operations | Custom `strcmp`, `strncmp`, `strcat`, `strncat`, `strstr` |
| **C 04** | Strings to Integers | String length, `putnbr`, handling base conversions, `ft_atoi` |
| **C 05** | Math & Recursion | Factorials, power functions, Fibonacci sequence, square roots, prime checks |
| **C 06** | CLI Arguments | Program parameters, `argc`, `argv`, command-line sorting |
| **C 07** | Dynamic Allocation | Heap allocation, `malloc`, `free`, `ft_strdup`, `ft_range`, `ft_strjoin` |
| **C 08** | C Preprocessor | Header files (`.h`), macros, structs (`t_point`, `t_stock_str`) |

---

## 📐 The 42 Norm (Norminette)

All code inside this repository complies with the official coding standard of the **42 Network**:

* Maximum **25 lines** per function.
* Maximum **5 functions** per `.c` file.
* Maximum **4 parameters** per function.
* Only **1 variable declaration** per line.
* No `for`, `do-while`, `switch`, or ternary operators allowed.
* Strict indentation using tabs.

To test the norm compliance locally:
```bash
norminette -R CheckForbiddenSourceHeader
```
##🛠️ Compilation & Testing
To compile any specific project (e.g., inside C00/ex00):
```
# Compile with mandatory strict 1337 flags
gcc -Wall -Wextra -Werror main.c ft_putchar.c -o test

# Run the binary
./test
```
## ⚠️ Disclaimer
_Academic Integrity Notice: If you are currently swimming in a 1337 / 42 Piscine, do not blindly copy-paste this code. Peer evaluations require you to explain every single line of your logic. Understand the concepts, test edge cases yourself, and pass the tests on your own merit._
