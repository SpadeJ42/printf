*This activity has been created as part of the 42 curriculum by xiaochen.*

# ft_printf

## Description

`ft_printf` is a library containing a custom implementation of the standard C `printf()` function from libc.

Prototype:

```c
int ft_printf(const char *, ...);
```

Supported conversions:

* `%c` Prints a single character.
* `%s` Prints a string.
* `%p` Prints a pointer address in hexadecimal format.
* `%d` Prints a decimal (base 10) number.
* `%i` Prints an integer in base 10.
* `%u` Prints an unsigned decimal (base 10) number.
* `%x` Prints a hexadecimal (base 16) number using lowercase characters.
* `%X` Prints a hexadecimal (base 16) number using uppercase characters.
* `%%` Prints a percent sign.

The implementation is compared against the original `printf()` behavior.

The project uses the `ar` command to generate the static library `libftprintf.a`, located at the root of the repository.

The header file is named `ft_printf.h` and contains the prototype of `ft_printf()`.

---

## Instructions

### Compilation

```bash
make
```

Generation of:

```bash
libftprintf.a
```

### Cleaning object files

```bash
make clean
```

### Full clean

```bash
make fclean
```

### Rebuild

```bash
make re
```

## Resources

### Documentation

* `man printf`
* `man stdarg`
