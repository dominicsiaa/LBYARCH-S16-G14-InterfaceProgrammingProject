section .text
bits 64
default rel

global asm_sdot

asm_sdot:
    pxor xmm6, xmm6
    pxor xmm7, xmm7
    sdot:
        movss xmm12, [rdx]
        movss xmm13, [r8]
        
        vmulss xmm7, xmm12, xmm13
        addss xmm6, xmm7
        
        add rdx, 4
        add r8, 4
    
    loop sdot
    movss xmm0, xmm6
    ret