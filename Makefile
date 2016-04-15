ALL= model cmp_enum_int  endian_ness  htonl  lsb8  offsetof  oom_killer_test  sizeof strlen strrev swap bitwise_ops char_overflow typeof pointer_operations container_of

all: $(ALL)

clean:
	rm -rf $(ALL)
