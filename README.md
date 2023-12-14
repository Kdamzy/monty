# Monty

Monty 0.98 is a scripting language akin to Python, initially compiled into Monty byte codes. It operates on a distinctive stack, employing specific instructions for stack manipulation. The primary objective of this project is to develop an interpreter for Monty ByteCodes files.

Monty Byte Code Files
Monty byte code files commonly bear the .m extension, a standard adopted by most of the industry, although not mandated by the language specification. Each line in these files contains at most one instruction. The opcode and its argument can be accompanied by any number of spaces before or after, allowing for flexible formatting

```
 push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$

```

Monty byte code files can contain blank lines (empty or made of spaces only, and any additional text after the opcode or its required argument is not taken into account):

```
push 0 Push 0 onto the stack$
push 1 Push 1 onto the stack$
$
push 2$
  push 3$
                   pall    $
$
$
                           $
push 4$
$
    push 5    $
      push    6        $
$
pall This is the end of our program. Monty is awesome!$

```

# Usage

All the files are compiled in the following form:

### Compilation
```
 gcc -Wall -Werror -Wextra -pedantic *.c -o monty.

```
# AUTHOR
kolajidedamilare(kdamzy)
Adeyemi Adeyinka(adeyinka0804)