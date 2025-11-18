;The "HLT" has a machine code of "0xF4". Insert this instruction before the first instruction of your program implemented in Task-1. 
.model small
.stack 0x100
.data  
.code
main proc 
    hlt
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