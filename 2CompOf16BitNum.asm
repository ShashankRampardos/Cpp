lxi h,1000h
mvi c,00h
mov a,m
cma
adi 01h
sta 1002h
jnc here
inr c
here: sta 1002h
inx h
mov a,m
cma

add c
sta 1003h
