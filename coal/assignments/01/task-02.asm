;Write set of instructions to store 0x0BAD in memory at physical address 0x07DE1 
; 07DE : 0001
.model small
.stack 0x100
.data
.code
main proc
    ;a)	direct addressing mode    
    mov ax, 0x07de
    mov ds, ax        
    mov [0x0001], 0x0bad
        
    ;b)	register indirect addressing mode  
    mov ax, 0x07de
    mov ds, ax    
    mov ax, 0x0bad 
    mov bx, 0x0001     
    mov [bx], ax    
        
    ;c)	register relative base plus index addressing mode.    
    mov ax, 0x07de
    mov ds, ax  
    mov ax, 0x0bad
    mov bx, 0x0000
    mov si, 0x0000
    mov [bx + si + 0x1], ax                                
main endp
.exit