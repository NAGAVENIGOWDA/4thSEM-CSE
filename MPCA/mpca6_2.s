.data
src :.asciz "Nagaveni"
dst :.asciz "Gowda"

.text
Start: Ldr R1,=src
Ldr R0,=dst
copy:
Ldrb R2,[R1],#1
Strb R2,[R0],#1
Cmp R2,#0
Bne copy 
Ldr R0,=src
Swi 0x02
Ldr R0,=dst
Swi 0x02
Swi 0x11
.end