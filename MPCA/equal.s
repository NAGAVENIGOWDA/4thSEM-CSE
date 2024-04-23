.text 
             mov r0,#-8
             cmp r0,#0
             moveq r1,#1
             beq l1
             movmi r1,#3
             bmi l1
             mov r1,#2
             l1:swi 0x1011
            