#include <iostream>

#include "queue.h"
#include "list.h"
#include "stack.h"

int main()
{
    QueueLinkedList<int> queue1;
    queue1.push(5);
    queue1.push(10);

    std::cout << "queue1 before pop: " << queue1.to_string() << std::endl;
    queue1.pop();
    std::cout << "queue1 after pop: " << queue1.to_string() << std::endl;

    QueueArrayList<int> queue2;
    queue2.push(5);
    queue2.push(10);

    std::cout << "queue2 before pop: " << queue2.to_string() << std::endl;
    queue2.pop();
    std::cout << "queue2 after pop: " << queue2.to_string() << std::endl;

    SinglyLinkedList<int> list1;
    list1.push_front(5);
    list1.push_front(10);

    std::cout << "list1 before pop_front: " << list1.to_string() << std::endl;
    list1.pop_front();
    std::cout << "list1 after pop_front: " << list1.to_string() << std::endl;

    DoublyLinkedList<int> list2;
    list2.push_front(5);
    list2.push_front(10);

    std::cout << "list2 before pop_front: " << list2.to_string() << std::endl;
    list2.pop_front();
    std::cout << "list2 after pop_front: " << list2.to_string() << std::endl;

    StackLinkedList<int> stack1;
    stack1.push(5);
    stack1.push(10);

    std::cout << "stack1 before pop: " << stack1.to_string() << std::endl;
    stack1.pop();
    std::cout << "stack1 after pop: " << stack1.to_string() << std::endl;

    StackArrayList<int> stack2;
    stack2.push(5);
    stack2.push(10);

    std::cout << "stack2 before pop: " << stack2.to_string() << std::endl;
    stack2.pop();
    std::cout << "stack2 after pop: " << stack2.to_string() << std::endl;

    return 0;
}