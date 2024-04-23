.data 
a: .byte 10,20,30,40,50
b: .byte 0,0,0,0

.text
LDR R0,=a 
LDR R1,=b 
MOV R3,#5 
BACK: LDRB R4,[R0]
      ADD R0,R0,#1
      STRB R4,[R1] 
      ADD R1,R1,#1
      SUBS R3,R3,#1
      BNE BACK
.end