all:
	@gcc -o do-op do_op.c
	./do-op
	./do-op 1 + 1
	./do-op 42amis - -20toto12
	./do-op 1 p 1
	./do-op 1 + toto3
	./do-op toto3 + 4
	./do-op foo plus bar
	./do-op 25 / 0
	./do-op 25 % 0
	./do-op foo + bar

clean:
	@rm -f do-op
