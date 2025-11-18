;Write a program that stores the following numbers into the current data segment at offset: 0x1000 onwards.The program then calculates the sum of these numbers and stores it in the DX register, then stores the value of DX at the physical location: 0xCD1F3. (CD1F : 0003) ->Numbers: 0x1F01, 0xA0EF, 0x7704, 0x34B0, 0x2250         
.model small
.stack 100h
.data  
.code
main proc
    mov ax, 0x0720
    mov ds, ax 
           
    mov bx, 0x1000
    mov dx, 0
            
    mov ax, 0x1F01             
    mov [bx], ax
    add dx, ax

    mov ax, 0xA0EF            
    mov [bx + 2], ax
    add dx, ax
            
    mov ax, 0x7704             
    mov [bx + 4], ax
    add dx, ax
            
    mov ax, 0x34B0             
    mov [bx + 6], ax
    add dx, ax
            
    mov ax, 0x2250             
    mov [bx + 8], ax
    add dx, ax
            
    mov ax, 0xcd1f
    mov es, ax
            
    mov bx, 0x0003        
    mov es:[bx], dx
main endp
.exit