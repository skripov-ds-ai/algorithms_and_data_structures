//
// Created by 1 on 13.05.2017.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_BINOMIAL_QUEUE_H
#define ALGORITHMS_AND_DATA_STRUCTURES_BINOMIAL_QUEUE_H

#include <cstdlib>
#include <vector>

#define zero nullptr
#define key(A) (A)
#define less(A, B) (key(A) < key(B))
#define xch(A, B) {Item t = A; A = B; B = t;}
#define test(C, B, A) 4 * (C) + 2 * (B) + 1 * (A)

// rewrite it!!!

template <typename Item>
struct node {
    Item key;
    node *left, *right;
};

template <typename Item>
class binomial_queue {
private:
    size_t max_n;
    std::vector<node<Item> *> vector;

    node* pair(node *p, node *q) {
        if (less(p->key, q->key)) {
            p->right = q->left;
            q->left = p;
            return q;
        }
        // else
        q->right = p->left;
        p->left = q;
        return p;
    }
    void vector_join(std::vector<node<Item> *> b) {
        node *c = zero;

        for (auto i = vector.begin(); i < vector.end(); i++) {
            switch (test(c != zero, b[i] != zero, vector[i] != zero)) {
                case 2:
                    vector[i] = b[i];
                    break;
                case 3:
                    c = pair(vector[i], b[i]);
                    vector[i] = zero;
                    break;
                case 4:
                    vector[i] = c;
                    c = zero;
                    break;
                case 5:
                    c = pair(c, vector[i]);
                    vector[i] = zero;
                    break;
                case 6:
                case 7:
                    c = pair(c, b[i]);
                    break;
            }
        }
    }
public:
    binomial_queue(size_t max_n) {
        this->max_n = max_n;
        this->vector.resize(max_n);
        for (auto i = vector.begin(); i < vector.end(); i++) {
            this->vector[i] = zero;
        }
    }
    bool empty() const {
        for (auto i = vector.begin(); i < vector.end(); i++) {
            if (vector[i] != zero) {
                return false;
            }
        }
        return true;
    }
    node* insert(Item item) {
        node *c, *t = new node;
        c = t;
        c->left = zero;
        c->right = zero;
        c->key = item;
        for (auto i = vector.begin(); i < vector.end(); i++) {
            if (c == zero) {
                break;
            }
            if (vector[i] == zero) {
                vector[i] = c;
                break;
            }
            c = pair(c, vector[i]);
            vector[i] = zero;
        }
        return t;
    }
    Item get_max() {
        size_t i, max;
        node *x;
        Item item;
        std::vector<node<Item> *> temp(max_n);
        //node* temp[max_n];

        for (i = 0, max = -1; i < max_n; i++) {
            if (this->vector[i] != zero) {
                if ((max == -1) || less(item, vector[i]->key)) {
                    max = i;
                    item = vector[max]->key;
                }
            }
        }
        x = vector[max]->left;
        for (i = max; i < max_n; i++) {
            temp[i] = zero;
        }
        for (i = max; i < max_n; i++) {
            temp[i - 1] = x;
            x = x->right;
            temp[i - 1]->right = zero;
        }
        free(this->vector[max]);
        this->vector[max] = zero;
        vector_join(temp);
        return item;
    }
    ~binomial_queue() {
        vector.clear();
        max_n = 0;
    }
    void join(binomial_queue<Item> b) {
        node *c = zero;

        for (auto i = vector.begin(); i < vector.end(); i++) {
            switch (test(c != zero, b.vector[i] != zero, vector[i] != zero)) {
                case 2:
                    vector[i] = b.vector[i];
                    break;
                case 3:
                    c = pair(vector[i], b.vector[i]);
                    vector[i] = zero;
                    break;
                case 4:
                    vector[i] = c;
                    c = zero;
                    break;
                case 5:
                    c = pair(c, vector[i]);
                    vector[i] = zero;
                    break;
                case 6:
                case 7:
                    c = pair(c, b.vector[i]);
                    break;
            }
        }
    }
};

#endif //ALGORITHMS_AND_DATA_STRUCTURES_BINOMIAL_QUEUE_H
