
public class reveerse {
    
    static class Node{
        Node next;
        int data;
        Node(int data){
            this.data=data;
        }
    }
        Node head;
    public Node rev(Node curr, Node next, Node prev){
    
        Node slow = curr;
        Node fast = curr.next;

        while(fast!=null && fast.next!=null)
        {
            fast = fast.next.next;
            slow = slow.next;
        }
        return slow;
    } 
    public static void main(String [] args)
    {
        Node head=new Node(23);
        head.next=new Node(22);
        head.next.next=new Node(21);
        head.next.next.next = new Node(24);
        head.next.next.next.next = new Node(26);
        Node temp=head;
        while(temp!=null){
            System.out.println(temp.data);
            temp=temp.next;
        }
        reveerse obj=new reveerse();
        head=obj.rev(head,null,null);
        System.out.println(head.data);
    }
}
