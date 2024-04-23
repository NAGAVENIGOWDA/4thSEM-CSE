 
.text
LDR r1,=0b01010101010101001111111101011100
MOV r5,#0
MOV r6,#0

MOV r0,#0
loop:
ldr r2,[r1]
cmp r2,#0
addgt r5,r5,#1
addeq r6,r6,#1
add r1 ,r1,#4
add r0,r0,#1
cmp r0,#32
bne loop

done:


1