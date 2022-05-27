class Node
{
    int val;
    Node left,right;
    Node(int val)
    {
        this.val = val;
    }
}
public class insertion_BST {

    static Node r;
    static Node insert(Node r,int data)
    {
        if(r==null)
        {
            r = new Node(data);
            return r;
        }
        if(r.val<data)
        {
          r.right = insert(r.right, data);
        }
        else 
        {
            r.left = insert(r.left, data);
        }

        return r;
    }
    static void inOrder(Node root)
    {
        if(root==null)
        return;

        inOrder(root.left);
        System.out.println(root.val);
        inOrder(root.right);
    }
    public static void main(String[] args) {
        r=insert(r,30);
        insert(r,20);
        insert(r,40);
        insert(r,70);
        insert(r,60);
        insert(r,80);

        inOrder(r);

 
    }
}
