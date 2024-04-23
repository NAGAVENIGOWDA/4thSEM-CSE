

LDR r0,=a
ldr r1,=0x09
ldr r2,=0x00
ldr r3,=0x00
ldr r4,=0x00

loop:
ldr r2,[r0]
cmp r2,#0
beq zero
bgt great
blt less

l1:
sub r1,r1,#1
add r0,r0,#4
cmp r1,#0
swieq 0x11
b loop

zero:
add r4,r4,#1
b l1

great:
add r5,r5,#1
b l1

less:
add r3,r3,#1
b l1

.data
a:.word 20,30,0,40,50,0,-2,-4,-9