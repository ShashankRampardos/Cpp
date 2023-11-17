mvi A,0FFH
sta 0000H
mvi A,0FFH
sta 0001H
mvi C, 00H

LXI H,0000H
mov A,M
INX H
add M
INX H
jnc SKIP
inr C
SKIP: MOV M,A
INX H 
mov M,C
