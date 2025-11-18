;2.	Write a program that stores the given two 32-bit numbers into the current data segment at offset: 0x1000 and 0x1008, respectively. The program then calculates the sum of these numbers and stores it at the offset: 0x1010. ->Numbers: 0x1F540398, 0xC0A1F02E.  
.model small
.stack 0x100
.data
     num1 dw 0x0398 ;lower word
     num2 dw 0x1f54 ;upper word
     num3 dw 0xf02e ;lower word
     num4 dw 0xc0a1 ;upper word
.code
main proc
    mov ax, @data
    mov ds, ax
            
    mov bx, 0x1000  ;offset
            
    ;store in memory
    mov si, 0
    mov ax, num2
    mov [bx + si], ax
            
    add si, 2
    mov ax, num1
    mov [bx + si], ax
            
    add si, 6
    mov ax, num4
    mov [bx + si], ax
            
    add si, 2
    mov ax, num3
    mov [bx + si], ax 
            
    ;load lower words from memory and sum
    mov si, 2
    mov ax, [bx + si]
    add si, 8
    mov dx, [bx + si]
    add ax, dx
    mov [bx + 0xc], ax
            
    ;load lower words from memory and sum
    mov si, 0
    mov ax, [bx + si]
    add si, 8
    mov dx, [bx + si]
    adc ax, dx
    mov [bx + 0xa], ax  
main endp
.exit