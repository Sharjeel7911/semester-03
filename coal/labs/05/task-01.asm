;1. Write a program to reverse the array (e.g., if array = [1,2,3,4,5], result = [5,4,3,2,1])       
.model small
.stack 0x100
.data
     arr db 0xaa, 0xbb, 0xcc, 0xdd, 0xee
     temp db 0x00
.code
main proc
    mov ax, @data
    mov ds, ax
            
    mov bx, offset arr
            
    mov si, 0
    mov di, 4
            
    reverse: 
            cmp si, di
            jge end
              
            mov al, [bx + si]                
            mov temp, al
              
            mov al, [bx + di]                
            mov [bx + si], al
              
            mov al, temp                 
            mov [bx + di], al
              
            inc si
            dec di

    jmp reverse
                
    end:
main endp
.exit