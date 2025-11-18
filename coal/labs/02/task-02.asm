;Write a program that calculates 6^6 by adding six to the accumulator six times.
.model small
.stack 0x100
.data
.code
main proc
    mov ax, 6
    add ax, 6
    add ax, 6
    add ax, 6
    add ax, 6
    add ax, 6
main endp 
.exit