#AM_CPPFLAGS += -I $(top_srcdir)/crypto/modes
#AM_CPPFLAGS += -I $(top_srcdir)/crypto/asn1
#AM_CPPFLAGS += -I $(top_srcdir)/crypto/x509
#AM_CPPFLAGS += -I $(top_srcdir)/ssl
#AM_CPPFLAGS += -I $(top_srcdir)/tls
#AM_CPPFLAGS += -I $(top_srcdir)/apps/openssl
#AM_CPPFLAGS += -I $(top_srcdir)/apps/openssl/compat
#AM_CPPFLAGS += -D_PATH_SSL_CA_FILE=\"$(top_srcdir)/apps/openssl/cert.pem\"

#LDADD = $(abs_top_builddir)/tls/.libs/libtls.a
#LDADD += $(abs_top_builddir)/ssl/.libs/libssl.a
#LDADD += $(abs_top_builddir)/crypto/.libs/libcrypto.a
#LDADD += $(PLATFORM_LDADD) $(PROG_LDADD)
#if HOST_ASM_MACOSX_X86_64
#LDADD += $(abs_top_builddir)/crypto/.libs/libcrypto_la-cpuid-macosx-x86_64.o
#endif

#TEST_LOG_DRIVER = env AM_TAP_AWK='$(AWK)' $(SHELL) $(top_srcdir)/tap-driver.sh

TESTS =
check_PROGRAMS =
#EXTRA_DIST = CMakeLists.txt
#DISTCLEANFILES = pidwraptest.txt

# aeadtest
TESTS += test_sha
check_PROGRAMS += test_sha
test_sha_SOURCES = test_sha.c
#EXTRA_DIST += aeadtest.sh
#EXTRA_DIST += aeadtests.txt
