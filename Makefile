#lsb8:	lsb8.c
#	$(CC)gcc  -g lsb8.c -o lsb8 

#clean:
#	rm lsb8

ALL=cmp_enum_int  endian_ness  htonl  lsb8  offsetof  oom_killer_test  sizeof strlen strrev

all: $(ALL)

clean:
	rm -rf $(ALL)
