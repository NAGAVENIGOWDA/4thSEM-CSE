

.data
a: .asciz "HOW ARE YOU"
.text
ldr r0, =a
mov r1, #0 
loop:
ldrb r2, [r0], #1
cmp r2, #0
beq close
add r1,r1,#1
b loop
close: swi 0x011
.end