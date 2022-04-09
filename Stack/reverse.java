import java.util.Scanner;

class Node
{
    Book val;
    Node next;
    Node()
    {

    }
    Node(Book val)
    {
        this.val = val;
    }
}
class Book{
    Book()
    {
        
    }
}
class reverse {


    static Node head;

    static  void show(Node u)
    {
        while(u!=null)
        {
            System.out.print(u.val+" ");
            u = u.next;
        }
    }
    
    static void insertAtEnd(int val)
    {
        
        if(head==null)
        {
            head = new Node(val);
            return;
        }
        Node temp = head;
        while(temp.next!=null)
        {
            temp = temp.next;
        }
        temp.next = new Node(val);
    }

    public static void main(String[] args) {


        Scanner sc = new Scanner(System.in);
        int l = sc.nextInt();

        while(l>0)
        {
            int n = sc.nextInt();
            insertAtEnd(n);
            l--;
        }
        show(head);
    
            Node pre = null;
            Node h = head;
            while(head!=null)
            {
                h = head.next;
                head.next = pre;
                pre = head;
                head = h;
            }
            System.out.println();
        show(pre);

        
            sc.close();

    }
}
