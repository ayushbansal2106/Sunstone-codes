public class stack {
  static class intStack{
    int[] s;
    int top;

    intStack(int capacity){
      s = new int[capacity];
      top = -1;
    }

    boolean isEmpty(){
      return top == -1;
    }

    boolean isFull(){
      return top == s.length-1;
    }

    boolean push(int x){
      if(isFull()){
        System.out.println("Push failed: stack overflow.");
        return false;
      }
      top++;
      s[top] = x;
      return true;
    }

    int pop(){
      if(isEmpty()){
        System.out.println("Pop failed: stack underflow.");
        return -1;
      }
      int val = s[top];
      top--;
      return val;
    }

    int peek(){
      if (isEmpty()) {
        System.out.println("Peek failed: stack is empty.");
        return -1;
      }
      return s[top];
    }
  }

  public static void main(String[] args) {
    intStack st = new intStack(3);

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    System.out.println(st.peek());
    System.out.println(st.pop());
    System.out.println(st.pop());
    System.out.println(st.peek());

  }
}
