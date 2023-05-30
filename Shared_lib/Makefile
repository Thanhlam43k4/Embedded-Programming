
CUR_DIR := .
INC_DIR := ./inc
SRC_DIR := ./src
LIB_DIR := ./lib
CC := gcc
OBJ_DIR := ./obj

C_FLAGS = -c -fPIC -o
SHARED_LIB_NAME := libmath.so

object:
	$(CC) $(C_FLAGS) $(OBJ_DIR)/main.o $(CUR_DIR)/main.c -I $(INC_DIR)
	$(CC) $(C_FLAGS) $(OBJ_DIR)/add_two_num.o $(SRC_DIR)/add_two_num.c -I $(INC_DIR)  
	$(CC) $(C_FLAGS) $(OBJ_DIR)/times_two_num.o $(SRC_DIR)/times_two_num.c -I $(INC_DIR)

shared:
	gcc -shared $(OBJ_DIR)/* -o $(LIB_DIR)/shared/$(SHARED_LIB_NAME)


all:
	gcc  $(OBJ_DIR)/* -L$(LIB_DIR)/shared -lmath -o bin/use-shared-librar
clean:
	rm -rf $(OBJ_DIR)/*
	rm -rf $(LIB_DIR)/shared/*
	rm -rf bin/* 

