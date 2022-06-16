#
# UPNGO Build File

CC=g++
BUILDFLAGS=-I src/include -Wall -Wextra -pedantic -O2 -std=c++20 -c
LINKERFLAGS=`pkg-config --libs finalcut`

SRCDIR=src
BUILDDIR=bin
INTBUILDDIR=bin-int

debug: BUILDFLAGS+=-D_DEBUG

all: init $(BUILDDIR)/upngo
	@echo "Build Finished"

$(BUILDDIR)/upngo: $(INTBUILDDIR)/main.o
	$(CC) $(LINKERFLAGS) $(INTBUILDDIR)/main.o -o $(BUILDDIR)/upngo

$(INTBUILDDIR)/main.o: $(SRCDIR)/main.cpp
	$(CC) $(SRCDIR)/main.cpp $(BUILDFLAGS) -o $(INTBUILDDIR)/main.o

clean: clean-notify
	rm -f $(BUILDDIR)/* $(INTBUILDDIR)/*

clean-notify:
	@echo Cleaning Build Directories...

init:
	mkdir -p bin bin-int

debug: all

install:
	cd 3rd/finalcut
	make install
	cd ../../

submodules:
	git submodule update --init
	cd 3rd/finalcut && autoreconf --install --force && ./configure --prefix=/usr && make -j4
	cd ../../