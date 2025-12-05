# Memory Pointer Demo — CS50 Practice

This project is a simple C program I wrote while taking the CS50 Memory course video.  
It demonstrates the basics of pointers and how to access values stored at specific memory addresses.

---

## 📌 What the Program Does
- Declares an integer `n`
- Stores the address of `n` in a pointer `p`
- Prints the value at that address using `*p`  
  (showing how dereferencing works)

---

## 🧠 Code Snippet

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;
    printf("%p\n", *p);
}
