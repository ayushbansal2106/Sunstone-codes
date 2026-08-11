public class queue {
  static class intQueue{
    int[] q;
    int front, rear, size;

    intQueue(int capacity){
      q = new int[capacity];
      front = rear = size = 0;
    }

    boolean isEmpty(){
      return size == 0;
    }

    boolean isFull(){
      return size == q.length;
    }

    boolean enqueue(int x){
      if (isFull()) {
        System.out.println("Queue is full");
        return false;
      }
      q[rear] = x;
      rear = (rear+1) % q.length;
      size++;
      return true;
    }

    int dequeue(){
      if (isEmpty()) {
        System.out.println("underflow");
        return -1;
      }
      int val = q[front];
      front = (front + 1) % q.length;
      size--;
      return val;
    }

    int peek(){
      if (isEmpty()) {
        System.out.println("Underflow");
        return -1;
      }
      return q[front];
    }
  }

  public static void main(String[] args) {
    intQueue qu = new intQueue(3);
    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    // qu.enqueue(40);

    System.out.println(qu.peek());
    System.out.println(qu.dequeue());
    System.out.println(qu.peek());
  }
}
