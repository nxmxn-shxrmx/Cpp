import java.util.Scanner;
import java.util.Stack;

class Node
{
    int val;
    Node next;
    Node(int val)
    {
        this.val=val;
    }
}
class stack {

    static Node head;
     public void push(int v)
    {
        if(head==null)
        {
            head = new Node(v);
            return;
        }
        Node temp = new Node(v);
        temp.next = head;
        head = temp;
    }
    static public void peek()
    {
        if(head==null)
        {
            System.out.println("empty");
            return;
        }
        System.out.println(head.val);
        return;
    }
    static public void pop()
    {
        if(head==null)
        return;
        
        head = head.next;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int val =  sc.nextInt();
        stack s = new stack();
        s.push(val);
        s.push(6);
        s.push(1000);
        peek();
        pop();
        peek();
        pop();
        peek();
        sc.close();
    }    
}
