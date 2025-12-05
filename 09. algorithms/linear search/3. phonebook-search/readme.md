# Linear Search With Structs (Phonebook Search)

This C program demonstrates how to store related data using **structs** and search through them using a **linear search**.  
The program works like a simple phonebook: type a name, and it returns the associated number if it exists.

## How It Works
- A `person` struct is defined with two fields:
  - `name`
  - `number`
- An array of 3 `person` entries is created:
  - Kelvin — 0542924048  
  - Sophia — 0553756217  
  - Pascal — 0244095211
- The user enters a name to search for.
- The program loops through the array and compares the input with the stored names using `strcmp()`.
- If a match is found, the program prints **"Found"** followed by the person's number.
- If no match exists, it prints **"Not found"**.

## Concepts Used
- Structs in C (`typedef struct`)
- Arrays of structs
- Linear search
- `strcmp()` for string comparison
- CS50's `get_string()`
