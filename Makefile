CC = g++
# Extension #
EXT = cpp
# Flags #
CFLAGS = -Wall -g
# Dynamic Link Libraries #
DLL = system_lib.dll
# Library #
LIB = -lsystem_lib
# Executable # 
EXE = giro
# Source directory #
SRC_DIR = ./lib
# Bin directory #
BIN_DIR = ./bin

dlls: system_dll

system_dll:
	$(CC) -shared $(SRC_DIR)/cattleImpl.cpp $(SRC_DIR)/transactionImpl.cpp $(SRC_DIR)/farmImpl.cpp \
	-o $(BIN_DIR)/$(DLL)

exec_dll:
	$(CC) main_unit_test.cpp -L$(BIN_DIR) $(LIB) $(BIN_DIR)/api.o -o $(BIN_DIR)\$(EXE).exe
