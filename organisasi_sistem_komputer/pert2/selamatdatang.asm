   ; directive include
%include "asm_io.inc"

segment .data
   ; directive Dx
	welcome db 'Selamat Datang di Universitas Gunadarma', 0 ; string "Selamat Datang di Universitas Gunadarma"

segment .bss
   ; directive RESx

segment .text
   global _main
   _main:
      ; Routine “setup”
      enter  0, 0
      pusha

      ; Program Anda di bawah
      mov      eax,	welcome
      call     print_string


      ; Routine “cleanup”
      popa
      mov    eax, 0
      leave
      ret