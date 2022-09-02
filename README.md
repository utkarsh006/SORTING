# SORTING


- An in-place algorithm is an algorithm that **does not need an extra space** and produces an output in the same memory that contains the data 
  by transforming the input ‘in-place’. However, a small constant extra space used for variables is allowed.
- Inplace means O(1)
- Inplace sorting algos : **Bubble, Insertion, Selection, Heap**
- Stable sorting algos : **Bubble,Insertion,Merge,Counting,Bucket**
  <br><br>
  
|Algo|Average Case|Best Case|Worst Case|Inplace|Stable|
|--|--|--|---|---|---|
|Bubble Sort| O(N^2)| O(N)|O(N^2)|Yes|Yes|
|Insertion Sort|  O(N^2)| O(N)|O(N^2)|Yes|Yes|
|Selection Sort| O(N^2)|O(N^2)|O(N^2)|Yes|No|
|Merge Sort| O(N logN)|O(N logN)|O(N logN)|O(N)|Yes|
|Heap Sort|O(N logN)|O(N logN)|O(N logN)|Yes|No|
|Quick Sort|O(N logN)|O(N logN)|O(N^2)|O(N logN)|No|
|Counting Sort| O(N)|O(N)|O(N^2)|O(N)|Yes|
|Radix Sort|O(N)|O(N)|O(N)|O(N)|No|
|Bucket Sort|O(N)|O(N)|O(N^2)|O(N)|Yes|

<br><br>

- **Selection Sort** : Find min element in unsorted array and swap it with the element at beginning.
- **Bubble Sort** : Repeatedly swap two adjacent elements if they are in wrong order.
- **Insertion Sort** : Insert an element from unsorted array to its correct position in sorted array.
- Wave sort is imp.
- DNF sort means sort an arary of 0s,1s and 2s.
- In quick sort, pivot is the end element(worst case).
- In quick sort, pivot is the median element(best case).

