; directive include
%include "asm_io.inc"

segment .data
msg1 db "Masukkan sebuah angka: ",0
msg2 db "Anda memasukkan angka: ",0
   ; directive Dx
	
segment .bss
   ; directive RESx
input resb 2	

segment .text
   global _main
   _main:
      ; Routine “setup”
      enter  0, 0
      pusha

      ; Program Anda di bawah
	mov eax, msg1
	call print_string
	call read_int
	mov [input], eax
	mov eax, [input]
	mov eax,msg2
	call print_string
	mov eax, [input]
	call print_int
	

      ; Routine “cleanup”
      popa
      mov    eax, 0
      leave
      ret
