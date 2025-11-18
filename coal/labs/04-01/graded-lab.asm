.model small
.stack 0x100
.data
     num1 dw 0x1205
     num2 dw 0x0A3F
     num3 dw 0x00FF
     num4 dw 0x0B20
     .code
main proc
    mov ax, @data
    mov ds, ax
                
    mov bx, 0x1000 ;offset
                
    ;store at memory 
    mov si, 0
    mov ax, num1
    mov [bx + si], ax
                
    add si, 2
    mov ax, num2
    mov [bx + si], ax
                
    add si, 2
    mov ax, num3
    mov [bx + si], ax
                
    add si, 2
    mov ax, num4
    mov [bx + si], ax
                 
    ;load first 2 numbers from memory 
    mov si, 0
    mov ax, [bx + si]  
    add si, 2
    mov dx, [bx + si]
    add si, 2 
                
    ;add first 2 numbers 
    add ax, dx
                
    ;load 3rd number from memory
    mov dx, [bx + si] 
    add si, 2
                
    ;subtract 3rd number from result
    sub ax, dx
                
    ;load 4th number from memory
    mov dx, [bx + si]
                 
    ;add 4th number to result and store in dx
    add dx, ax
main endp
.exit