# lab3

---
## How to compile the program for the Question A?

To solve the problem, we have to get the data of all cows into a vector so that we can use *sort()* in *\<algorithm>* to easily find out the 5 most heaviest cows and get the sum of them.

Then, use the command to compile the program and execute it.

---
## What's the difference between O(n log n) and O(n<sup>2</sup>)?

討論前，先出示執行結果：

```shell
pd2@VirtualBox:~/Desktop/Lab/test$ ./Main
1000
sort(): 0.000432seconds
v1/v2 are different.
insertion_sort(): 0.013909seconds
v1/v2 are the same.
pd2@VirtualBox:~/Desktop/Lab/test$ ./Main
10000
sort(): 0.004943seconds
v1/v2 are different.
insertion_sort(): 1.39229seconds
v1/v2 are the same.
pd2@VirtualBox:~/Desktop/Lab/test$ ./Main
100000
sort(): 0.065662seconds
v1/v2 are different.
insertion_sort(): 141.269seconds
v1/v2 are the same.
pd2@VirtualBox:~/Desktop/Lab/test$ ./Main
1000000
sort(): 0.730134seconds
v1/v2 are different.
insertion_sort(): 13906.7seconds
v1/v2 are the same.
```

*sort()* 為**最快的比較排序法**，*insertion_sort()* 則是**插入排序法**，數字為使用兩種排序法排序同樣的vector所花費的時間。

*sort()*的最糟時間複雜度為O(n log n)，*insertion_sort()*的最糟時間複雜度則為O(n<sup>2</sup>)，如n值越大，兩種排序法最糟所需時間的差距就會越大，就如程式碼區塊中顯示的結果一樣。

雖然最後結果相同，計算所花費掉的時間卻因為演算法而天差地遠，藉此示例顯示不同演算法之間的差別。<sub>#</sub>
