global isOdd
isOdd:
    mov     eax, edi
    not     eax
    and     eax, 1
    ret