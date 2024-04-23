
.data
str: .asciz "hello world"
char: .asciz "l"
.equ SWI_WriteC,0x02
.equ SWI_Exit,0x11
.text
Ldr R0,=str
Ldr R1,=char
mov R5,#00
Ldrb R3,[R1]
Loop:
Ldrb R2,[R0],#1
Cmp R2,#0
Beq Exit
Cmp R2,R3
Bne Loop
Add R5,R5,#1
B Loop
ldr r0, =str
swi SWI_WriteC
Exit:swi SWI_Exit
.end