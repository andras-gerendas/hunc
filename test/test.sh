#!/bin/sh

cd ../lib
make clean
if [ -f "libhunc.so" ]; then
    echo "HIBA: Nem sikerult a lib clean"
    exit 1
fi
make
if [ ! -f "libhunc.so" ]; then
    echo "HIBA: Nem sikerult a lib build"
    exit 1
fi
cd ../test
make clean
if [ -f "hunc_test" ]; then
    echo "HIBA: Nem sikerult a test build"
    exit 1
fi
make
if [ ! -f "hunc_test" ]; then
    echo "HIBA: Nem sikerult a test clean"
    exit 1
fi
kimenet=$(echo "5" | LD_LIBRARY_PATH=../lib ./hunc_test)
if [ "$kimenet" != "1 2 3 4 5 = 15" ]; then
    echo "HIBA: Nem jo a kimenet"
    exit 1
fi
echo "Sikeres teszt"
exit 0
