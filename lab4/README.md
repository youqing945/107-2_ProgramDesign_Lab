# lab4
===

## Use g++ to compile the following program, and then use nm to list symbols of the executable file. What encoded identifiers are used for the functions?

```shell
0000000000000056 T main //main
000000000000002e T _Z7averageif //int &float
0000000000000000 T _Z7averagePdRd //double
```

## What is the output of the program? Why?
1 8
4 8
4 8
8 8
根據資料型態，每個變數的規則也不盡相同。
char的大小為1byte
int float大小則為4byte
double 大小為8byte
