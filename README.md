# Structured Programming Practice Assignment (CSC1101)

This repository contains small C programming solutions mapped to practice categories from Deitel & Deitel, C How to Program (9th Edition). It demonstrates core console concepts, loop controls, validation checks, and interactive data structures.

---

## Exercise 1 – Basic Output
* **Category:** Basic output
* **Source:** Deitel & Deitel, 9th Edition, Chapter 2, Exercise 2.17
* **What the program does:** Prints out a formatted grocery product price list overview to the user terminal console.
* **Concepts used:** printf(), text literal rendering, escape characters (\n).
* **How it works:** Executes a linear sequence of standard output print commands to cleanly establish a retail storefront user interface layout.

### Example Run
```text
--- Online Retailer Sales Calculator ---
Product List:
1 - $2.98
2 - $4.50
3 - $9.98
4 - $4.49
5 - $6.87
----------------------------------------
Enter 0 for the product number to exit.
```

---

## Exercise 2 – Input – Process – Output
* **Category:** Input – Process – Output
* **Source:** Deitel & Deitel, 9th Edition, Chapter 2, Exercise 2.16
* **What the program does:** Prompts for a shopping item quantity, processes it against a unit price variable, and displays the product calculation.
* **Concepts used:** Data types (int, double), scanf(), arithmetic multiplication operator (*).
* **How it works:** Allocates memory stores for integers and floats, updates values dynamically through standard interactive prompts, and uses formatting specifiers (%.2f) to map calculation variables.

### Example Run
```text
Enter quantity sold for Product 1 ($2.98): 3
Retail value of items sold: $8.94
```

---

## Exercise 3 – Decision
* **Category:** Decision
* **Source:** Deitel & Deitel, 9th Edition, Chapter 2, Exercise 2.22
* **What the program does:** Validates user product numbers and ensures no illegal data bounds exist.
* **Concepts used:** Relational conditions, if...else logical routing.
* **How it works:** Validates an input field value using logical boundaries. If the integer falls below 0, a data error pathway is printed.

### Example Run
```text
Enter product number: -4
Error: Invalid negative product number entered.
```

---

## Exercise 4 – Basic Loop
* **Category:** Basic loop
* **Source:** Deitel & Deitel, 9th Edition, Chapter 4, Exercise 4.9
* **What the program does:** Continuously repeats a code execution window block until a specific sentinel number breaks it.
* **Concepts used:** Sentinel loop testing, while condition monitoring.
* **How it works:** Checks the current variable loop flag value state during every loop pass. The loop immediately exits when the sentinel value (0) becomes active.

### Example Run
```text
Looping... Enter 0 to break out: 5
Looping... Enter 0 to break out: 0
Successfully exited basic loop.
```

---

## Exercise 5 – Loop with Calculation
* **Category:** Loop with calculation
* **Source:** Deitel & Deitel, 9th Edition, Chapter 4, Exercise 4.13
* **What the program does:** Increments a runtime tracking counter variable and pools mathematical figures into a cumulative sum variable.
* **Concepts used:** Addition assignment arithmetic accumulator (+=), increment tracks (++).
* **How it works:** Automatically tallies repeated transactional batches onto a single balance variable across loop iterations.

### Example Run
```text
Iteration 1 running total: $9.00
Iteration 2 running total: $18.00
Iteration 3 running total: $27.00
```

---

## Exercise 6 – Loop with User Input
* **Category:** Loop with user input
* **Source:** Deitel & Deitel, 9th Edition, Chapter 3, Exercise 3.17
* **What the program does:** Accepts multiple pairs of retail log inputs dynamically across consecutive loop iterations.
* **Concepts used:** Loop nested text tracking, variable reading via scanf().
* **How it works:** Refreshes internal placeholder fields by continuously prompting for inventory adjustments until users choose to stop.

### Example Run
```text
Enter product code (0 to stop): 2
Enter inventory amount sold: 5
Logged: Product 2, Qty 5
```

---

## Exercise 7 – Loop with Decision
* **Category:** Loop with decision
* **Source:** Deitel & Deitel, 9th Edition, Chapter 3, Exercise 3.24
* **What the program does:** Evaluates a menu catalog mapping index variable using a switch selector wrapped directly inside a conditional loop pass.
* **Concepts used:** Integrated switch...case structure, break controls.
* **How it works:** Matches input choices against catalog definitions inside the loop body, safely reporting invalid entries via a default block fallback.

### Example Run
```text
Select product (1-3, 0 to quit): 1
Selected item price: $2.98
```

---

## Exercise 8 – Interactive Console Program
* **Category:** Interactive console program
* **Source:** Deitel & Deitel, 9th Edition, Chapter 4, Exercise 4.19
* **What the program does:** Serves as a full-featured, interactive retail store dashboard with live bounds checking, runtime lookup switches, and conditional receipt outputs.
* **Concepts used:** Combined control logic architectures, boolean state variables, sentinel boundaries.
* **How it works:** Synthesizes the previous 7 steps into one pipeline. It parses live item codes, intercepts negative values, dynamically maps product price data values, and prints a final transaction balance receipt if no errors occur.

### Example Run
```text
--- Online Retailer Sales Calculator ---
Product List:
1 - \$2.98
2 - \$4.50
3 - \$9.98
4 - \$4.49
5 - \$6.87
----------------------------------------
Enter 0 for the product number to exit.

Enter product number (1-5, or 0 to quit): 2
Enter quantity sold: 2

Enter product number (1-5, or 0 to quit): 4
Enter quantity sold: 1

Enter product number (1-5, or 0 to quit): 0

========================================
Total retail value of all items sold: \$13.49
========================================
```
