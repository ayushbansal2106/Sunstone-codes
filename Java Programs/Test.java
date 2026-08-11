import java.util.Scanner;
class Node{
    int data;
    Node next;
    Node(int data){
        this.data=data;
        this.next=null;
    }
}
class LinkedList{
    Node head;
    Node tail;
    int size;
    LinkedList(){
        this.head=null;
        this.tail=null;
        this.size=0;
    }
    void addLast(int data){
        Node newNode=new Node(data);
        if(size==0){
            head=newNode;
            tail=newNode;
        }else{
            tail.next=newNode;
            tail=newNode;
        }
        size++;
    }
    void print(){
        Node temp=head;
        while(temp!=null){
            System.out.print(temp.data+" ");
            temp=temp.next;
        }
        System.out.println();
    }
    int size(){
        return size;
    }
    boolean isEmpty(){
        return size==0;
    }
    void clear(){
        head=null;
        tail=null;
        size=0;
    }
    void addFirst(int data){
        Node newNode=new Node(data);
        if(size==0){
            head=newNode;
            tail=newNode;
        }else{
            newNode.next=head;
            head=newNode;
        }
        size++;
    }
    void removeFirst(){
        if(size==0){
            System.out.println("List is empty");
            return;
        }else if(size==1){
            head=null;
            tail=null;
        }else{
            head=head.next;
        }
        size--;
    }
    void removeLast(){
        if(size==0){
            System.out.println("List is empty");
            return;
        }else if(size==1){
            head=null;
            tail=null;
        }else{
            Node temp=head;
            while(temp.next!=tail){
                temp=temp.next;
            }
            temp.next=null;
            tail=temp;
        }
        size--;
    }
    int getFirst(){
        if(size==0){
            System.out.println("List is empty");
            return -1;
        }
        return head.data;
    }
    int getLast(){
        if(size==0){
            System.out.println("List is empty");
            return -1;
        }
        return tail.data;
    }
    int getAt(int idx){
        if(size==0){
            System.out.println("List is empty");
            return -1;
        }else if(idx<0 || idx>=size){
            System.out.println("Invalid index");
            return -1;
        }else{
            Node temp=head;
            for(int i=0;i<idx;i++){
                temp=temp.next;
            }
            return temp.data;
        }
    }
    void setAt(int idx,int data){
        if(size==0){
            System.out.println("List is empty");
        }else if(idx<0 || idx>=size){
            System.out.println("Invalid index");
        }else{
            Node temp=head;
            for(int i=0;i<idx;i++){
                temp=temp.next;
            }
            temp.data=data;
        }
    }
    void insertAt(int idx,int data){  
        if(idx<0 || idx>size){
            System.out.println("Invalid index");
        }else if(idx==0){
            addFirst(data);
        }else if(idx==size){
            addLast(data);
        }else{
            Node newNode=new Node(data);
            Node temp=head;
            for(int i=0;i<idx-1;i++){
                temp=temp.next;
            }
            newNode.next=temp.next;
            temp.next=newNode;
            size++;
        }
    }
    void deleteAt(int idx){
        if(size==0){
            System.out.println("List is empty");
            return;
        }else if(idx<0 || idx>=size){
            System.out.println("Invalid index");
            return;
        }else if(idx==0){
            removeFirst();
        }else if(idx==size-1){
            removeLast();
        }else{
            Node temp=head;
            for(int i=0;i<idx-1;i++){
                temp=temp.next;
            }
            temp.next=temp.next.next;
            size--;
        }
    }
    void reverse(){
        if(size<=1){
            return;
        }
        Node prev=null;
        Node curr=head;
        Node next=null;
        while(curr!=null){
            next=curr.next;
            curr.next=prev;
            prev=curr;
            curr=next;
        }
        Node temp=head;
        head=tail;
        tail=temp;
    }
    public static void main(String[] args) {
        LinkedList ll=new LinkedList();
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter number of elements to add:");
        int n=sc.nextInt();
        for(int i=0;i<n;i++){
            System.out.println("Enter element "+(i+1)+":");
            int data=sc.nextInt();
            ll.addLast(data);
        }
        System.out.println("Linked List:");
        ll.print();
        System.out.println("Size of Linked List:"+ll.size());
        System.out.println("Is Linked List empty?"+ll.isEmpty());
        System.out.println("First element:"+ll.getFirst());
        System.out.println("Last element:"+ll.getLast());
        System.out.println("Element at index 2:"+ll.getAt(2));
        ll.setAt(2, 100);
        System.out.println("After setting element at index 2 to 100:");
        ll.print();
        ll.insertAt(0, 200);
        System.out.println("After inserting element 200 at index 2:");
        ll.print();
        ll.deleteAt(2);
        System.out.println("After deleting element at index 2:");
        ll.print();
        ll.reverse();
        System.out.println("After reversing the linked list:");
        ll.print();
        sc.close();
    }
}