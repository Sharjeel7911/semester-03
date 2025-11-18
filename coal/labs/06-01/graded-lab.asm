;Write an assembly program that declares and initializes an array of 10 numbers. The program should count all even numbers in the array and store the result in a variable named EVEN_COUNT.           
.model small
.stack 0x100
.data
     ;an array of 10 elements
     array db 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a
     ;a variable to store total count of even number occurances
     EVEN_COUNT dw 0x0000
.code
main proc
    mov ax, @data 
    mov ds, ax ;initilize the data segment
                 
    mov dl, 0x02 ;move 2 into dl to divide
    mov cx, 10 ;loop counter
    mov si, 0 ;array index pointer
    mov bx, 0x0000 ;to store total number of occurances of even numbers 
                 
    evenCount:
              mov al, [array + si]
              mov ah, 0
              div dl ;divide by 2  
                           
              cmp ah, 0 ;compare to find if division by 2 gives any remainder
              jnz notCount ;if odd jmp
              inc bx
                              
                    ;label which will run if the pointer is on an odd number       
              notCount:
                       inc si
                 
    loop evenCount
                    
    ;load bx(total evens in array) into variable
    mov EVEN_COUNT, bx
main endp
.exit   