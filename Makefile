a.out: main.cc calculator.s
	g++ main.cc calculator.s

clean:
	rm -rf core a.out *.o
