

.data
a:.word 12312312, 42123123
b:.word 98798798, 23523122
c:.word 0
.text
ldr r0,=a
ldr r1,=b
ldr r3,=c
ldr r4,[r0],#4
ldr r5,[r1],#4
add r4,r4,r5
str r4,[r3],#4
ldr r4,[r0]
ldr r5,[r1]
add r4,r4,r5
str r4,[r3]
SWI 0x011
.end
