;5. Write a program to implement the following equation. ->X = ~ 0xFF12 ^ {0xABFF & (0x2113 | 0x2340)}
.model small
.stack 0x100
.data
     num1 dw 0xFF12     
     num2 dw 0xABFF
     num3 dw 0x2113
     num4 dw 0x2340
     x dw 0x0000
.code
main proc
    mov ax, @data
    mov ds, ax
            
    mov ax, num3
    mov dx, num4
    or ax, dx                               
            
    mov dx, num2
    and ax, dx
            
    mov dx, num1
    xor ax, dx
    not ax
            
    mov x, ax 
main endp
.exit