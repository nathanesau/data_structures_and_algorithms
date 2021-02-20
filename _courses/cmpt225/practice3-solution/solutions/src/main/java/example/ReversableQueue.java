package example;

import java.util.ArrayList;
import java.util.List;

public class ReversableQueue<T> implements Queue<T> {

    class Node {

        T data;

        Node next = null;

        Node prev = null;

        Node(T data) {
            this.data = data;
        }
    }

    Node front;

    Node back;

    @Override
    public void enqueue(T data) throws Exception {
        Node node = new Node(data);
        if (front == null) {
            front = node;
            back = node;
        }
        else {
            node.prev = back;
            back.next = node;
            back = node;
        }
    }

    @Override
    public T dequeue() throws Exception {
        if (front == null) {
            throw new Exception("Attempt to dequeue empty queue");
        }

        T data = front.data;
        front = front.next;

        if (front == null) {
            back = null;
        }
        else {
            front.prev = null;
        }

        return data;
    }

    @Override
    public T peek() throws Exception {
        if (front == null) {
            return null;
        }

        return front.data;
    }

    @Override
    public boolean isEmpty() {
        return front == null;
    }

    public void reverse() { // O(N)
        if (isEmpty()) {
            return;
        }

        Node node = back;
        Node prev = node.prev;
        node.next = prev;
        node.prev = null;
        while (node.next != null) {
            prev = node.next.prev;
            node.next.next = prev;
            node.next.prev = node;
            node = node.next;
        }

        front = back;
    }

    @Override
    public String toString() {
        List<T> list = new ArrayList<T>();
        Node curr = front;
        while (curr != null) {
            list.add(curr.data);
            curr = curr.next;
        }

        return list.toString();
    }
    
}
