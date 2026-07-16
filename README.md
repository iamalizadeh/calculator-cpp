
```markdown
# Console Calculator in C++

A menu-driven calculator supporting arithmetic operations, factorial, power calculation, and prime number checking.

## Description

This is a fully-featured console calculator with an interactive menu system. It handles user input validation and supports a wide range of mathematical operations.

## Features

- **Basic Operations**: Addition, Subtraction, Multiplication, Division
- **Factorial**: Calculate factorial of a non-negative integer
- **Power**: Calculate a^b with support for negative exponents
- **Prime Check**: Determine if a number is prime
- **Input Validation**: Handles invalid inputs gracefully
- **User-Friendly Menu**: Interactive menu system for easy navigation

## How to Run

1. Compile the program:
   ```bash
   g++ Calculator.cpp -o Calculator
```

2. Run the executable:
   ```bash
   ./Calculator
   ```
3. Select an option from the main menu (1-8)

Example

Menu:

```
***************** Main Menu ******************
1- Adding two numbers
2- Subtracting two numbers
3- Multiplying two numbers
4- Dividing two numbers
5- Factorial
6- Pow
7- Prime
8- Exit
Choose the option you want (1-8):
```

Addition Example:

```
Choose the option you want (1-8): 1
a = 10
b = 20
10+20 = 30
```

Factorial Example:

```
Choose the option you want (1-8): 5
n = 5
5! = 120
```

Power Example:

```
Choose the option you want (1-8): 6
a = 2
b = -3

2^-3 = 0.125
```

Prime Check Example:

```
Choose the option you want (1-8): 7
n = 17

17 is prime.
```

Technologies

· C++
· Recursion (for factorial)
· Input Validation
· Enum for Menu Options
