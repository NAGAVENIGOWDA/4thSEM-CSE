; Write an ALP to check the given number has odd or even number  
;of 1s and display the result. (Even Parity and Odd Parity)

.DATA
	ODD:.ASCIZ "ODD PARITY NUMBER"
	EVEN:.ASCIZ "EVEN PARITY NUMBER"
	A:.WORD 0005
.TEXT
	LDR R2,=A
	LDR R3,[R2]
	MOV R6,#0
	MOV R4,#0
L2: TST R3,#1
	BNE L1
LOOP: MOV R3,R3,LSR #1
	ADD R6,R6,#1
	CMP R6,#32
		BNE L2
		TST R4,#1
		BEQ L3
		LDR R0,=ODD
		SWI 0X02
		B EXIT 
L3: LDR R0,=EVEN
	  SWI 0X02

EXIT: SWI 0X11
	L1:ADD R4,R4,#1
		B LOOP
.END
