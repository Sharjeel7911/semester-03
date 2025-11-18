;2. Write a program to calculate the average of all numbers stored in an array. 
.model small
.stack 0x100
.data
     arr db 0xaa, 0xbb, 0xcc, 0xdd, 0xee
     avg dw 0x0000
.code
main proc
    mov ax, @data
    mov ds, ax
            
    mov bx, offset arr
            
    mov cx, 5
    mov si, 0
             
    sumArray: 
             mov al, 0x00
             mov al, [bx + si]
             mov ah, 0x00                
             add dx, ax
             inc si 
    loop sumArray ;sum loop stored in dx
            
    mov ax, dx
    mov dl, 0x05
    div dl   
    mov avg, ax ;average stored in memory
main endp
.exit