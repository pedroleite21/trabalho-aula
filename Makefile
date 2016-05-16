freq: freq.c
	gcc -o freq freq.c

wc2: wc2.c
	gcc -o wc2 wc2.c

clean: 
	rm freq
	rm wc2
	rm freq.c.orig
	rm wc2.c.orig
