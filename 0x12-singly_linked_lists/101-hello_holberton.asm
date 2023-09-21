section .data
    hello db "Hello, Holberton", 10  ; 10 is the ASCII code for newline
    hello_len equ $ - hello

section .text
    global main

extern printf

main:
    push rbp
    mov rdi, hello
    call printf
    pop rbp

    ; Exit the program
    mov rax, 60         ; syscall: exit
    xor rdi, rdi        ; status: 0
    syscall

