AM_CPPFLAGS = -I $(top_srcdir)/src

TESTS =
check_PROGRAMS =

TESTS += test_sha
check_PROGRAMS += test_sha
test_sha_SOURCES = test_sha.c $(top_srcdir)/src/cpu-miner.c $(top_srcdir)/src/sha2.c $(top_srcdir)/src/util.c
test_sha_LDADD =  -ljansson -lcurl -lpthread
