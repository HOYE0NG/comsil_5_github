#include "LinkedList.hpp"



//주의: first, current_size는 class의 멤버 변수이기 때문에 this 포인터를 사용하여 가져와야함

//LinkedList class를 상속받음
template <class T>
class Stack : public LinkedList<T>{
    public:
    Stack() : LinkedList<T>() {}
    bool Delete (T &element){
        if(this->first == 0) {
            return false;
        }
        element = this->first->data;
        Node<T> *current = this->first;
        this->first = this->first->link;
        delete current;
        this->current_size--;
        return true;
        }
};


