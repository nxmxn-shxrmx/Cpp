class CQ
{
    class Node
    {
        int val;
        Node next;
        Node(int val)
        {
            this.val = val;
        }
    }
    static Node head;
    static Node tail;
    CQ()
    {
        head = null;
        tail = head;
    }
    public boolean isEmpty()
    {
        return head==null;
    }
    public void Enqueue(int data)
    {
        Node t = new Node(data);
        if(isEmpty())
        {
            head = t;
        }
        else
        {
            tail.next = t;
        }
        tail = t;
        tail.next = head;
    }
    public int Dequeue()
    {
        if(isEmpty())
        {
            System.out.println("Empty");
            return -1;
        }
        int r = head.val;
        if(head==tail)
        {
            head = null;
            tail = head;
        }
        else
        {
            head=  head.next;
            tail.next = head;
        }
        return r;
    }
    public void traverse()
    {
        if(isEmpty())
        {
            System.out.println("Empty");
            return;
        }
        Node r = head;
        do {
            System.out.println(r.val);
            r = r.next;
        } while (r!=head);

    }

}
class cirquelinked {
    public static void main(String[] args) {
        CQ q = new CQ();
        q.traverse();
        q.Enqueue(10);   
        q.Enqueue(30);   
        q.Enqueue(50);   
        q.Enqueue(70);  
        q.Enqueue(60);
        q.Enqueue(70);
        q.traverse(); 
        System.out.println("========");
        System.out.println(q.Dequeue()+" D");   
        q.traverse(); 
    }
}
