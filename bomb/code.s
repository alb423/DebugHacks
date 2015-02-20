
bomb:     file format elf32-littlearm


Disassembly of section .init:

000084a8 <_init>:
    84a8:	e92d4008 	push	{r3, lr}
    84ac:	eb000035 	bl	8588 <call_weak_fn>
    84b0:	e8bd8008 	pop	{r3, pc}

Disassembly of section .plt:

000084b4 <strcmp@plt-0x14>:
    84b4:	e52de004 	push	{lr}		; (str lr, [sp, #-4]!)
    84b8:	e59fe004 	ldr	lr, [pc, #4]	; 84c4 <_init+0x1c>
    84bc:	e08fe00e 	add	lr, pc, lr
    84c0:	e5bef008 	ldr	pc, [lr, #8]!
    84c4:	00008b3c 	.word	0x00008b3c

000084c8 <strcmp@plt>:
    84c8:	e28fc600 	add	ip, pc, #0, 12
    84cc:	e28cca08 	add	ip, ip, #8, 20	; 0x8000
    84d0:	e5bcfb3c 	ldr	pc, [ip, #2876]!	; 0xb3c

000084d4 <printf@plt>:
    84d4:	e28fc600 	add	ip, pc, #0, 12
    84d8:	e28cca08 	add	ip, ip, #8, 20	; 0x8000
    84dc:	e5bcfb34 	ldr	pc, [ip, #2868]!	; 0xb34

000084e0 <fopen@plt>:
    84e0:	e28fc600 	add	ip, pc, #0, 12
    84e4:	e28cca08 	add	ip, ip, #8, 20	; 0x8000
    84e8:	e5bcfb2c 	ldr	pc, [ip, #2860]!	; 0xb2c

000084ec <fgets@plt>:
    84ec:	e28fc600 	add	ip, pc, #0, 12
    84f0:	e28cca08 	add	ip, ip, #8, 20	; 0x8000
    84f4:	e5bcfb24 	ldr	pc, [ip, #2852]!	; 0xb24

000084f8 <__stack_chk_fail@plt>:
    84f8:	e28fc600 	add	ip, pc, #0, 12
    84fc:	e28cca08 	add	ip, ip, #8, 20	; 0x8000
    8500:	e5bcfb1c 	ldr	pc, [ip, #2844]!	; 0xb1c

00008504 <puts@plt>:
    8504:	e28fc600 	add	ip, pc, #0, 12
    8508:	e28cca08 	add	ip, ip, #8, 20	; 0x8000
    850c:	e5bcfb14 	ldr	pc, [ip, #2836]!	; 0xb14

00008510 <__libc_start_main@plt>:
    8510:	e28fc600 	add	ip, pc, #0, 12
    8514:	e28cca08 	add	ip, ip, #8, 20	; 0x8000
    8518:	e5bcfb0c 	ldr	pc, [ip, #2828]!	; 0xb0c

0000851c <__gmon_start__@plt>:
    851c:	e28fc600 	add	ip, pc, #0, 12
    8520:	e28cca08 	add	ip, ip, #8, 20	; 0x8000
    8524:	e5bcfb04 	ldr	pc, [ip, #2820]!	; 0xb04

00008528 <exit@plt>:
    8528:	e28fc600 	add	ip, pc, #0, 12
    852c:	e28cca08 	add	ip, ip, #8, 20	; 0x8000
    8530:	e5bcfafc 	ldr	pc, [ip, #2812]!	; 0xafc

00008534 <strlen@plt>:
    8534:	e28fc600 	add	ip, pc, #0, 12
    8538:	e28cca08 	add	ip, ip, #8, 20	; 0x8000
    853c:	e5bcfaf4 	ldr	pc, [ip, #2804]!	; 0xaf4

00008540 <__isoc99_sscanf@plt>:
    8540:	e28fc600 	add	ip, pc, #0, 12
    8544:	e28cca08 	add	ip, ip, #8, 20	; 0x8000
    8548:	e5bcfaec 	ldr	pc, [ip, #2796]!	; 0xaec

0000854c <abort@plt>:
    854c:	e28fc600 	add	ip, pc, #0, 12
    8550:	e28cca08 	add	ip, ip, #8, 20	; 0x8000
    8554:	e5bcfae4 	ldr	pc, [ip, #2788]!	; 0xae4

Disassembly of section .text:

00008558 <_start>:
    8558:	f04f 0b00 	mov.w	fp, #0
    855c:	f04f 0e00 	mov.w	lr, #0
    8560:	bc02      	pop	{r1}
    8562:	466a      	mov	r2, sp
    8564:	b404      	push	{r2}
    8566:	b401      	push	{r0}
    8568:	f8df c010 	ldr.w	ip, [pc, #16]	; 857c <_start+0x24>
    856c:	f84d cd04 	str.w	ip, [sp, #-4]!
    8570:	4803      	ldr	r0, [pc, #12]	; (8580 <_start+0x28>)
    8572:	4b04      	ldr	r3, [pc, #16]	; (8584 <_start+0x2c>)
    8574:	f7ff efcc 	blx	8510 <__libc_start_main@plt>
    8578:	f7ff efe8 	blx	854c <abort@plt>
    857c:	000089f5 	.word	0x000089f5
    8580:	00008635 	.word	0x00008635
    8584:	000089b5 	.word	0x000089b5

00008588 <call_weak_fn>:
    8588:	e59f3014 	ldr	r3, [pc, #20]	; 85a4 <call_weak_fn+0x1c>
    858c:	e59f2014 	ldr	r2, [pc, #20]	; 85a8 <call_weak_fn+0x20>
    8590:	e08f3003 	add	r3, pc, r3
    8594:	e7932002 	ldr	r2, [r3, r2]
    8598:	e3520000 	cmp	r2, #0
    859c:	012fff1e 	bxeq	lr
    85a0:	eaffffdd 	b	851c <__gmon_start__@plt>
    85a4:	00008a68 	.word	0x00008a68
    85a8:	0000003c 	.word	0x0000003c

000085ac <deregister_tm_clones>:
    85ac:	4b07      	ldr	r3, [pc, #28]	; (85cc <deregister_tm_clones+0x20>)
    85ae:	f241 0048 	movw	r0, #4168	; 0x1048
    85b2:	f2c0 0001 	movt	r0, #1
    85b6:	1a1b      	subs	r3, r3, r0
    85b8:	2b06      	cmp	r3, #6
    85ba:	d800      	bhi.n	85be <deregister_tm_clones+0x12>
    85bc:	4770      	bx	lr
    85be:	f240 0300 	movw	r3, #0
    85c2:	f2c0 0300 	movt	r3, #0
    85c6:	2b00      	cmp	r3, #0
    85c8:	d0f8      	beq.n	85bc <deregister_tm_clones+0x10>
    85ca:	4718      	bx	r3
    85cc:	0001104b 	.word	0x0001104b

000085d0 <register_tm_clones>:
    85d0:	f241 0348 	movw	r3, #4168	; 0x1048
    85d4:	f241 0048 	movw	r0, #4168	; 0x1048
    85d8:	f2c0 0301 	movt	r3, #1
    85dc:	f2c0 0001 	movt	r0, #1
    85e0:	1a1b      	subs	r3, r3, r0
    85e2:	109b      	asrs	r3, r3, #2
    85e4:	eb03 73d3 	add.w	r3, r3, r3, lsr #31
    85e8:	1059      	asrs	r1, r3, #1
    85ea:	d100      	bne.n	85ee <register_tm_clones+0x1e>
    85ec:	4770      	bx	lr
    85ee:	f240 0200 	movw	r2, #0
    85f2:	f2c0 0200 	movt	r2, #0
    85f6:	2a00      	cmp	r2, #0
    85f8:	d0f8      	beq.n	85ec <register_tm_clones+0x1c>
    85fa:	4710      	bx	r2

000085fc <__do_global_dtors_aux>:
    85fc:	b510      	push	{r4, lr}
    85fe:	f241 0454 	movw	r4, #4180	; 0x1054
    8602:	f2c0 0401 	movt	r4, #1
    8606:	7823      	ldrb	r3, [r4, #0]
    8608:	b91b      	cbnz	r3, 8612 <__do_global_dtors_aux+0x16>
    860a:	f7ff ffcf 	bl	85ac <deregister_tm_clones>
    860e:	2301      	movs	r3, #1
    8610:	7023      	strb	r3, [r4, #0]
    8612:	bd10      	pop	{r4, pc}

00008614 <frame_dummy>:
    8614:	f640 700c 	movw	r0, #3852	; 0xf0c
    8618:	f2c0 0001 	movt	r0, #1
    861c:	b508      	push	{r3, lr}
    861e:	6803      	ldr	r3, [r0, #0]
    8620:	b12b      	cbz	r3, 862e <frame_dummy+0x1a>
    8622:	f240 0300 	movw	r3, #0
    8626:	f2c0 0300 	movt	r3, #0
    862a:	b103      	cbz	r3, 862e <frame_dummy+0x1a>
    862c:	4798      	blx	r3
    862e:	e8bd 4008 	ldmia.w	sp!, {r3, lr}
    8632:	e7cd      	b.n	85d0 <register_tm_clones>

00008634 <main>:
    8634:	b580      	push	{r7, lr}
    8636:	b0c4      	sub	sp, #272	; 0x110
    8638:	af00      	add	r7, sp, #0
    863a:	1d3b      	adds	r3, r7, #4
    863c:	6018      	str	r0, [r3, #0]
    863e:	463b      	mov	r3, r7
    8640:	6019      	str	r1, [r3, #0]
    8642:	f241 0348 	movw	r3, #4168	; 0x1048
    8646:	f2c0 0301 	movt	r3, #1
    864a:	681b      	ldr	r3, [r3, #0]
    864c:	f8c7 310c 	str.w	r3, [r7, #268]	; 0x10c
    8650:	1d3b      	adds	r3, r7, #4
    8652:	681b      	ldr	r3, [r3, #0]
    8654:	2b01      	cmp	r3, #1
    8656:	d10a      	bne.n	866e <main+0x3a>
    8658:	f241 0350 	movw	r3, #4176	; 0x1050
    865c:	f2c0 0301 	movt	r3, #1
    8660:	681a      	ldr	r2, [r3, #0]
    8662:	f241 0358 	movw	r3, #4184	; 0x1058
    8666:	f2c0 0301 	movt	r3, #1
    866a:	601a      	str	r2, [r3, #0]
    866c:	e03a      	b.n	86e4 <main+0xb0>
    866e:	1d3b      	adds	r3, r7, #4
    8670:	681b      	ldr	r3, [r3, #0]
    8672:	2b02      	cmp	r3, #2
    8674:	d129      	bne.n	86ca <main+0x96>
    8676:	463b      	mov	r3, r7
    8678:	681b      	ldr	r3, [r3, #0]
    867a:	3304      	adds	r3, #4
    867c:	681b      	ldr	r3, [r3, #0]
    867e:	4618      	mov	r0, r3
    8680:	f648 2104 	movw	r1, #35332	; 0x8a04
    8684:	f2c0 0100 	movt	r1, #0
    8688:	f7ff ef2a 	blx	84e0 <fopen@plt>
    868c:	4602      	mov	r2, r0
    868e:	f241 0358 	movw	r3, #4184	; 0x1058
    8692:	f2c0 0301 	movt	r3, #1
    8696:	601a      	str	r2, [r3, #0]
    8698:	f241 0358 	movw	r3, #4184	; 0x1058
    869c:	f2c0 0301 	movt	r3, #1
    86a0:	681b      	ldr	r3, [r3, #0]
    86a2:	2b00      	cmp	r3, #0
    86a4:	d11e      	bne.n	86e4 <main+0xb0>
    86a6:	463b      	mov	r3, r7
    86a8:	681b      	ldr	r3, [r3, #0]
    86aa:	681a      	ldr	r2, [r3, #0]
    86ac:	463b      	mov	r3, r7
    86ae:	681b      	ldr	r3, [r3, #0]
    86b0:	3304      	adds	r3, #4
    86b2:	681b      	ldr	r3, [r3, #0]
    86b4:	f648 2008 	movw	r0, #35336	; 0x8a08
    86b8:	f2c0 0000 	movt	r0, #0
    86bc:	4611      	mov	r1, r2
    86be:	461a      	mov	r2, r3
    86c0:	f7ff ef08 	blx	84d4 <printf@plt>
    86c4:	2008      	movs	r0, #8
    86c6:	f7ff ef30 	blx	8528 <exit@plt>
    86ca:	463b      	mov	r3, r7
    86cc:	681b      	ldr	r3, [r3, #0]
    86ce:	681b      	ldr	r3, [r3, #0]
    86d0:	f648 2028 	movw	r0, #35368	; 0x8a28
    86d4:	f2c0 0000 	movt	r0, #0
    86d8:	4619      	mov	r1, r3
    86da:	f7ff eefc 	blx	84d4 <printf@plt>
    86de:	2008      	movs	r0, #8
    86e0:	f7ff ef22 	blx	8528 <exit@plt>
    86e4:	f648 2044 	movw	r0, #35396	; 0x8a44
    86e8:	f2c0 0000 	movt	r0, #0
    86ec:	f7ff ef0a 	blx	8504 <puts@plt>
    86f0:	f107 030c 	add.w	r3, r7, #12
    86f4:	4618      	mov	r0, r3
    86f6:	f000 f929 	bl	894c <read_line>
    86fa:	f107 030c 	add.w	r3, r7, #12
    86fe:	4618      	mov	r0, r3
    8700:	f000 f86a 	bl	87d8 <phase_0>
    8704:	f648 206c 	movw	r0, #35436	; 0x8a6c
    8708:	f2c0 0000 	movt	r0, #0
    870c:	f7ff eefa 	blx	8504 <puts@plt>
    8710:	f107 030c 	add.w	r3, r7, #12
    8714:	4618      	mov	r0, r3
    8716:	f000 f919 	bl	894c <read_line>
    871a:	f107 030c 	add.w	r3, r7, #12
    871e:	4618      	mov	r0, r3
    8720:	f000 f870 	bl	8804 <phase_1>
    8724:	f648 20a0 	movw	r0, #35488	; 0x8aa0
    8728:	f2c0 0000 	movt	r0, #0
    872c:	f7ff eeea 	blx	8504 <puts@plt>
    8730:	f107 030c 	add.w	r3, r7, #12
    8734:	4618      	mov	r0, r3
    8736:	f000 f909 	bl	894c <read_line>
    873a:	f107 030c 	add.w	r3, r7, #12
    873e:	4618      	mov	r0, r3
    8740:	f000 f876 	bl	8830 <phase_2>
    8744:	f648 20b4 	movw	r0, #35508	; 0x8ab4
    8748:	f2c0 0000 	movt	r0, #0
    874c:	f7ff eeda 	blx	8504 <puts@plt>
    8750:	f107 030c 	add.w	r3, r7, #12
    8754:	4618      	mov	r0, r3
    8756:	f000 f8f9 	bl	894c <read_line>
    875a:	f107 030c 	add.w	r3, r7, #12
    875e:	4618      	mov	r0, r3
    8760:	f000 f896 	bl	8890 <phase_3>
    8764:	f648 20c8 	movw	r0, #35528	; 0x8ac8
    8768:	f2c0 0000 	movt	r0, #0
    876c:	f7ff eeca 	blx	8504 <puts@plt>
    8770:	f107 030c 	add.w	r3, r7, #12
    8774:	4618      	mov	r0, r3
    8776:	f000 f8e9 	bl	894c <read_line>
    877a:	f107 030c 	add.w	r3, r7, #12
    877e:	4618      	mov	r0, r3
    8780:	f000 f8c4 	bl	890c <phase_4>
    8784:	f648 20dc 	movw	r0, #35548	; 0x8adc
    8788:	f2c0 0000 	movt	r0, #0
    878c:	f7ff eeba 	blx	8504 <puts@plt>
    8790:	f648 20f0 	movw	r0, #35568	; 0x8af0
    8794:	f2c0 0000 	movt	r0, #0
    8798:	f7ff eeb4 	blx	8504 <puts@plt>
    879c:	2300      	movs	r3, #0
    879e:	4618      	mov	r0, r3
    87a0:	f241 0348 	movw	r3, #4168	; 0x1048
    87a4:	f2c0 0301 	movt	r3, #1
    87a8:	f8d7 210c 	ldr.w	r2, [r7, #268]	; 0x10c
    87ac:	681b      	ldr	r3, [r3, #0]
    87ae:	429a      	cmp	r2, r3
    87b0:	d001      	beq.n	87b6 <main+0x182>
    87b2:	f7ff eea2 	blx	84f8 <__stack_chk_fail@plt>
    87b6:	f507 7788 	add.w	r7, r7, #272	; 0x110
    87ba:	46bd      	mov	sp, r7
    87bc:	bd80      	pop	{r7, pc}
    87be:	bf00      	nop

000087c0 <explode_bomb>:
    87c0:	b580      	push	{r7, lr}
    87c2:	af00      	add	r7, sp, #0
    87c4:	f648 301c 	movw	r0, #35612	; 0x8b1c
    87c8:	f2c0 0000 	movt	r0, #0
    87cc:	f7ff ee9a 	blx	8504 <puts@plt>
    87d0:	2008      	movs	r0, #8
    87d2:	f7ff eeaa 	blx	8528 <exit@plt>
    87d6:	bf00      	nop

000087d8 <phase_0>:
    87d8:	b580      	push	{r7, lr}
    87da:	b084      	sub	sp, #16
    87dc:	af00      	add	r7, sp, #0
    87de:	6078      	str	r0, [r7, #4]
    87e0:	f648 332c 	movw	r3, #35628	; 0x8b2c
    87e4:	f2c0 0300 	movt	r3, #0
    87e8:	60fb      	str	r3, [r7, #12]
    87ea:	6878      	ldr	r0, [r7, #4]
    87ec:	68f9      	ldr	r1, [r7, #12]
    87ee:	f7ff ee6c 	blx	84c8 <strcmp@plt> 
    87f2:	4603      	mov	r3, r0
    87f4:	2b00      	cmp	r3, #0
    87f6:	d001      	beq.n	87fc <phase_0+0x24>
    87f8:	f7ff ffe2 	bl	87c0 <explode_bomb>
    87fc:	3710      	adds	r7, #16
    87fe:	46bd      	mov	sp, r7
    8800:	bd80      	pop	{r7, pc}
    8802:	bf00      	nop

00008804 <phase_1>:
    8804:	b580      	push	{r7, lr}
    8806:	b084      	sub	sp, #16
    8808:	af00      	add	r7, sp, #0
    880a:	6078      	str	r0, [r7, #4]
    880c:	f648 3334 	movw	r3, #35636	; 0x8b34
    8810:	f2c0 0300 	movt	r3, #0
    8814:	60fb      	str	r3, [r7, #12]
    8816:	6878      	ldr	r0, [r7, #4]
    8818:	68f9      	ldr	r1, [r7, #12]
    881a:	f7ff ee56 	blx	84c8 <strcmp@plt>
    881e:	4603      	mov	r3, r0
    8820:	2b00      	cmp	r3, #0
    8822:	d001      	beq.n	8828 <phase_1+0x24>
    8824:	f7ff ffcc 	bl	87c0 <explode_bomb>
    8828:	3710      	adds	r7, #16
    882a:	46bd      	mov	sp, r7
    882c:	bd80      	pop	{r7, pc}
    882e:	bf00      	nop

00008830 <phase_2>:
    8830:	b580      	push	{r7, lr}
    8832:	b08a      	sub	sp, #40	; 0x28
    8834:	af02      	add	r7, sp, #8
    8836:	6078      	str	r0, [r7, #4]
    8838:	f107 020c 	add.w	r2, r7, #12
    883c:	f107 0310 	add.w	r3, r7, #16
    8840:	f107 0114 	add.w	r1, r7, #20
    8844:	9100      	str	r1, [sp, #0]
    8846:	f107 0118 	add.w	r1, r7, #24
    884a:	9101      	str	r1, [sp, #4]
    884c:	6878      	ldr	r0, [r7, #4]
    884e:	f648 31c8 	movw	r1, #35784	; 0x8bc8
    8852:	f2c0 0100 	movt	r1, #0
    8856:	f7ff ee74 	blx	8540 <__isoc99_sscanf@plt>
    885a:	4603      	mov	r3, r0
    885c:	2b04      	cmp	r3, #4
    885e:	d001      	beq.n	8864 <phase_2+0x34>
    8860:	f7ff ffae 	bl	87c0 <explode_bomb>
    8864:	2300      	movs	r3, #0
    8866:	61fb      	str	r3, [r7, #28]
    8868:	e005      	b.n	8876 <phase_2+0x46>
    886a:	693b      	ldr	r3, [r7, #16]
    886c:	3301      	adds	r3, #1
    886e:	613b      	str	r3, [r7, #16]
    8870:	69fb      	ldr	r3, [r7, #28]
    8872:	3301      	adds	r3, #1
    8874:	61fb      	str	r3, [r7, #28]
    8876:	69fb      	ldr	r3, [r7, #28]
    8878:	2b09      	cmp	r3, #9
    887a:	ddf6      	ble.n	886a <phase_2+0x3a>
    887c:	693a      	ldr	r2, [r7, #16]
    887e:	697b      	ldr	r3, [r7, #20]
    8880:	429a      	cmp	r2, r3
    8882:	d001      	beq.n	8888 <phase_2+0x58>
    8884:	f7ff ff9c 	bl	87c0 <explode_bomb>
    8888:	3720      	adds	r7, #32
    888a:	46bd      	mov	sp, r7
    888c:	bd80      	pop	{r7, pc}
    888e:	bf00      	nop

00008890 <phase_3>:
    8890:	b580      	push	{r7, lr}
    8892:	b088      	sub	sp, #32
    8894:	af02      	add	r7, sp, #8
    8896:	6078      	str	r0, [r7, #4]
    8898:	f107 020c 	add.w	r2, r7, #12
    889c:	f107 0310 	add.w	r3, r7, #16
    88a0:	f107 0114 	add.w	r1, r7, #20
    88a4:	9100      	str	r1, [sp, #0]
    88a6:	6878      	ldr	r0, [r7, #4]
    88a8:	f648 31d4 	movw	r1, #35796	; 0x8bd4
    88ac:	f2c0 0100 	movt	r1, #0
    88b0:	f7ff ee46 	blx	8540 <__isoc99_sscanf@plt>
    88b4:	4603      	mov	r3, r0
    88b6:	2b03      	cmp	r3, #3
    88b8:	d001      	beq.n	88be <phase_3+0x2e>
    88ba:	f7ff ff81 	bl	87c0 <explode_bomb>
    88be:	68fb      	ldr	r3, [r7, #12]
    88c0:	2b28      	cmp	r3, #40	; 0x28
    88c2:	d004      	beq.n	88ce <phase_3+0x3e>
    88c4:	693a      	ldr	r2, [r7, #16]
    88c6:	697b      	ldr	r3, [r7, #20]
    88c8:	4413      	add	r3, r2
    88ca:	613b      	str	r3, [r7, #16]
    88cc:	e000      	b.n	88d0 <phase_3+0x40>
    88ce:	bf00      	nop
    88d0:	693a      	ldr	r2, [r7, #16]
    88d2:	697b      	ldr	r3, [r7, #20]
    88d4:	429a      	cmp	r2, r3
    88d6:	d001      	beq.n	88dc <phase_3+0x4c>
    88d8:	f7ff ff72 	bl	87c0 <explode_bomb>
    88dc:	3718      	adds	r7, #24
    88de:	46bd      	mov	sp, r7
    88e0:	bd80      	pop	{r7, pc}
    88e2:	bf00      	nop

000088e4 <fun4>:
    88e4:	b580      	push	{r7, lr}
    88e6:	b082      	sub	sp, #8
    88e8:	af00      	add	r7, sp, #0
    88ea:	6078      	str	r0, [r7, #4]
    88ec:	687b      	ldr	r3, [r7, #4]
    88ee:	2b00      	cmp	r3, #0
    88f0:	d101      	bne.n	88f6 <fun4+0x12>
    88f2:	2301      	movs	r3, #1
    88f4:	e006      	b.n	8904 <fun4+0x20>
    88f6:	687b      	ldr	r3, [r7, #4]
    88f8:	3b01      	subs	r3, #1
    88fa:	4618      	mov	r0, r3
    88fc:	f7ff fff2 	bl	88e4 <fun4>
    8900:	4603      	mov	r3, r0
    8902:	005b      	lsls	r3, r3, #1
    8904:	4618      	mov	r0, r3
    8906:	3708      	adds	r7, #8
    8908:	46bd      	mov	sp, r7
    890a:	bd80      	pop	{r7, pc}

0000890c <phase_4>:
    890c:	b580      	push	{r7, lr}
    890e:	b084      	sub	sp, #16
    8910:	af00      	add	r7, sp, #0
    8912:	6078      	str	r0, [r7, #4]
    8914:	f107 030c 	add.w	r3, r7, #12
    8918:	6878      	ldr	r0, [r7, #4]
    891a:	f648 31e0 	movw	r1, #35808	; 0x8be0
    891e:	f2c0 0100 	movt	r1, #0
    8922:	461a      	mov	r2, r3
    8924:	f7ff ee0c 	blx	8540 <__isoc99_sscanf@plt>
    8928:	4603      	mov	r3, r0
    892a:	2b01      	cmp	r3, #1
    892c:	d001      	beq.n	8932 <phase_4+0x26>
    892e:	f7ff ff47 	bl	87c0 <explode_bomb>
    8932:	68fb      	ldr	r3, [r7, #12]
    8934:	4618      	mov	r0, r3
    8936:	f7ff ffd5 	bl	88e4 <fun4>
    893a:	4603      	mov	r3, r0
    893c:	f5b3 6f80 	cmp.w	r3, #1024	; 0x400
    8940:	d001      	beq.n	8946 <phase_4+0x3a>
    8942:	f7ff ff3d 	bl	87c0 <explode_bomb>
    8946:	3710      	adds	r7, #16
    8948:	46bd      	mov	sp, r7
    894a:	bd80      	pop	{r7, pc}

0000894c <read_line>:
    894c:	b580      	push	{r7, lr}
    894e:	b082      	sub	sp, #8
    8950:	af00      	add	r7, sp, #0
    8952:	6078      	str	r0, [r7, #4]
    8954:	f241 0358 	movw	r3, #4184	; 0x1058
    8958:	f2c0 0301 	movt	r3, #1
    895c:	681b      	ldr	r3, [r3, #0]
    895e:	6878      	ldr	r0, [r7, #4]
    8960:	f44f 7180 	mov.w	r1, #256	; 0x100
    8964:	461a      	mov	r2, r3
    8966:	f7ff edc2 	blx	84ec <fgets@plt>
    896a:	4603      	mov	r3, r0
    896c:	2b00      	cmp	r3, #0
    896e:	d114      	bne.n	899a <read_line+0x4e>
    8970:	f241 0350 	movw	r3, #4176	; 0x1050
    8974:	f2c0 0301 	movt	r3, #1
    8978:	681a      	ldr	r2, [r3, #0]
    897a:	f241 0358 	movw	r3, #4184	; 0x1058
    897e:	f2c0 0301 	movt	r3, #1
    8982:	601a      	str	r2, [r3, #0]
    8984:	f241 0358 	movw	r3, #4184	; 0x1058
    8988:	f2c0 0301 	movt	r3, #1
    898c:	681b      	ldr	r3, [r3, #0]
    898e:	6878      	ldr	r0, [r7, #4]
    8990:	f44f 7180 	mov.w	r1, #256	; 0x100
    8994:	461a      	mov	r2, r3
    8996:	f7ff edaa 	blx	84ec <fgets@plt>
    899a:	6878      	ldr	r0, [r7, #4]
    899c:	f7ff edca 	blx	8534 <strlen@plt>
    89a0:	4603      	mov	r3, r0
    89a2:	3b01      	subs	r3, #1
    89a4:	687a      	ldr	r2, [r7, #4]
    89a6:	4413      	add	r3, r2
    89a8:	2200      	movs	r2, #0
    89aa:	701a      	strb	r2, [r3, #0]
    89ac:	3708      	adds	r7, #8
    89ae:	46bd      	mov	sp, r7
    89b0:	bd80      	pop	{r7, pc}
    89b2:	bf00      	nop

000089b4 <__libc_csu_init>:
    89b4:	e92d 43f8 	stmdb	sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    89b8:	4607      	mov	r7, r0
    89ba:	4e0c      	ldr	r6, [pc, #48]	; (89ec <__libc_csu_init+0x38>)
    89bc:	4688      	mov	r8, r1
    89be:	4d0c      	ldr	r5, [pc, #48]	; (89f0 <__libc_csu_init+0x3c>)
    89c0:	4691      	mov	r9, r2
    89c2:	447e      	add	r6, pc
    89c4:	f7ff ed70 	blx	84a8 <_init>
    89c8:	447d      	add	r5, pc
    89ca:	1b76      	subs	r6, r6, r5
    89cc:	10b6      	asrs	r6, r6, #2
    89ce:	d00a      	beq.n	89e6 <__libc_csu_init+0x32>
    89d0:	3d04      	subs	r5, #4
    89d2:	2400      	movs	r4, #0
    89d4:	3401      	adds	r4, #1
    89d6:	f855 3f04 	ldr.w	r3, [r5, #4]!
    89da:	4638      	mov	r0, r7
    89dc:	4641      	mov	r1, r8
    89de:	464a      	mov	r2, r9
    89e0:	4798      	blx	r3
    89e2:	42b4      	cmp	r4, r6
    89e4:	d1f6      	bne.n	89d4 <__libc_csu_init+0x20>
    89e6:	e8bd 83f8 	ldmia.w	sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    89ea:	bf00      	nop
    89ec:	00008542 	.word	0x00008542
    89f0:	00008538 	.word	0x00008538

000089f4 <__libc_csu_fini>:
    89f4:	4770      	bx	lr
    89f6:	bf00      	nop

Disassembly of section .fini:

000089f8 <_fini>:
    89f8:	e92d4008 	push	{r3, lr}
    89fc:	e8bd8008 	pop	{r3, pc}
