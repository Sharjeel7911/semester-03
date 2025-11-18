.model small
.stack 0x100
.data
     ;values = b = 0xffffffff, q = 0x12345678 
     ;allocate 64 bit array for 'b' and 32 bit array for 'q'
     b db 0xf9, 0xde, 0xbc, 0x1a, 0x00, 0x00, 0x00, 0x00
     q db 0x78, 0x56, 0x34, 0x12
     ;declared 'a' array of 8 bytes
     a db 8 dup(00)
     n db 32  
.code
main proc
    mov ax, @data
    mov ds, ax   
            
    mov cl, n ;loop counter
            
    ;get offsets of arrays 'b', 'q' & 'a'
    mov bx, offset b                    
    mov di, offset q
    mov si, offset a
            
    mainLoop: 
             ;check whether the lsb of 'q' is '1' or '0'
             mov al, [di]
             test al, 1
             ;if '0', skip to label 'skipAdd'
             jz skipAdd
                     
             ;else add bytes of 'a' & 'b' with carry 
             mov al, [bx + 0]
             add [si + 0], al
               
             mov al, [bx + 1]
             adc [si + 1], al
               
             mov al, [bx + 2]   
             adc [si + 2], al
              
             mov al, [bx + 3]
             adc [si + 3], al
               
             mov al, [bx + 4]
             adc [si + 4], al
               
             mov al, [bx + 5]   
             adc [si + 5], al
              
             mov al, [bx + 6]
             adc [si + 6], al
               
             mov al, [bx + 7]
             adc [si + 7], al
                
             skipAdd:     
                     ;shift 'b' from left and rotate with carry
                     shl [bx + 0], 1
                     rcl [bx + 1], 1
                     rcl [bx + 2], 1
                     rcl [bx + 3], 1
                     rcl [bx + 4], 1 
                     rcl [bx + 5], 1
                     rcl [bx + 6], 1
                     rcl [bx + 7], 1
                             
                     ;shift 'q' from right and rotate with carry 
                     shr [di + 3], 1
                     rcr [di + 2], 1
                     rcr [di + 1], 1
                     rcr [di + 0], 1    
                
    ;loop will run 32 times 
    dec cl
    jnz mainLoop   
main endp
.exit