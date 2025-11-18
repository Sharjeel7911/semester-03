;1.	Write a program that subtracts two numbers so that the result is negative. Then perform another subtraction that gives zero in output and check the SF and ZF flags.
.model small
.stack 0x100
.data
     num1 db 0x05
     num2 db 0x08
     num3 db 0x06
     num4 db 0x06
.code
main proc
    mov ax, @data
    mov ds, ax
            
    ;first subtraction
    mov al, num1
    sub al, num2
            
    ;second subtraction
    mov al, num3
    sub al, num4 
main endp
.exit