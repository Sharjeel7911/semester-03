;8. Find the largest number in the array, store the number in variable named “max”. 
.model small
.stack 0x100
.data
     arr dw 0x0050, 0x0030, 0x0077, 0x0022, 0x0099
     max dw 0x0000
.code
main proc
    mov ax, @data
    mov ds, ax 
            
    mov si, 0
    mov ax, arr[si]
    mov max, ax
    
    mov si, 2
    mov cx, 4        
            
    counter:
            mov ax, arr[si]
            cmp ax, max
            jge skip
            mov max, ax
               
            skip:
                 add si, 2 
    loop counter
main endp
.exit