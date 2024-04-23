.text
MOVS R1,#-10
MRS R0,CPSR ; Take a copy of the CPSR.
AND R0,R0,#0000 ; Clear the mode bits.
MSR CPSR_F,R0 ; Write back the modified CPSR.
.end