geneticomake:
	gcc principal.c funcoes_benchmark.c gerador_numeros.c ag.c -o saida.out -lm

clean:
	rm saida.out
