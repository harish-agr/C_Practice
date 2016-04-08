ALL=cmp_enum_int  endian_ness  htonl  lsb8  offsetof  oom_killer_test  sizeof strlen strrev swap

all: $(ALL)

clean:
	rm -rf $(ALL)
