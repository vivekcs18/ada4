ADA 4TH SEMESTER LAB PROGRAMS 2019-2020 

1.

a) Write a recursive program to
i) Solve Towers-of-Hanoi problem   ii) To find GCD

b) Given a sorted array with repeating integers. You need to find the first occurrence , last occurrence and count of a given key in the array. USE ONLY BINARY SEARCH. Your algorithm should run in LogN time.If element is not present print -1 -1 0.

2.

a) Implement Recursive Binary search and Linear search and determine the time required to search an element. Repeat the experiment for different values of N  and plot a graph of the time taken versus N.  

b) An element in a sorted array can be found in O(log n) time via binary search. But suppose we rotate an ascending order sorted array at some pivot unknown to you beforehand. So for instance, 1 2 3 4 5 might become 3 4 5 1 2. Devise a way to find an element in the rotated array in O(log n) time.

3.

a)Sort a given set of N integer elements using Selection Sort technique and compute its time taken. Run the program for different values of N and record the time taken to sort.

b) Write an efficient program for printing k largest elements in an array. Elements in the array can be in any order. It is given that all array elements are distinct.

4.

a) Write program to do the following:
i) Print all the nodes reachable from a given starting node in a digraph using BFS method.
ii) Check whether a given graph is connected or not using DFS method.

b) Using DFS, find if there are cycles in a given graph.

5.

a)Sort a given set of N integer elements using Insertion Sort technique and compute its time taken. 

b) There is one meeting room in a firm. There are N meetings in the form of (S[i], F[i]) where S[i] is the start time of meeting i and F[i] is finish time of meeting i. The task is to find the maximum number of meetings that can be accommodated in the meeting room. Print all meeting numbers

6.

a) Write program to obtain the Topological ordering of vertices in a given digraph.

b) Given a directed graph with N vertices and M edges that may contain cycles, the task is to find the lexicographically smallest topological ordering of the graph if it exists otherwise print -1 (if the graph has cycles).
Lexigraphically smallest topological ordering means that if two vertices in a graph do not have any incoming edge then the vertex with the smaller number should appear first in the ordering.

7.

a) Implement Johnson Trotter algorithm to generate permutations.

b) Given two text strings A of length n and B of length m, to transform A into B using a minimum number of operations of the following types: delete a character from A, insert a character into A, or change some character in A into a new character. The minimal number of such operations required to transform A into B is called the edit distance between A and B. For example, the edit distance(abbc, xbbacd) = 3 (change a to x; insert a after bb; insert d after c) Find a recurrence relation that is useful to find the edit distance of two strings A and B. Take an example of two strings of which one is your own name, and using this relation, fill the table for the minimum number of operations.

8.

a) Sort a given set of N integer elements using Merge Sort technique and compute its time taken. Run the program for different values of N and record the time taken to sort.  

b) There are 2 sorted arrays A and B of size n each. Write an algorithm to find the median of the array obtained after merging the above 2 arrays(i.e. array of length 2n). The complexity should be O(log(n)).

9.

a) Sort a given set of N integer elements using Quick Sort technique and compute its time taken 

b) Given an integer N which is a multiple of 4, the task is to find an N x N grid for which the bitwise xor of every row and column is same.

10.

a) Sort a given set of N integer elements using Heap Sort technique and compute its time taken. 

b) Given k sorted lists of integers of size n each, find the smallest range that includes at least element from each of the k lists. If more than one smallest ranges are found, print any one of them.

11.

a)Implement Warshall’s algorithm using dynamic programming.

b) Given an array of 0s and 1s, If any particular index i has value 1 then it is a safe index and if the value is 0 then it is an unsafe index. A man is standing at index -1(source) can only land on a safe index and he has to reach the Nth index (last position). At each jump, the man can only travel a distance equal to any Fibonacci Number. You have to minimize the number of steps, provided man can jump only in forward direction.

12.

a)Implement 0/1 Knapsack problem using dynamic programming.

b) Given a sequence, find the length of the longest palindromic subsequence in it.

13.

a)Implement All Pair Shortest paths problem using Floyd’s algorithm.

b) Write a program for the following: Given an array arr[] of size N. The task is to find the sum of the digits of all array elements which contains even number of 1’s in it’s their binary representation.

14.

a)Find Minimum Cost Spanning Tree of a given undirected graph using Prim’s algorithm.

b) Write a program for the partition problem. Partition problem is to determine whether a given set can be partitioned into two subsets such that the sum of elements in both subsets is same.

15.

a)Find Minimum Cost Spanning Tree of a given undirected graph using Kruskals algorithm.

b) Write a program for minimum coin changing problem using Greedy technique.

16.

a) From a given vertex in a weighted connected graph, find shortest paths to other vertices using Dijkstra’s algorithm.

b) Write a program for the following: The Longest Increasing Subsequence (LIS) problem is to find the length of the longest subsequence of a given sequence such that all elements of the subsequence are sorted in increasing order.

17.

a)Implement “Sum of Subsets” using Backtracking. “Sum of Subsets” problem: Find a subset of a given set  S = {s1,s2,……,sn} of n positive integers whose sum is equal 
to a given positive integer d. For example, if S = {1,2,5,6,8} and  d = 9 there are two solutions {1,2,6} and {1,8}. A suitable message is to be displayed if the given problem instance doesn’t have a solution. 

b) Write a program for the following: Given an undirected graph and a number m, determine if the graph can be colored with at most m colors such that no two adjacent vertices of the graph are colored with the same color. Here coloring of a graph means the assignment of colors to all vertices.

18.

a)Implement “N-Queens Problem” using Backtracking.

b) There are a total of n tasks you have to pick, labelled from 0 to n-1. Some tasks may have prerequisites tasks, for example to pick task 0 you have to first finish tasks 1, which is expressed as a pair: [0, 1]
Given the total number of tasks and a list of prerequisite pairs, return the ordering of tasks you should pick to finish all tasks.
There may be multiple correct orders, you just need to return one of them. If it is impossible to finish all tasks, return an empty array.
