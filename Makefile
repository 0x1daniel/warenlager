#
## Settings
#

# Specify directories
BUILDDIR = build
SRCDIR = src
INCLUDEDIR = include

# Specify files
TARGET = bin/warenlager
CCSOURCES = $(shell find $(SRCDIR) -type f -name *.c)
CCOBJECTS = $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(CCSOURCES:.c=.o))

# Specify commands
CC = gcc
AS = as

# Specify command flags
CCLIBS = 
CCFLAGS = -g -c -Wall -std=c99 -pedantic -I $(INCLUDEDIR) $(CCLIBS)
ASFLAGS =

# Read features task
CCFEATURES = $(patsubst %,-DFEATURE_%,$(WARENLAGER))

#
## Tasks
#

default: $(TARGET)

$(TARGET): $(CCOBJECTS)
	$(CC) $^ -o $@ $(CCLIBS)

$(BUILDDIR)/%.o: $(SRCDIR)/%.c
	mkdir -p $(dir $@)
	$(CC) $(CCFLAGS) $(CCFEATURES) -o $@ $<

clean:
	rm -r $(BUILDDIR) $(TARGET)

.PHONY: clean
