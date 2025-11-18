;9. Write an assembly program to store 10 numbers in an array and find the smallest number, store the number in variable named “min”.       
.model small
.stack 0x100
.data
     arr db 0x50, 0x65, 0x77, 0x82, 0x85, 0x88, 0x90, 0x96, 0x97, 0x99 
     min db 0x00 
.code
main proc
    mov ax, @data
    mov ds, ax 
           
    mov si, 1
    mov cx, 9    
    mov al, arr[0]      
    mov min, al
            
    minimum:               
            mov al, arr[si]      
            cmp al, min          
            jae skip     
            mov min, al
            
            skip:
                 inc si
    loop minimum 
main endp
.exit