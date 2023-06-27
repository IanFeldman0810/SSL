all: conversiontest tablas #complio todo

test: conversionTest.o conversion.o # ejecuto solamente conversionTest
	gcc -Wall -g -o conversiontest conversionTest.o conversion.o
	./conversiontest

tablas: conversion.o tablasDeConversion.o #ejecuto solamente tablasDeConversion
	gcc -Wall -g -o tablas conversion.o tablasDeConversion.o
	./tablas


conversionTest.o: conversionTest.c conversion.h
	gcc -Wall -g -c conversionTest.c

conversion.o: conversion.c conversion.h
	gcc -Wall -g -c conversion.c

tablasDeConversion.o: tablasDeConversion.c conversion.h
	gcc -Wall -g -c tablasDeConversion.c


clean: #elimino todos los archivos .o creados
	del /Q *.o conversiontest.exe tablas.exe