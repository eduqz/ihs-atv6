SECTION .text
global sort
sort:
    push ebp
    mov ebp,esp
    mov edx,[ebp+12]

.loop1:
    mov esi,[ebp+8]
    mov ecx,[ebp+12]

.loop2:
    mov eax,[esi]
    mov ebx,[esi+4]
    cmp eax,ebx
    jg .skip

    mov [esi],ebx ;swap
    mov [esi+4],eax

.skip:
    add esi,4
    dec ecx
    cmp ecx,1
    ja .loop2
    dec edx
    ja .loop1

    mov eax,[ebp+8]

    mov esp,ebp
    pop ebp
    ret
