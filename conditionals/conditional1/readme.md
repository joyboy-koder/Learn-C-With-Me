# Conditional 1 — Simple If Statement (x < y)

This beginner-friendly C program introduces the **basic idea of conditionals** using only an `if` statement — *no else, no else-if*.  
It helps illustrate how a program behaves when only one condition is checked.

---

## 📘 What This Program Does

This program:

1. Prompts the user to input **x**
2. Prompts the user to input **y**
3. Checks the condition:  
   **If `x < y`**, it prints:
x is less than y

4. If the condition is **false**, the program simply ends without printing anything.

This shows beginners that an `if` statement does **not** require an `else`.

---

## 🧠 Why No Else?

Many new learners believe every `if` needs an `else`.  
This program intentionally avoids an else to show that:

- `if` only runs its code when the condition is **true**
- if the condition is **false**, nothing happens — and that is totally valid
- `else` is optional, not mandatory

---

## 📝 Flowchart Explanation

Below is the logical flow of the program:


## 📸 Flowchart Image


 ![Flowchart](flowchart.png)

---

## 💻 Code Preview

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("What is x? ");
    int y = get_int("What is y? ");

    if (x < y)
    {
        printf("x is less than y\n");
    }
}




