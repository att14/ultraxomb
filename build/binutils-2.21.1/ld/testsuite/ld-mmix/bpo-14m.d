#source: start.s
#source: bpo-7.s
#source: areg-t.s
#as: -linker-allocated-gregs
#ld: -m mmo
#objdump: -st

# A BPO against an external symbol.

.*:     file format mmo

SYMBOL TABLE:
0+ g       \.text Main
0+ g       \.text _start
0+8 g       \.text areg

Contents of section \.text:
 0000 e3fd0001 234dfe00 fd040810           .*
Contents of section \.MMIX\.reg_contents:
 07f0 00000000 00000003                    .*
