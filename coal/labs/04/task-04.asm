;4.	Write program that sub two 16-bit numbers stored in memory at offset x2000h and checks if ZF is set. If ZF = 1, store 1 at memory location 4000h; otherwise, store at 0x1000h.(use jmp)        
.model small
.stack 0x100
.data
     num1 dw 0x1234     
     num2 dw 0x1234
.code
main proc 
    mov ax, @data
    mov ds, ax 
            
    mov bx, 0x2000 ;offset
            
    ;store in memory
    mov ax, num1
    mov [bx], ax

    mov ax, num2
    mov [bx + 2], ax
            
    ;load from memory and subtract
    mov ax, [bx]        
    sub ax, [bx + 2]
             
    jz moveTo0x4000
             
    mov [bx - 0x1000], ax
    jmp end
             
    moveTo0x4000:
                 mov [bx + 0x2000], ax     
    end:
main endp
.exit