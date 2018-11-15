OUTPUT_BIN=libtest.so

all:
	gcc test.c -shared -o $(OUTPUT_BIN) -fPIC -I. -I./../utillib/out -L./../utillib/out -lutillib

install:
	mkdir -p out
	cp *.h $(OUTPUT_BIN) out

clean:
	rm out -rf
	rm $(OUTPUT_BIN)
