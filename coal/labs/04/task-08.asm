;8. Take a variable in .data section, and calculate its table. (use loops).
.model small
.stack 0x100
.data
     num dw 0x0005
.code
main proc
    mov ax, @data
    mov ds, ax
            
    mov ax, num
    mov cx, 0x0009
           
    ;loop runs 9 times 
    loopTable:
              add ax, 0x0005
              loop loopTable
            
    ;save in memory variable
    mov num, ax
main endp
.exit