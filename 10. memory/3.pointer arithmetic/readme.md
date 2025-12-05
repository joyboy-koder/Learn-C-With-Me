# Pointer Arithmetic Demo — CS50 Practice

This project is a small C program I wrote while learning about pointers in CS50’s Memory lessons.  
It demonstrates how pointer arithmetic works, especially when working with strings.

---

## 📌 What the Program Does
- Creates a string `"HI!"` using a `char *` pointer.
- Uses pointer arithmetic to access each character:
  - `*s`  
  - `*(s + 1)`  
  - `*(s + 2)`
- Prints each character individually.

---

## 🧠 Code Snippet

```c
#include <stdio.h>

// Pointer Arithmetic

int main(void)
{
    char *s = "HI!";
    printf("%c\n", *s);
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2));
}
```

## 📝 Notes

- s points to the first character of the string "HI!".

- *s → first character

- *(s + 1) → second character

- *(s + 2) → third character

- Pointer arithmetic moves through memory based on the data type size (in this case, 1 byte for char).