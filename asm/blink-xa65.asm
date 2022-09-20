* = $8000

reset:                    ; this is the code at $8000
  lda #$ff
  sta $6002

  lda #$50
  sta $6000

loop:
  ror
  lda #$55
  sta $6000

  jmp loop
endprog:                  ; this label marks the end of code

* = $fffc
  .dsb (* - endprog), 0
; yes, set it again
* = $fffc

; this is the code at $fffc
  .word reset
  .word $0000