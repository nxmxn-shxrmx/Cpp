
  class No
  {
      int val;
      No next;
      No(int val)
      {
          this.val = val;
      }
  }
class cicular {
    
    static No head;
    static boolean isEmpty()
    {
        return head==null;
    }
    static int size()
    {
        No r = head;

        int  c= 0;
        do
        {
            r = r.next;
            c++;
        }while(r!=head);
        return c;
    }
    void insertAtBeg(int d)
    {
        No r  = new No(d);
        if(isEmpty())
        {
            head= r;
            head.next =head;
            return;
        }
        No t = head;
        while(t.next!=head)
        t = t.next;

        r.next = head;
        head = r;
        t.next = head;
        
    }
    void insertAtEnd(int d)
    {
        No r = new No(d);

        if(isEmpty())
        {
            head = r;
            head.next =head;
            return;
        }
        No t = head;
        while(t.next!=head)
        {
            t = t.next;
        }
        t.next = r;
        r.next = head;
    }
    void insertAtPos(int data,int pos)
    {
        if(pos>size()+1 || pos<=0)
        {
            System.out.println("Invalid");
            return;
        }
        if(pos==1)
        {
            insertAtBeg(data);
            return;
        }        
        No e = head;
        No y =null;
        while(pos>1)
        {
            pos--;
            y = e;
            e = e.next;
        }
        System.out.println("begin=>"+e.val);
        No r = new No(data);
        y.next = r;
        r.next = e;

    }
    void deleteAtBeg()
    {
        if(head==null)
        return;

        if(head.next==head)
        {
            head = null;
            return;
        }
        No e = head;
        while(e.next!=head)
        {
            e = e.next;
        }
        head = head.next;
        e.next = head;

    }
    void deleteAtEnd()
    {
        if(head==null)
        return;

        if(head.next==head)
        {
            head = null;
            return;
        }
        No e = head;
        No pre = null;
        while(e.next!=head)
        {
            pre = e;
            e = e.next;
        }
        pre.next = head;

    }
    void deleteAtpos(int pos)
    {
        if(pos>size() && pos<1)
        {
            System.out.println("Invalid");
            return;
        }
        if(pos==1)
        {
            deleteAtBeg();
            return;
        }
        if(pos==size())
        {
            deleteAtEnd();
            return;
        }
        No h = head;
        No e = head;
        while(pos>1)
        {
            e = h;
            h = h.next;
            pos--;
        }
        e.next = h.next;
    }
    void show()
    {
        No e = head;
        do
        {
            System.out.println(e.val);
            e = e.next;

        }while(e!=head);
        System.out.println("==========");
    }
    public static void main(String[] args) {
        cicular obj= new cicular();
        obj.insertAtBeg(1);
        obj.insertAtBeg(2);
        obj.insertAtBeg(3);
        obj.show();

        obj.insertAtEnd(4);
        obj.insertAtEnd(6);
        obj.insertAtPos(100,5);
        obj.show();
        obj.insertAtEnd(7);
        obj.show();
        obj.insertAtPos(0000,8);
            obj.show();
    }
}
