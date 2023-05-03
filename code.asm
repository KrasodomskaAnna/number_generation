.686
.model flat
public _generator
.data
prev		dd 15
.code

_generator PROC
	push ebp
	mov ebp, esp

	push ebx

	mov eax, dword ptr prev
	mov ebx, 69069

	mov edx, 0
	mul ebx

	add eax, 1
	; eax := a * X[n-1] + c

	shr eax, 1
	mov prev, eax

	pop ebx
	pop ebp
	ret
_generator ENDP

END