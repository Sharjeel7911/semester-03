;7. Write an assembly program that takes two numbers (use variables), compares them, and jumps to either greater_label or smaller_label to display which one is greater. Store the greater value in DX          
.model small
.stack 0x100
.data
     num1 dw 0xffff
     num2 dw 0xeeee
.code
main proc
    mov ax, @data
    mov ds, ax
            
    mov ax, num1
    mov bx, num2
    
    cmp ax, bx
    jg greater    
            
    smaller:
            mov dx, bx
            jmp end
            
    greater:
            mov dx, ax  
            
    end:
main endp
.exit