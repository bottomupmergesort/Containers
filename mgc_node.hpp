#ifndef NODE_HPP
#define NODE_HPP

const bool red = true;
const bool black = false;

template <typename T, typename T2>
struct node {
        T key;
        T2 info;
        node* left;
        node* right;
        bool color;
        node(T _key, T2 _info) : key(_key), info(_info), left(nullptr), right (nullptr) { color = red; }
        node() { }
};

template <typename T>
struct lnode {
        T info;
        lnode* next;
        lnode* prev;
        lnode(T _info) : info(_info), next(nullptr) { }
        node() { }
};

#endif