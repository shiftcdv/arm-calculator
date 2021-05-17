.global asm_add
asm_add:
	PUSH {LR}
	ADD R0, R0, R1
	POP {PC}

.global asm_sub
asm_sub:
	PUSH {LR}
	SUB R0, R0, R1
	POP {PC}

.global asm_mul
asm_mul:
	PUSH {LR}
	MUL R0, R0, R1
	POP {PC}

.global asm_div
asm_div:
	PUSH {LR}
	PUSH {R4}
	MOV R4, #0

loop:
	ADD R4, R4, #1
	SUB R0, R0, R1
	CMP R0, #0
	BLE exit
	BAL loop

exit:
	MOV R0, R4
	POP {R4}
	POP {PC}

