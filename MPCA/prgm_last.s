.text
    MOVS r0, #0
    cmp r0, #0
    moveq r1,#1
    BEQ L1
    MOVMi r1,#3
    BMI L1
    MOV r1,#2
    L1: SWI 0x1011

.end