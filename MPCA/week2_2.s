.data 
a: .hword 10,20,30,40,50
b: .hword 0,0,0,0

.text
LDR R0,=a 
LDR R1,=b 
MOV R3,#5 
BACK: LDRH R4,[R0]
      ADD R0,R0,#2
      STRH R4,[R1] 
      ADD R1,R1,#2 
      SUBS R3,R3,#1
      BNE BACK
.end