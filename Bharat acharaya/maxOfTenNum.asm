lxi H,2000h
mvi a,09h
mvi b,0Ah
jump: cmp M
 jnc skip
mov A,M
skip: inx H
dcr B
jnz jump
sta 200BH
