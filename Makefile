GCC = gcc
FLAGS = -lm
PROGRAMAS = laboratorio.c

lab:
	$(GCC) $@.c laboratorio.c -o $@

clear:
	$(RM) $(PROGRAMAS)
