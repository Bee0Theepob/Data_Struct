#include "stack.h"
#include "queue.h"

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
        stack<T> tmp;
        while(!empty()){
            tmp.push(top());
            pop();
        }
        *this=s;
        while(!tmp.empty()){
            push(tmp.top());
            tmp.pop();
        }
    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
        stack<T> tmp;
        while(!empty()){
            tmp.push(top());
            pop();
        }
        while(!q.empty()){
            tmp.push(q.front());
            q.pop();
        }
        while(!tmp.empty()){
            push(tmp.top());
            tmp.pop();
        }
    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) {
        while(!s.empty()){
            push(s.top());
            s.pop();
        }
    }

    template<typename T>
    void queue<T>::appendQueue(queue<T> q) {
        while(!q.empty()){
            push(q.front());
            q.pop();
        }
    }
}
