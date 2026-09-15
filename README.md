# File I/O in C

A collection of small C programs for practicing file input and output, command-line arguments, and text processing.

## Programs

- `copy.c` copies the contents of one file to another.
- `line_number.c` prints a file with line numbers.
- `reverse_line.c` reverses the characters on each line.
- `upper_case.c` converts file contents to uppercase.
- `words.c` reports the number of words, lines, and characters in a file.

## Requirements

- A C compiler such as GCC
- Windows, Linux, or macOS

## Compile

Compile a program with:

```bash
gcc copy.c -o copy
```

Replace `copy.c` and `copy` with the program and output name you want to build.

On Windows with GCC, you can use:

```powershell
gcc copy.c -o copy.exe
```

## Usage

```bash
./copy input.txt output.txt
./line_number input.txt
./reverse_line input.txt reversed.txt
./upper_case input.txt uppercase.txt
./words input.txt
```

On Windows, run the `.exe` versions, for example:

```powershell
.\words.exe sample.txt
```

## Example Files

- `sample.txt` is an input file for testing.
- `copy.txt` can be used as a destination or output file.

## Learning Goals

This project practices:

- Opening and closing files with `fopen` and `fclose`
- Reading and writing characters and lines
- Processing command-line arguments
- Using standard C libraries such as `stdio.h`, `ctype.h`, and `string.h`
- Handling file and input errors
