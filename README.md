# Underscore String to Matrix Converter

This project implements a text processing algorithm in C that converts a linear string into a structured 2D matrix format.

## ⚙️ Logic

1.  **Input:** Reads a string where words are separated by `_` (e.g., `ali_veli_sami`).
2.  **Parsing:**
    * Traverses the string character by character.
    * **If char is letter:** Adds it to the current row of the matrix.
    * **If char is `_`:** Terminates the current row (`\0`) and moves to the next row index.
3.  **Storage:** The result is a list of strings stored in a `char matrix[Rows][Cols]`.

## 🚀 Example Output

Based on Question 7:

**Input:** `ali_veli_sami_sukru`

**Matrix Structure in Memory:**
| Row Index | Content |
|---|---|
| 0 | "ali" |
| 1 | "veli" |
| 2 | "sami" |
| 3 | "sukru" |

**Console Output:**
```text
--- Matrise Yerlestirilen Kelimeler ---
Matris[0]: ali
Matris[1]: veli
Matris[2]: sami
Matris[3]: sukru
