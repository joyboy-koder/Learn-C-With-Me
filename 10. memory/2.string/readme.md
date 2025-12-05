# String Pointer Demo — CS50 Practice

This project is a short C program I wrote while studying CS50's Memory lessons.  
It demonstrates how strings work in C and how characters can be accessed using pointer-style indexing.

---

## 📌 What the Program Does
- Creates a string `"HI!"` using a character pointer.
- Uses `s[0]`, `s[1]`, and `s[2]` to print each character.
- Shows how strings in C are really pointers to the first character in memory.

---

## 🧠 Code Snippet

```c
#include <stdio.h>

// String Pointer

int main(void)
{
    char *s = "HI!";
    printf("%c\n", s[0]);
    printf("%c\n", s[1]);
    printf("%c\n", s[2]);
}
```


## 📝 Notes

- In C, a string literal like "HI!" is stored in memory as an array of characters.

- A char * points to the first character of that array.

- s[index] is pointer arithmetic — it's the same as *(s + index).