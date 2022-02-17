# Disjoint-Set-Union

Disjoint Set Union, also known as DSU, is a structure that can help to implement set unions. Usually, we are given a few elements and we want to group them together into components. We might even want to union two components or get the size of a component. We can perform the following operations:

(i) Merge two sets into one.

(ii) Tell whether two objects belong to the same set or not.

(iii) Given a particular object, we want to find the size of the component it is in.

It may seem easy to implement this by for example just using a set structure. But in reality, that implementation will take O(nlogn) or even O(n^2) time for the above operations which will soon turn out to be too much for the computer to handle if a lot of operations are performed. 

The DSU structure enables us to perform operations with average time O(a(n)) where a(n) is the inverse Ackermann Function (see more here: https://en.wikipedia.org/wiki/Ackermann_function).

### Application
We show how to use this function in the following problem: https://codeforces.com/problemset/problem/1559/D1

The way to solve this problem is to define two DSUs g1 and g2 and just perform unions when possible. n is small enough so that a quadratic implementation would work.

Solution source code: https://codeforces.com/contest/1559/submission/126121505
