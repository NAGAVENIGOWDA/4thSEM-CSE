;generate fibonacci series 

.data
A :.word 0,0,0,0,0,0,0,0,0,0
.text
MOV r7,#8
LDR R11,=A
MOV R1,#0
MOV r2,#1
STR R1,[R11]
ADD R11,R11,#4
STR R2,[R11]
ADD R11,R11,#4
ADD R3,R1,r2



