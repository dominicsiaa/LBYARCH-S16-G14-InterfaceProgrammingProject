section .text
bits 64
default rel

global asm_sdot

asm_sdot:
    pxor xmm0, xmm0
    sdot:
        movss xmm1, [rdx]
        movss xmm2, [r8]
        
        mulss xmm1, xmm2
        addss xmm0, xmm1
        
        add rdx, 4
        add r8, 4
        
    loop sdot
    ret