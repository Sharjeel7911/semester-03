;6. Write a program that stores a 32-bit number and a 16-bit number into the current data segment at offsets 0x1000 and 0x1008, respectively. The program then subs these two numbers. 0xC0A1F02E, 0x45FA         
.model small
.stack 0x100
.data
     num1 dw 0xF02E ;lower word
     num2 dw 0xC0A1 ;upper word
     num3 dw 0x45FA ;second number
     lResult dw 0x0000
     uResult dw 0x0000
.code
main proc
    mov ax, @data
    mov ds, ax
            
    mov bx, 0x1000 ;offset
            
    ;store in memory
    mov si, 0
    mov ax, num2
    mov [bx + si], ax
            
    add si, 2
    mov ax, num1
    mov [bx + si], ax
            
    add si, 6
    mov ax, num3
    mov [bx + si], ax  
            
    ;load from memory and subtract
    mov si, 2
    mov ax, [bx + si]
    add si, 6
    mov dx, [bx + si]
    sub ax, dx  
            
    ;store in result variable
    mov dx, [bx]
    mov uResult, dx  ;stored at 0720:0000 memory(global variables)
    mov lResult, ax  ;stored at 0720:0000 memory(global variables)
main endp
.exit