 ;binary search on sorted array   
.model small
.stack 0x100
.data
     arr db 0x50, 0x65, 0x77, 0x82, 0x85, 0x88, 0x90, 0x96, 0x97, 0x99 
     min db 0x00
.code
main proc
    mov ax, @data
    mov ds, ax 
            
    mov dl, 0x97 ;value to search
    mov si, 0x0000 ;left pointer
    mov di, 0x0009 ;right pointer
            
    binarySearch: 
                 ;check loop condition
                 cmp si, di
                 jg notFound 
                  
                 ;find mdpoint mid = (si + di) / 2
                 mov ax, si
                 add ax, di
                 mov ah, 0
                 mov bx, 0x0002
                 shr ax, 1 ;div can't be used cause it won't correctly calculate integer division
                 mov bx, ax
                  
                 ;compare value to the mid value
                 mov al, [arr + bx] 
                 cmp dl, al
                 je mid
                  
                 ja right ;jg can't be used cause it is used for signed values
                  
                 jb left  ;jl can't be used cause it is used for signed values 
             
                 mid:
                     mov min, al
                     mov dl, al 
                     jmp end
                  
                 right: 
                       inc bx
                       mov si, bx
                       jmp binarySearch
                    
                 left:
                      dec bx
                      mov di, bx
                      jmp binarySearch 
                    
                 notFound:
                          mov min, 0FFh            
    end:    
main endp
.exit