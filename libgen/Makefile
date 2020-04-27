CPPFLAGS := $(CPPFLAGS)

CPPFLAGS += -I.

LDFLAGS := $(LDFLAGS)

CFLAGS := $(CFLAGS)

CFLAGS += -std=gnu99 -Wall -Wextra -pedantic -g

TARGETS = test_basename_posix_elks test_dirname_posix_elks test_basename_posix test_basename_gnu test_dirname_posix basename dirname

OBJS = libgen.o test_libgen.o

all: $(TARGETS)

test_basename_posix_elks: test_basename_posix_elks.o libgen.o

test_basename_posix: test_basename_posix.o

test_basename_gnu: test_basename_gnu.o

test_dirname_posix_elks: test_dirname_posix_elks.o libgen.o

test_dirname_posix: test_dirname_posix.o

basename: basename.o

dirname: dirname.o

clean:
	@rm -f $(TARGETS) *.o
