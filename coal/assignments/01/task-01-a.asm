.model small
.stack 0x100
.data   
.code
main proc
    mov ax, 0x1ab0
    mov ds, ax
    mov [0x0133], 0x5650
    mov [0x0135], 0xab78
       
    mov ax, 0x3c80
    mov ds, ax   
    mov [0x0157], 0x8920
    mov [0x015e], 0xcdab
        
    mov ax, 0xa1b9
    mov ds, ax
    mov [0x12e7], 0x6710
    mov [0x12ee], 0x9240
        
    mov [0x12f0], 0xf066
    mov [0x12f2], 0x3050
    mov [0x12f4], 0x2312
    mov [0x12f6], 0x0045
        
    mov [0x130e], 0x89ee
   ;end of memory initialization
        
   ;ds: 0xAa1b9 si: 0x0024 di: 0x0032 bp: 0x0110 ss: 0x3C80 
   ;ax: 0xabcd bx: 0x12c2 cx: 0xfeed dx: 0x2032 es: 0x1ab0 

    mov si, 0x0024
    mov di, 0x0032
    mov bp, 0x0110
        
    mov ax, 0xA1B9
    mov ds, ax
    mov ax, 0x3C80
    mov ss, ax
    mov ax, 0x1AB0
    mov es, ax 
        
    mov ax, 0xABCD
    mov bx, 0x12C2
    mov cx, 0xFEED
    mov dx, 0x2032     
        
    ;calculations
    mov [bx + si], cx       
    mov [bp + di + 0x0016], dx
    mov ax, [bx + di] 
    mov [bx + si + 9d], cx
    mov dx, ds: [bp + si + 0x11bc]
                       
main endp
.exit