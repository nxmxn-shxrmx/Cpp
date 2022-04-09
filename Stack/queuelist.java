class Queue
{
    class Node
    {
        int val;
        Node next;
        Node(int val)
        {
            this.val =val;
        }
    }
    static Node head;
    static Node tail = head;
    public boolean isEmpty()
    {
        return head==null;
    }
    public void Enqueue(int data)
    {
        if(isEmpty())
        {
            head = new Node(data);
            tail = head;
            return;
        }
        tail.next = new Node(data);
        tail = tail.next;
    }
    public int Dequeue()
    {
        if(isEmpty())
        {
            System.out.println("Empty");
            return -1;
        }
        int r = head.val;
        head = head.next;
        if(head==null)
        tail = null;

        
        return r;
    }
    public int front()
    {
        if(isEmpty())
        {
            System.out.println("Empty");
            return -1;
        }
        return head.val;
    }
    public void traverse()
    {
        if(isEmpty())
        {
            System.out.println("Empty");
            return;
        }
        Node t = head;
        while(t!=null)
        {
            System.out.println(t.val);
            t = t.next;
        }
    }
}
class queuelist {
    public static void main(String[] args) {
        Queue q = new Queue();
        q.traverse();
        q.Enqueue(10);   
        q.Enqueue(30);   
        q.Enqueue(50);   
        q.Enqueue(70);  
        q.Enqueue(60);
        q.Enqueue(70);
        q.traverse(); 
        System.out.println("========");
        System.out.println(q.Dequeue()+"==");   
        q.traverse(); 
    }
}
