# Containers
A collection of linear and non linear containers (Set, Map, List, Queue, etc..)

## implementation notes
#### Stack and Queue are based on singly linked list
#### List is based on a doubly linked list.
#### Map and Set are implemented via self balancing binary search tree(left leaning red/black) for O(logN) guarantees.
#### Priority Queue is based on binary heap.

## containers:
```
 -mgc_map.hpp - an ordered map for key/value pairs
 -mgc_set.hpp - an ordered set
 -mgc_list.hpp - doubly linked list
 -mgc_queue.hpp - first in first out queue
 -mgc_stack.hpp - last in first out stack
 -mgc_priority_queue.hpp - binary heap (max heap ordering)
 ```
 
## helpers:
```
-mgc_redblack.hpp - this is the underlying data structure from which mgc_map and mgc_set is derived. 
                    it is a recursive implementation of a left leaning red black tree.
 -mgc_node.hpp - is the node structures for for various data structures.
 -mgc_util.hpp - helper functions, swap() etc.
```
