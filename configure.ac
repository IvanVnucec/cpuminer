AC_INIT([cpuminer], [1.0])

AM_INIT_AUTOMAKE([-Wall -Werror foreign subdir-objects])

AC_PROG_CC

# Check for libraries
AC_CHECK_LIB([curl], [curl_easy_setopt], [], [AC_MSG_ERROR("library curl not found")])
AC_CHECK_LIB([pthread], [pthread_create], [], [AC_MSG_ERROR("pthread is missing")])
AC_CHECK_LIB([jansson], [json_loads],     [], [AC_MSG_ERROR("library jansson not found")])

AC_DEFINE([HAVE_GETOPT_LONG], [1], [Description])

AC_CONFIG_HEADERS([config.h])

AC_CONFIG_FILES([
	Makefile
	src/Makefile
	test/Makefile
])
AC_OUTPUT
