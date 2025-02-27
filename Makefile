GCC = gcc
FLAGS = -lm
PROGRAMAS = laboratorio

laboratorio:
	$(GCC) laboratorio.c -o $@

clear:
	$(RM) $(PROGRAMAS)
