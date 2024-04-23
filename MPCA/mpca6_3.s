
.data
Str: .asciz "NagaveniGowda"
Char: .asciz "a"
output1 :.asciz "FOUND"
output2 :.asciz "NOT FOUND"
.text
Ldr R0,=Str
Ldr R1,=Char
mov R5,#0
Ldrb R3,[R1]
Loop: Ldrb R2,[R0],#1
Cmp R2,#0
Beq Exit
Cmp R2,R3
Bne Loop
Add R5,R5,#1
B Loop 
cmp R5,#0
beq notfound
bne found


notfound : LDR r7,=output2
           swi 0x02
           swi 0x011
found : LDR r7,=output1
         swi 0x02
         swi 0x011


       
Exit:swi 0x011
.end