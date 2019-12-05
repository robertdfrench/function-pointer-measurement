test: $(patsubst %.c,%.exe,$(shell ls *.c))
	echo $^ | xargs -n1 -t -Ix time ./x

%.exe: %.c common.h
	gcc -o $@ $<

clean:
	rm -f *.exe
