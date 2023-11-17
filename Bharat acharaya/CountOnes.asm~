mvi b,08H
mvi c,00h
lda 2007h
up: rlc
jnc skip
inr c
skip: dcr b
jnz up
mov a,c
sta 2008H