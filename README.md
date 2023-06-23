# **PRINTF PROJECT**
## **TASKS**

0. A function that produces output according to a format:
- The function handles the following conversion specifiers, `c`, `s`, `%`.
- The prototype to be used is: `int _printf(const char *format, ...);`.
- The output is written to the standard output stream.
- The return value is the  number of characters printed excluding the null byte.

1. A function that handles the following conversion specifiers:
- Conversion specifiers: `d`, `i`.

2. A function that handles custom conversion specifiers:
- Conversion specifier: `b`(The unsinged int argument is converted to binary).

3. A function that handles the following conversion specifiers:
- Conversion specifiers: `u`, `o`, `x`, `X`.

4. Using a local buffer of 1024 chars in order to call write as little as possible.

5. A function that handles a custom conversion specifer:
- Conversion specifier: `S` (Prints a string).
- Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters).

6. A function that handles the following conversion specifier.
- Conversion specifier: `p`

7. A function that handles the following flag characters for non-custom conversion specifiers:
- Conversion specifier: `+`, `space`, `#`.

*In the above functions the flag characters, field width, precision and modifiers are not handled.*

8. A function that handles the following length modifiers for non-custom conversion specifiers:
- Conversion specifiers: `l`, `h`.
- Conversion specifiers to handle: `d`, `i`, `u`, `o`, `x`, `X`.

9. A function that handles the field width for non-custom conversion specifiers.

10. A function that handles the precision for non-custom conversion specifiers.

11. A function that handles the `0` flag character for non-custom conversion specifiers.

12. A function that handles the `-` flag character for non-cutom conversion specifiers.

13. A function that handles the following custom conversion specifier:
- Custom conversion specifier: `r` (Prints the reverse string).

14. A function that handles the following custom conversion specifier:
- Custom conversion specifier: `R` (Prints the rot13'ed string).

15. All the above options work well together.

**End of project**
**Project done by Mubarak Abdallah and Mark Musili**
