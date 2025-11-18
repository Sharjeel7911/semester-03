;5. Write a program that multiplies a number (say table of 5) by repeated addition using a loop.
.model small
.stack 0x100
.data
.code
main proc
    mov ax, @data
    mov ds, ax 
            
    mov cx, 9
    mov dx, 0x0005
            
    mov ax, 0x0005
             
    table:
          add dx, ax
    loop table 
main endp
.exit