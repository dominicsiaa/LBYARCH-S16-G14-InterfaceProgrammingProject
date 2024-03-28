section .text
bits 64
default rel

global asm_sdot

asm_sdot:
    movss xmm12, [rdx]
    movss xmm13, [r8]
        
    vmulss xmm7, xmm12, xmm13
    addss xmm6, xmm7
        
    add rdx, 4
    add r8, 4
    
    loop asm_sdot

    movss xmm0, xmm6
    ret