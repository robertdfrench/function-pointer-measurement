test: with.exe without.exe inline.exe
	echo $^ | xargs -n1 -t -Ix time ./x

%.exe: %.c common.h
	gcc -o $@ $<

clean:
	rm -f *.exe
