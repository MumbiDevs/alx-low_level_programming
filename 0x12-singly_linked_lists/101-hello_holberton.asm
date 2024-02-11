global main
extern printf

main:
    mov edi, format   ; Load the address of the format string into RDI
    xor eax, eax      ; Clear EAX register (no floating-point arguments)
    call printf       ; Call printf function
    xor eax, eax      ; Set return value to 0
    ret               ; Return from main

section .data
format db "Hello, Holberton", 10, 0  ; Define the format string, terminated with newline and null

