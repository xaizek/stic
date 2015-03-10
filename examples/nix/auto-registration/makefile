CC = gcc
FILES = suite.c test_fixture_one.c test_fixture_two.c ../../../src/stic.c
OBJ = $(FILES:.c=.o)
OUT_EXE = example
CFLAGS = -I ../../../src

pos = $(strip $(eval T := ) \
              $(eval i := 0) \
              $(foreach elem, $1, \
                        $(if $(filter $2,$(elem)), \
                             $(eval i := $(words $T)), \
                             $(eval T := $T $(elem)))) \
              $i)

build: $(OBJ)
	$(CC) -o $(OUT_EXE) $^

%.o: %.c $(dir %.c)/.
	$(CC) -c $(CFLAGS) -o $@ -DTESTID=$(call pos, $(OBJ), $@) \
	                         -DMAXTESTID=$(words $(OBJ)) $<

clean:
	rm -f *.o core

rebuild: clean build
