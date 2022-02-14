# Disjoint-Set-Union

Disjoint Set Union, also known as DSU, is a structure that can help to implement set unions. Usually, we are given a few disjoint sets each containing objects which are usually integers. And we want to implement a way by which we can perform union of sets. We want to implement two operations:

(i) Merge two sets into one.

(ii) Tell whether two objects belong to the same set or not.

It may seem easy to implement this by for example just using a set structure. But in reality, that implementation will take O(nlogn) and O(n^2) time which will soon turn out to be too much for the computer to handle if a lot of operations are performed. 

The DSU structure enables us 
