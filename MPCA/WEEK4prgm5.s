
ldr r0,=0xef1
ldr r1,=0x20

loop:
movs r0,r0,lsr #1
addcs r2,r2,#1
addcc r3,r3,#1
sub r1,r1,#1
cmp r1,#0
bne loop 
swi 0x11