;6. Write a program that declares and initializes an array of 20 elements and then calculates the number of occurrences of a specific number in the array, Store the result in variable named “count”. 
.model small
.stack 0x100
.data
     arr dw 0x0001, 0x0002, 0x0003, 0x0004, 0x0005, 0x0006, 0x0007, 0x0008, 0x0009, 0x000a, 0x000b, 0x000c, 0x000d, 0x000e, 0x000f, 0x000a, 0x000a, 0x000a, 0x000a, 0x000a
     count dw 0x0000
.code
main proc
    mov ax, @data
    mov ds, ax
            
    mov ax, 0x000a
    mov cx, 20
    mov si, 0
             
    loopArray:
              cmp ax,[arr + si]
              jne skip
                    
              inc count        

              skip: ;skip label
                   add si, 2         
    loop loopArray   
main endp
.exit