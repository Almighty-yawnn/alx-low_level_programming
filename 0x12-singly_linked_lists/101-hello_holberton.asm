section .data
    hello db "Hello, Holberton", 0xA, 0

section .text
    global _start

_start:
    ; call printf
    mov rdi, hello
    xor rax, rax
    call printf

    ; exit program
    xor eax, eax
    ret
