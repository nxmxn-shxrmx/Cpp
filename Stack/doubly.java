class Noded
{
    Noded next;
    Noded pre;
    int val;
    Noded(int val)
    {
        this.val = val;
    }
}
class doubly {

    static Noded head;
    static Noded tail;
    static int size()
    {
        int c= 0;
        Noded temp = head;
        while(temp!=null)
        {
            temp = temp.next;
            c++;
        }
            return c;
    }
    static void insertAtBeg(int data)
    {
        Noded n = new Noded(data);
        if(head==null)
        {
            head = n;
            tail = head;
        }

        n.next = head;
        n.pre = null;

        head.pre = n;
        head = n;
    }
    static void insertAtLast(int data)
    {
        Noded n = new Noded(data);

        if(head==null)
        {
            head = n;
            tail = head;
            return;
        }
        tail.next = n;
        n.pre = tail;
        tail = n;
    }
    static void insertAtPos(int index,int data)
    {
        Noded n = new Noded(data);
        if(index<1)
            return;

        if(index>size()+1)
        return;
        if(index==1)
        {
            if(head==null)
            {
                head = n;
                tail = head;
            }

            n.next = head;
            n.pre = null;

            head.pre = n;
            head = n;
            return;
        }
        Noded t = head;
        Noded pre = null;
        while(index>1)
        {
            pre = t;
            t = t.next;
            index--;
        }
        n.next = t; 
        n.pre = pre;
        pre.next = n;
        if(t!=null)
            t.pre= n;
    }
    static void deleteAtBeg()
    {
        if(head==null)
        return;

        if(head.next==null)
        {
            head=  null;
            return;
        }
        head = head.next;
        head.pre = null;
    }
    static void deleteAtEnd()
    {
        if(tail==null)
        return;
        if(tail.pre==null)
        {
            tail = null;
            head= tail;
            return;
        }
        tail  = tail.pre;
        tail.next = null;
    }
    static void deleteAtPos(int index)
    {
        if(head==null)
        return;

        if(index>size())
        {
            System.out.println("Invalid Index");
            return;
        }
        if(index==1)
        {           
            head = head.next;
            head.pre = null;
            return;
        }
        Noded pre = null;
        Noded u = head;
        while(index>1)
        {
            pre = u;
            index--;
            u = u.next;
        }
        pre.next = u.next;
        u.pre = pre;
    }
    static void show()
    {
        Noded h = head;
        while(h!=null)
        {
            System.out.println(h.val);
            h = h.next;
        }
    }
    public static void main(String[] args) {
        insertAtBeg(4);
        insertAtLast(5);
        insertAtLast(6);
        insertAtBeg(1);
        insertAtPos(1, 30);
        deleteAtPos(4);
        show();
    }
}
