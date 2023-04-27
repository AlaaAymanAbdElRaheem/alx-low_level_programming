section .data
    msg db "Hello, Holberton", 0Ah, 00

section .text
    global main
    extern printf

main:
    push msg
    call printf
    add rsp, 8
    mov eax, 0
    xor eax, eax
    ret
