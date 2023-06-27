# Binary trees

A binary tree is a k-ary `k=2` tree data structure where each node can have a maximum of two children, known as the left child and the right child. This project uses `C` to explore the creation of the binary tree data structure, traversal, deletion and other algorithms related to binary trees.

## Structs and typedefs

#### Basic binary tree

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

#### Binary search tree

```c
typedef struct binary_tree_s bst_t;
```

#### AVL Tree

```c
typedef struct binary_tree_s avl_t;
```

#### Max binary heap

```c
typedef struct binary_tree_s heap_t;
```

#### Authors

Michael Peter
