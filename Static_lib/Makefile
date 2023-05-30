CUR_DIR := .
CC := gcc
C_FLAGS := -c -o
STATIC_LIB_DIR := libhello.a


object:
	$(CC) $(C_FLAGS) obj/main.o main.c -I inc/
	$(CC) $(C_FLAGS) obj/hello_minh.o src/hello_minh.c -I inc/
	$(CC) $(C_FLAGS) obj/hello_world.o src/hello_world.c -I inc/

static:
	ar rcs lib/static/$(STATIC_LIB_DIR) obj/* 
all:
	gcc   obj/*  -Llib/static -lhello -o bin/statically-linked

clean:
	rm -rf obj/* 
	rm -rf lib/static/*
	rm -rf bin/*
