;1. Write an assembly program to multiply AL by 2 using a shift instruction.  
.model small
.stack 0x100
.data
.code
main proc  
    mov ah, 0
    mov al, 0x0a
    shl al, 1
main endp
.exit   