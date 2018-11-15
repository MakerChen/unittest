OUTPUT_BIN=libutillib.so

all:
	gcc utillib.c -shared -o $(OUTPUT_BIN) -fPIC

install:
	mkdir -p out
	cp *.h $(OUTPUT_BIN) out

clean:
	rm out -rf
	rm $(OUTPUT_BIN)