;3. Write a program that declares and initializes an array with 10 elements, then uses a loop to find the sum of those elements and stores the result in a variable named "SUM".  
.model small
.stack 0x100
.data
     arr db 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a
     sum dw 0x0000
.code
main proc
    mov ax, @data
    mov ds, ax
            
    mov bx, offset arr
            
    mov cx, 10
    mov si, 0
             
    addition: 
             mov al, 0x00
             mov al, [bx + si]
             mov ah, 0x00                
             add dx, ax
             inc si 
    loop addition ;sum loop stored in dx
            
    mov sum, dx ;sum stored in memory
main endp
.exit