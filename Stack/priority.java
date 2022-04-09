class PQ
{
    class Node
    {
        int val;
        int prio;
        Node next;
        Node(int val,int prio)
        {
            this.val = val;
            this.prio = prio;
        }

    }
    static Node head;
    PQ()
    {
        head = null;
    }
    public boolean isEmpty()
    {
        return head==null;
    }
    public void Endqueue(int val,int prio)
    {
        Node r = new Node(val,prio);
        if(isEmpty())
        head = r;

        else
        {
            if(r.prio<head.prio)
            {
                r.next = head;
                head = r;
                return;
            }
            Node t = head;
            while(t.next!=null && r.prio>=t.next.prio)
            {
                t = t.next;
            }
            r.next = t.next;
            t.next = r;
        }

    }
    public void traverse()
    {
        Node t = head;
        while(t!=null)
        {
            System.out.println(t.val);
            t= t.next;
        }
    }

}

class priority {
    public static void main(String[] args) {
        PQ q = new PQ();
        q.Endqueue(10,5);
        q.Endqueue(0,1);
        q.Endqueue(5,3);
        q.Endqueue(6,2);
        q.traverse();
    }
}
