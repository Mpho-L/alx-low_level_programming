section .data
    message db 'Hello, Holberton', 0
    format db "%s", 0

section .text
    extern printf

global main
main:
    ; Prepare the arguments for printf
    mov rdi, format
    mov rsi, message
    xor rax, rax  ; Clear rax to indicate no floating-point arguments

    ; Call printf
    call printf

    ; Exit the program
    mov eax, 0x60  ; System call number for exit
    xor edi, edi   ; Exit status 0
    syscall
