 arm-none-linux-gnueabi-objdump -d ./10_argument_pass

./10_argument_pass:     file format elf32-littlearm


Disassembly of section .init:

00008520 <_init>:
    8520:	e92d4008 	push	{r3, lr}
    8524:	eb000020 	bl	85ac <call_gmon_start>
    8528:	e8bd8008 	pop	{r3, pc}

Disassembly of section .plt:

0000852c <.plt>:
    852c:	e52de004 	push	{lr}		; (str lr, [sp, #-4]!)
    8530:	e59fe004 	ldr	lr, [pc, #4]	; 853c <_init+0x1c>
    8534:	e08fe00e 	add	lr, pc, lr
    8538:	e5bef008 	ldr	pc, [lr, #8]!
    853c:	00008878 	.word	0x00008878
    8540:	e28fc600 	add	ip, pc, #0
    8544:	e28cca08 	add	ip, ip, #32768	; 0x8000
    8548:	e5bcf878 	ldr	pc, [ip, #2168]!	; 0x878
    854c:	e28fc600 	add	ip, pc, #0
    8550:	e28cca08 	add	ip, ip, #32768	; 0x8000
    8554:	e5bcf870 	ldr	pc, [ip, #2160]!	; 0x870
    8558:	e28fc600 	add	ip, pc, #0
    855c:	e28cca08 	add	ip, ip, #32768	; 0x8000
    8560:	e5bcf868 	ldr	pc, [ip, #2152]!	; 0x868
    8564:	e28fc600 	add	ip, pc, #0
    8568:	e28cca08 	add	ip, ip, #32768	; 0x8000
    856c:	e5bcf860 	ldr	pc, [ip, #2144]!	; 0x860

Disassembly of section .text:

00008570 <_start>:
    8570:	e3a0b000 	mov	fp, #0
    8574:	e3a0e000 	mov	lr, #0
    8578:	e49d1004 	pop	{r1}		; (ldr r1, [sp], #4)
    857c:	e1a0200d 	mov	r2, sp
    8580:	e52d2004 	push	{r2}		; (str r2, [sp, #-4]!)
    8584:	e52d0004 	push	{r0}		; (str r0, [sp, #-4]!)
    8588:	e59fc010 	ldr	ip, [pc, #16]	; 85a0 <_start+0x30>
    858c:	e52dc004 	push	{ip}		; (str ip, [sp, #-4]!)
    8590:	e59f000c 	ldr	r0, [pc, #12]	; 85a4 <_start+0x34>
    8594:	e59f300c 	ldr	r3, [pc, #12]	; 85a8 <_start+0x38>
    8598:	ebffffeb 	bl	854c <_init+0x2c>
    859c:	ebffffe7 	bl	8540 <_init+0x20>
    85a0:	00008af0 	.word	0x00008af0
    85a4:	000086a8 	.word	0x000086a8
    85a8:	00008af4 	.word	0x00008af4

000085ac <call_gmon_start>:
    85ac:	e59f3014 	ldr	r3, [pc, #20]	; 85c8 <call_gmon_start+0x1c>
    85b0:	e59f0014 	ldr	r0, [pc, #20]	; 85cc <call_gmon_start+0x20>
    85b4:	e08f3003 	add	r3, pc, r3
    85b8:	e7932000 	ldr	r2, [r3, r0]
    85bc:	e3520000 	cmp	r2, #0
    85c0:	012fff1e 	bxeq	lr
    85c4:	eaffffe3 	b	8558 <_init+0x38>
    85c8:	000087f8 	.word	0x000087f8
    85cc:	0000001c 	.word	0x0000001c

000085d0 <__do_global_dtors_aux>:
    85d0:	e59f3010 	ldr	r3, [pc, #16]	; 85e8 <__do_global_dtors_aux+0x18>
    85d4:	e5d32000 	ldrb	r2, [r3]
    85d8:	e3520000 	cmp	r2, #0
    85dc:	03a02001 	moveq	r2, #1
    85e0:	05c32000 	strbeq	r2, [r3]
    85e4:	e12fff1e 	bx	lr
    85e8:	00010de4 	.word	0x00010de4

000085ec <frame_dummy>:
    85ec:	e59f0020 	ldr	r0, [pc, #32]	; 8614 <frame_dummy+0x28>
    85f0:	e92d4008 	push	{r3, lr}
    85f4:	e5903000 	ldr	r3, [r0]
    85f8:	e3530000 	cmp	r3, #0
    85fc:	08bd8008 	popeq	{r3, pc}
    8600:	e59f3010 	ldr	r3, [pc, #16]	; 8618 <frame_dummy+0x2c>
    8604:	e3530000 	cmp	r3, #0
    8608:	08bd8008 	popeq	{r3, pc}
    860c:	e12fff33 	blx	r3
    8610:	e8bd8008 	pop	{r3, pc}
    8614:	00010c98 	.word	0x00010c98
	...

00008620 <func>:
    8620:	e92d4870 	push	{r4, r5, r6, fp, lr}
    8624:	e28db010 	add	fp, sp, #16
    8628:	e24dd044 	sub	sp, sp, #68	; 0x44
    862c:	e50b0018 	str	r0, [fp, #-24]
    8630:	e50b101c 	str	r1, [fp, #-28]
    8634:	e14b21be 	strh	r2, [fp, #-30]	; 0xffffffe2
    8638:	e54b301f 	strb	r3, [fp, #-31]
    863c:	e59f5060 	ldr	r5, [pc, #96]	; 86a4 <func+0x84>
    8640:	e15b41fe 	ldrsh	r4, [fp, #-30]	; 0xffffffe2
    8644:	e55b601f 	ldrb	r6, [fp, #-31]
    8648:	e59b000c 	ldr	r0, [fp, #12]
    864c:	eb0000fa 	bl	8a3c <__aeabi_f2d>
    8650:	e1a02000 	mov	r2, r0
    8654:	e1a03001 	mov	r3, r1
    8658:	e58d6000 	str	r6, [sp]
    865c:	e1cb00d4 	ldrd	r0, [fp, #4]
    8660:	e1cd00f8 	strd	r0, [sp, #8]
    8664:	e1cd21f0 	strd	r2, [sp, #16]
    8668:	e1cb21d4 	ldrd	r2, [fp, #20]
    866c:	e1cd21f8 	strd	r2, [sp, #24]
    8670:	e59b301c 	ldr	r3, [fp, #28]
    8674:	e58d3020 	str	r3, [sp, #32]
    8678:	e59b3020 	ldr	r3, [fp, #32]
    867c:	e58d3024 	str	r3, [sp, #36]	; 0x24
    8680:	e59b3024 	ldr	r3, [fp, #36]	; 0x24
    8684:	e58d3028 	str	r3, [sp, #40]	; 0x28
    8688:	e1a00005 	mov	r0, r5
    868c:	e51b1018 	ldr	r1, [fp, #-24]
    8690:	e51b201c 	ldr	r2, [fp, #-28]
    8694:	e1a03004 	mov	r3, r4
    8698:	ebffffb1 	bl	8564 <_init+0x44>
    869c:	e24bd010 	sub	sp, fp, #16
    86a0:	e8bd8870 	pop	{r4, r5, r6, fp, pc}
    86a4:	00008bcc 	.word	0x00008bcc

000086a8 <main>:
    86a8:	e92d4800 	push	{fp, lr}
    86ac:	e28db004 	add	fp, sp, #4
    86b0:	e24dd028 	sub	sp, sp, #40	; 0x28
    86b4:	e28f3054 	add	r3, pc, #84	; 0x54
    86b8:	e1c320d0 	ldrd	r2, [r3]
    86bc:	e1cd20f0 	strd	r2, [sp]
    86c0:	e59f3058 	ldr	r3, [pc, #88]	; 8720 <main+0x78>
    86c4:	e58d3008 	str	r3, [sp, #8]
    86c8:	e28f3048 	add	r3, pc, #72	; 0x48
    86cc:	e1c320d0 	ldrd	r2, [r3]
    86d0:	e1cd21f0 	strd	r2, [sp, #16]
    86d4:	e59f3048 	ldr	r3, [pc, #72]	; 8724 <main+0x7c>
    86d8:	e58d3018 	str	r3, [sp, #24]
    86dc:	e59f3044 	ldr	r3, [pc, #68]	; 8728 <main+0x80>
    86e0:	e58d301c 	str	r3, [sp, #28]
    86e4:	e59f3040 	ldr	r3, [pc, #64]	; 872c <main+0x84>
    86e8:	e58d3020 	str	r3, [sp, #32]
    86ec:	e3a00064 	mov	r0, #100	; 0x64
    86f0:	e59f1038 	ldr	r1, [pc, #56]	; 8730 <main+0x88>
    86f4:	e3a02005 	mov	r2, #5
    86f8:	e3a03041 	mov	r3, #65	; 0x41
    86fc:	ebffffc7 	bl	8620 <func>
    8700:	e3a03000 	mov	r3, #0
    8704:	e1a00003 	mov	r0, r3
    8708:	e24bd004 	sub	sp, fp, #4
    870c:	e8bd8800 	pop	{fp, pc}
    8710:	075bcd15 	.word	0x075bcd15
    8714:	00000000 	.word	0x00000000
    8718:	4a000000 	.word	0x4a000000
    871c:	41b1de78 	.word	0x41b1de78
    8720:	4048f5c3 	.word	0x4048f5c3
    8724:	00010ddc 	.word	0x00010ddc
    8728:	00010de0 	.word	0x00010de0
    872c:	00008c18 	.word	0x00008c18
    8730:	000088b8 	.word	0x000088b8
    8734:	e1a00000 	nop			; (mov r0, r0)

00008738 <__aeabi_drsub>:
    8738:	e2211102 	eor	r1, r1, #-2147483648	; 0x80000000
    873c:	ea000000 	b	8744 <__adddf3>

00008740 <__aeabi_dsub>:
    8740:	e2233102 	eor	r3, r3, #-2147483648	; 0x80000000

00008744 <__adddf3>:
    8744:	e92d4030 	push	{r4, r5, lr}
    8748:	e1a04081 	lsl	r4, r1, #1
    874c:	e1a05083 	lsl	r5, r3, #1
    8750:	e1340005 	teq	r4, r5
    8754:	01300002 	teqeq	r0, r2
    8758:	1194c000 	orrsne	ip, r4, r0
    875c:	1195c002 	orrsne	ip, r5, r2
    8760:	11f0cac4 	mvnsne	ip, r4, asr #21
    8764:	11f0cac5 	mvnsne	ip, r5, asr #21
    8768:	0a000079 	beq	8954 <__adddf3+0x210>
    876c:	e1a04aa4 	lsr	r4, r4, #21
    8770:	e0745aa5 	rsbs	r5, r4, r5, lsr #21
    8774:	b2655000 	rsblt	r5, r5, #0
    8778:	da000006 	ble	8798 <__adddf3+0x54>
    877c:	e0844005 	add	r4, r4, r5
    8780:	e0202002 	eor	r2, r0, r2
    8784:	e0213003 	eor	r3, r1, r3
    8788:	e0220000 	eor	r0, r2, r0
    878c:	e0231001 	eor	r1, r3, r1
    8790:	e0202002 	eor	r2, r0, r2
    8794:	e0213003 	eor	r3, r1, r3
    8798:	e3550036 	cmp	r5, #54	; 0x36
    879c:	88bd8030 	pophi	{r4, r5, pc}
    87a0:	e3110102 	tst	r1, #-2147483648	; 0x80000000
    87a4:	e1a01601 	lsl	r1, r1, #12
    87a8:	e3a0c601 	mov	ip, #1048576	; 0x100000
    87ac:	e18c1621 	orr	r1, ip, r1, lsr #12
    87b0:	0a000001 	beq	87bc <__adddf3+0x78>
    87b4:	e2700000 	rsbs	r0, r0, #0
    87b8:	e2e11000 	rsc	r1, r1, #0
    87bc:	e3130102 	tst	r3, #-2147483648	; 0x80000000
    87c0:	e1a03603 	lsl	r3, r3, #12
    87c4:	e18c3623 	orr	r3, ip, r3, lsr #12
    87c8:	0a000001 	beq	87d4 <__adddf3+0x90>
    87cc:	e2722000 	rsbs	r2, r2, #0
    87d0:	e2e33000 	rsc	r3, r3, #0
    87d4:	e1340005 	teq	r4, r5
    87d8:	0a000057 	beq	893c <__adddf3+0x1f8>
    87dc:	e2444001 	sub	r4, r4, #1
    87e0:	e275e020 	rsbs	lr, r5, #32
    87e4:	ba000005 	blt	8800 <__adddf3+0xbc>
    87e8:	e1a0ce12 	lsl	ip, r2, lr
    87ec:	e0900532 	adds	r0, r0, r2, lsr r5
    87f0:	e2a11000 	adc	r1, r1, #0
    87f4:	e0900e13 	adds	r0, r0, r3, lsl lr
    87f8:	e0b11553 	adcs	r1, r1, r3, asr r5
    87fc:	ea000006 	b	881c <__adddf3+0xd8>
    8800:	e2455020 	sub	r5, r5, #32
    8804:	e28ee020 	add	lr, lr, #32
    8808:	e3520001 	cmp	r2, #1
    880c:	e1a0ce13 	lsl	ip, r3, lr
    8810:	238cc002 	orrcs	ip, ip, #2
    8814:	e0900553 	adds	r0, r0, r3, asr r5
    8818:	e0b11fc3 	adcs	r1, r1, r3, asr #31
    881c:	e2015102 	and	r5, r1, #-2147483648	; 0x80000000
    8820:	5a000002 	bpl	8830 <__adddf3+0xec>
    8824:	e27cc000 	rsbs	ip, ip, #0
    8828:	e2f00000 	rscs	r0, r0, #0
    882c:	e2e11000 	rsc	r1, r1, #0
    8830:	e3510601 	cmp	r1, #1048576	; 0x100000
    8834:	3a00000e 	bcc	8874 <__adddf3+0x130>
    8838:	e3510602 	cmp	r1, #2097152	; 0x200000
    883c:	3a000006 	bcc	885c <__adddf3+0x118>
    8840:	e1b010a1 	lsrs	r1, r1, #1
    8844:	e1b00060 	rrxs	r0, r0
    8848:	e1a0c06c 	rrx	ip, ip
    884c:	e2844001 	add	r4, r4, #1
    8850:	e1a02a84 	lsl	r2, r4, #21
    8854:	e3720501 	cmn	r2, #4194304	; 0x400000
    8858:	2a000055 	bcs	89b4 <__adddf3+0x270>
    885c:	e35c0102 	cmp	ip, #-2147483648	; 0x80000000
    8860:	01b0c0a0 	lsrseq	ip, r0, #1
    8864:	e2b00000 	adcs	r0, r0, #0
    8868:	e0a11a04 	adc	r1, r1, r4, lsl #20
    886c:	e1811005 	orr	r1, r1, r5
    8870:	e8bd8030 	pop	{r4, r5, pc}
    8874:	e1b0c08c 	lsls	ip, ip, #1
    8878:	e0b00000 	adcs	r0, r0, r0
    887c:	e0a11001 	adc	r1, r1, r1
    8880:	e3110601 	tst	r1, #1048576	; 0x100000
    8884:	e2444001 	sub	r4, r4, #1
    8888:	1afffff3 	bne	885c <__adddf3+0x118>
    888c:	e3310000 	teq	r1, #0
    8890:	01a01000 	moveq	r1, r0
    8894:	03a00000 	moveq	r0, #0
    8898:	e16f3f11 	clz	r3, r1
    889c:	02833020 	addeq	r3, r3, #32
    88a0:	e243300b 	sub	r3, r3, #11
    88a4:	e2532020 	subs	r2, r3, #32
    88a8:	aa000007 	bge	88cc <__adddf3+0x188>
    88ac:	e292200c 	adds	r2, r2, #12
    88b0:	da000004 	ble	88c8 <__adddf3+0x184>
    88b4:	e282c014 	add	ip, r2, #20
    88b8:	e262200c 	rsb	r2, r2, #12
    88bc:	e1a00c11 	lsl	r0, r1, ip
    88c0:	e1a01231 	lsr	r1, r1, r2
    88c4:	ea000004 	b	88dc <__adddf3+0x198>
    88c8:	e2822014 	add	r2, r2, #20
    88cc:	d262c020 	rsble	ip, r2, #32
    88d0:	e1a01211 	lsl	r1, r1, r2
    88d4:	d1811c30 	orrle	r1, r1, r0, lsr ip
    88d8:	d1a00210 	lslle	r0, r0, r2
    88dc:	e0544003 	subs	r4, r4, r3
    88e0:	a0811a04 	addge	r1, r1, r4, lsl #20
    88e4:	a1811005 	orrge	r1, r1, r5
    88e8:	a8bd8030 	popge	{r4, r5, pc}
    88ec:	e1e04004 	mvn	r4, r4
    88f0:	e254401f 	subs	r4, r4, #31
    88f4:	aa00000d 	bge	8930 <__adddf3+0x1ec>
    88f8:	e294400c 	adds	r4, r4, #12
    88fc:	ca000005 	bgt	8918 <__adddf3+0x1d4>
    8900:	e2844014 	add	r4, r4, #20
    8904:	e2642020 	rsb	r2, r4, #32
    8908:	e1a00430 	lsr	r0, r0, r4
    890c:	e1800211 	orr	r0, r0, r1, lsl r2
    8910:	e1851431 	orr	r1, r5, r1, lsr r4
    8914:	e8bd8030 	pop	{r4, r5, pc}
    8918:	e264400c 	rsb	r4, r4, #12
    891c:	e2642020 	rsb	r2, r4, #32
    8920:	e1a00230 	lsr	r0, r0, r2
    8924:	e1800411 	orr	r0, r0, r1, lsl r4
    8928:	e1a01005 	mov	r1, r5
    892c:	e8bd8030 	pop	{r4, r5, pc}
    8930:	e1a00431 	lsr	r0, r1, r4
    8934:	e1a01005 	mov	r1, r5
    8938:	e8bd8030 	pop	{r4, r5, pc}
    893c:	e3340000 	teq	r4, #0
    8940:	e2233601 	eor	r3, r3, #1048576	; 0x100000
    8944:	02211601 	eoreq	r1, r1, #1048576	; 0x100000
    8948:	02844001 	addeq	r4, r4, #1
    894c:	12455001 	subne	r5, r5, #1
    8950:	eaffffa1 	b	87dc <__adddf3+0x98>
    8954:	e1f0cac4 	mvns	ip, r4, asr #21
    8958:	11f0cac5 	mvnsne	ip, r5, asr #21
    895c:	0a000018 	beq	89c4 <__adddf3+0x280>
    8960:	e1340005 	teq	r4, r5
    8964:	01300002 	teqeq	r0, r2
    8968:	0a000003 	beq	897c <__adddf3+0x238>
    896c:	e194c000 	orrs	ip, r4, r0
    8970:	01a01003 	moveq	r1, r3
    8974:	01a00002 	moveq	r0, r2
    8978:	e8bd8030 	pop	{r4, r5, pc}
    897c:	e1310003 	teq	r1, r3
    8980:	13a01000 	movne	r1, #0
    8984:	13a00000 	movne	r0, #0
    8988:	18bd8030 	popne	{r4, r5, pc}
    898c:	e1b0caa4 	lsrs	ip, r4, #21
    8990:	1a000003 	bne	89a4 <__adddf3+0x260>
    8994:	e1b00080 	lsls	r0, r0, #1
    8998:	e0b11001 	adcs	r1, r1, r1
    899c:	23811102 	orrcs	r1, r1, #-2147483648	; 0x80000000
    89a0:	e8bd8030 	pop	{r4, r5, pc}
    89a4:	e2944501 	adds	r4, r4, #4194304	; 0x400000
    89a8:	32811601 	addcc	r1, r1, #1048576	; 0x100000
    89ac:	38bd8030 	popcc	{r4, r5, pc}
    89b0:	e2015102 	and	r5, r1, #-2147483648	; 0x80000000
    89b4:	e385147f 	orr	r1, r5, #2130706432	; 0x7f000000
    89b8:	e381160f 	orr	r1, r1, #15728640	; 0xf00000
    89bc:	e3a00000 	mov	r0, #0
    89c0:	e8bd8030 	pop	{r4, r5, pc}
    89c4:	e1f0cac4 	mvns	ip, r4, asr #21
    89c8:	11a01003 	movne	r1, r3
    89cc:	11a00002 	movne	r0, r2
    89d0:	01f0cac5 	mvnseq	ip, r5, asr #21
    89d4:	11a03001 	movne	r3, r1
    89d8:	11a02000 	movne	r2, r0
    89dc:	e1904601 	orrs	r4, r0, r1, lsl #12
    89e0:	01925603 	orrseq	r5, r2, r3, lsl #12
    89e4:	01310003 	teqeq	r1, r3
    89e8:	13811702 	orrne	r1, r1, #524288	; 0x80000
    89ec:	e8bd8030 	pop	{r4, r5, pc}

000089f0 <__aeabi_ui2d>:
    89f0:	e3300000 	teq	r0, #0
    89f4:	03a01000 	moveq	r1, #0
    89f8:	012fff1e 	bxeq	lr
    89fc:	e92d4030 	push	{r4, r5, lr}
    8a00:	e3a04b01 	mov	r4, #1024	; 0x400
    8a04:	e2844032 	add	r4, r4, #50	; 0x32
    8a08:	e3a05000 	mov	r5, #0
    8a0c:	e3a01000 	mov	r1, #0
    8a10:	eaffff9d 	b	888c <__adddf3+0x148>

00008a14 <__aeabi_i2d>:
    8a14:	e3300000 	teq	r0, #0
    8a18:	03a01000 	moveq	r1, #0
    8a1c:	012fff1e 	bxeq	lr
    8a20:	e92d4030 	push	{r4, r5, lr}
    8a24:	e3a04b01 	mov	r4, #1024	; 0x400
    8a28:	e2844032 	add	r4, r4, #50	; 0x32
    8a2c:	e2105102 	ands	r5, r0, #-2147483648	; 0x80000000
    8a30:	42600000 	rsbmi	r0, r0, #0
    8a34:	e3a01000 	mov	r1, #0
    8a38:	eaffff93 	b	888c <__adddf3+0x148>

00008a3c <__aeabi_f2d>:
    8a3c:	e1b02080 	lsls	r2, r0, #1
    8a40:	e1a011c2 	asr	r1, r2, #3
    8a44:	e1a01061 	rrx	r1, r1
    8a48:	e1a00e02 	lsl	r0, r2, #28
    8a4c:	121234ff 	andsne	r3, r2, #-16777216	; 0xff000000
    8a50:	133304ff 	teqne	r3, #-16777216	; 0xff000000
    8a54:	1221130e 	eorne	r1, r1, #939524096	; 0x38000000
    8a58:	112fff1e 	bxne	lr
    8a5c:	e3320000 	teq	r2, #0
    8a60:	133304ff 	teqne	r3, #-16777216	; 0xff000000
    8a64:	012fff1e 	bxeq	lr
    8a68:	e92d4030 	push	{r4, r5, lr}
    8a6c:	e3a04d0e 	mov	r4, #896	; 0x380
    8a70:	e2015102 	and	r5, r1, #-2147483648	; 0x80000000
    8a74:	e3c11102 	bic	r1, r1, #-2147483648	; 0x80000000
    8a78:	eaffff83 	b	888c <__adddf3+0x148>

00008a7c <__aeabi_ul2d>:
    8a7c:	e1902001 	orrs	r2, r0, r1
    8a80:	012fff1e 	bxeq	lr
    8a84:	e92d4030 	push	{r4, r5, lr}
    8a88:	e3a05000 	mov	r5, #0
    8a8c:	ea000006 	b	8aac <__aeabi_l2d+0x1c>

00008a90 <__aeabi_l2d>:
    8a90:	e1902001 	orrs	r2, r0, r1
    8a94:	012fff1e 	bxeq	lr
    8a98:	e92d4030 	push	{r4, r5, lr}
    8a9c:	e2115102 	ands	r5, r1, #-2147483648	; 0x80000000
    8aa0:	5a000001 	bpl	8aac <__aeabi_l2d+0x1c>
    8aa4:	e2700000 	rsbs	r0, r0, #0
    8aa8:	e2e11000 	rsc	r1, r1, #0
    8aac:	e3a04b01 	mov	r4, #1024	; 0x400
    8ab0:	e2844032 	add	r4, r4, #50	; 0x32
    8ab4:	e1b0cb21 	lsrs	ip, r1, #22
    8ab8:	0affff5c 	beq	8830 <__adddf3+0xec>
    8abc:	e3a02003 	mov	r2, #3
    8ac0:	e1b0c1ac 	lsrs	ip, ip, #3
    8ac4:	12822003 	addne	r2, r2, #3
    8ac8:	e1b0c1ac 	lsrs	ip, ip, #3
    8acc:	12822003 	addne	r2, r2, #3
    8ad0:	e08221ac 	add	r2, r2, ip, lsr #3
    8ad4:	e2623020 	rsb	r3, r2, #32
    8ad8:	e1a0c310 	lsl	ip, r0, r3
    8adc:	e1a00230 	lsr	r0, r0, r2
    8ae0:	e1800311 	orr	r0, r0, r1, lsl r3
    8ae4:	e1a01231 	lsr	r1, r1, r2
    8ae8:	e0844002 	add	r4, r4, r2
    8aec:	eaffff4f 	b	8830 <__adddf3+0xec>

00008af0 <__libc_csu_fini>:
    8af0:	e12fff1e 	bx	lr

00008af4 <__libc_csu_init>:
    8af4:	e92d47f0 	push	{r4, r5, r6, r7, r8, r9, sl, lr}
    8af8:	e1a08000 	mov	r8, r0
    8afc:	e1a07001 	mov	r7, r1
    8b00:	e1a06002 	mov	r6, r2
    8b04:	ebfffe85 	bl	8520 <_init>
    8b08:	e59f30a4 	ldr	r3, [pc, #164]	; 8bb4 <__libc_csu_init+0xc0>
    8b0c:	e59f00a4 	ldr	r0, [pc, #164]	; 8bb8 <__libc_csu_init+0xc4>
    8b10:	e59fa0a4 	ldr	sl, [pc, #164]	; 8bbc <__libc_csu_init+0xc8>
    8b14:	e0639000 	rsb	r9, r3, r0
    8b18:	e08fa00a 	add	sl, pc, sl
    8b1c:	e1b09149 	asrs	r9, r9, #2
    8b20:	e08aa003 	add	sl, sl, r3
    8b24:	08bd87f0 	popeq	{r4, r5, r6, r7, r8, r9, sl, pc}
    8b28:	e3a04001 	mov	r4, #1
    8b2c:	e1a00008 	mov	r0, r8
    8b30:	e1a01007 	mov	r1, r7
    8b34:	e1a02006 	mov	r2, r6
    8b38:	e2495001 	sub	r5, r9, #1
    8b3c:	e1a0e00f 	mov	lr, pc
    8b40:	e59af000 	ldr	pc, [sl]
    8b44:	e1540009 	cmp	r4, r9
    8b48:	e0055004 	and	r5, r5, r4
    8b4c:	28bd87f0 	popcs	{r4, r5, r6, r7, r8, r9, sl, pc}
    8b50:	e3550000 	cmp	r5, #0
    8b54:	0a000007 	beq	8b78 <__libc_csu_init+0x84>
    8b58:	e1a00008 	mov	r0, r8
    8b5c:	e1a01007 	mov	r1, r7
    8b60:	e1a02006 	mov	r2, r6
    8b64:	e3a04002 	mov	r4, #2
    8b68:	e1a0e00f 	mov	lr, pc
    8b6c:	e59af004 	ldr	pc, [sl, #4]
    8b70:	e1540009 	cmp	r4, r9
    8b74:	28bd87f0 	popcs	{r4, r5, r6, r7, r8, r9, sl, pc}
    8b78:	e2845001 	add	r5, r4, #1
    8b7c:	e1a00008 	mov	r0, r8
    8b80:	e1a01007 	mov	r1, r7
    8b84:	e1a02006 	mov	r2, r6
    8b88:	e1a0e00f 	mov	lr, pc
    8b8c:	e79af104 	ldr	pc, [sl, r4, lsl #2]
    8b90:	e2854001 	add	r4, r5, #1
    8b94:	e1a00008 	mov	r0, r8
    8b98:	e1a01007 	mov	r1, r7
    8b9c:	e1a02006 	mov	r2, r6
    8ba0:	e1a0e00f 	mov	lr, pc
    8ba4:	e79af105 	ldr	pc, [sl, r5, lsl #2]
    8ba8:	e1540009 	cmp	r4, r9
    8bac:	3afffff1 	bcc	8b78 <__libc_csu_init+0x84>
    8bb0:	e8bd87f0 	pop	{r4, r5, r6, r7, r8, r9, sl, pc}
    8bb4:	fffffedc 	.word	0xfffffedc
    8bb8:	fffffee0 	.word	0xfffffee0
    8bbc:	00008294 	.word	0x00008294

Disassembly of section .fini:

00008bc0 <_fini>:
    8bc0:	e92d4008 	push	{r3, lr}
    8bc4:	e8bd8008 	pop	{r3, pc}
topview@topview-desktop:/media/Ex01/pelco/trunk/topview_app/spd_app/ptz_service$ 

