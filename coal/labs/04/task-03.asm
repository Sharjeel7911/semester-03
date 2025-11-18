;3.	Write code that set both PF and ZF.  
.model small
.stack 0x100
.data
.code
main proc
    mov al, 0xff
    sub al, 0xff  
main endp
.exit