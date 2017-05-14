//
// Created by 1 on 13.05.2017.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_QUEUE_H
#define ALGORITHMS_AND_DATA_STRUCTURES_QUEUE_H

template <typename Item>
class queue {
private:
    void deletelist() {
        for (link t = head; t != nullptr; head = t) {
            t = head->next;
            delete head;
        }
    }
public:
    queue(int);
    queue(const queue&);
    queue& operator = (const queue&);
    ~queue();
    int empty() const;
    void put(Item);
    Item get();
};


#endif //ALGORITHMS_AND_DATA_STRUCTURES_QUEUE_H
