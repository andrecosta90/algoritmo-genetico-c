geneticomake:
	gcc principal.c funcoes_benchmark.c gerador_numeros.c ag.c -o saida -lm

clean:
	rm saida
