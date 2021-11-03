; directive include
%include "asm_io.inc"

segment .data
pesan1 db "Masukkan angka 1: ",0
pesan2 db "Masukkan angka 2: ",0
pesankeluar1 db "Angka pertama yang Anda masukkan: ",0
pesankeluar2 db 0xA,"Angka kedua yang Anda masukkan: ", 0
   ; directive Dx
	
segment .bss
   ; directive RESx
satu_input resb 2
dua_input resb 2

segment .text
   global _main
   _main:
      ; Routine “setup”
      enter  0, 0
      pusha

      ; Program Anda di bawah
	mov eax, pesan1
	call print_string
	call read_int
	mov [satu_input], eax
	mov ebx,eax

	mov eax, pesan2
	call print_string
	call read_int
	mov [dua_input], eax
	
    ; output
	mov eax, pesankeluar1
	call print_string
	mov eax, ebx
	call print_int
	
	mov eax, pesankeluar2
	call print_string
	mov eax,[dua_input]
	call print_int
	

    ; Routine “cleanup”
    popa
    mov    eax, 0
    leave
    ret