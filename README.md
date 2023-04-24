# Exp-SortingTechniques

3 Types of sorting
1. Bubble Sort
2. Insertion Sort
3. Selection Sort

## Algorithm:
a. Bubble Sort
  1. declare variables passes, comp i, j and w
  2. let the passes be the number of elements in the array -1 (i.e. n-1)
  3. Let the no of comparisons (comp) be n-1
  4. For i=0 till i< passes, increment i
    for j=0, j=comp-i iterate j
      if j th position of array> j+1 th position, switch their postion using a temporary var, w
  5. Print the array
  
b. Insertion Sort
  1. Declare variables i, j and small
  2. for i=1, i<n iterate i
  3. if 2 is satisfied, for j=i-1 and j>=0, decrement j
  4. Make the psoition of j+1= j
  5. assign array j+1 to be small
  6. Print
 
  
c. Selection Sort
  1. declare variables i, j, smallest and temp
  2. for i=0 i<n-1 iterate i
    define smallest=i
    for j=i+1, j<n iterate j
      if the value in array at position smallest> value at position j, make smallest j
  3. If i!= smallest,
    Switch the positions of i with the new smallest
  4. Print
  
  Run:
  <img width="713" alt="image" src="https://user-images.githubusercontent.com/26576979/234012167-41d30575-a3a0-45c3-bd73-5108d3c118b2.png">
