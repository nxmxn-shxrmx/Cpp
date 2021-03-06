public class array_reprsentation {
	Node root;

	static class Node {
		int data;
		Node left, right;
		Node(int data)
		{
			this.data = data;
		}
	}


	public Node insertLevelOrder(int[] arr, Node root,
												int i)
	{
		if (i < arr.length) {
			Node temp = new Node(arr[i]);
			root = temp;

			//
			root.left = insertLevelOrder(arr, root.left,
											2 * i + 1);

		
			root.right = insertLevelOrder(arr, root.right,
											2 * i + 2);
		}
		return root;
	}

	public void inOrder(Node root)
	{
		if (root != null) {
			inOrder(root.left);
			System.out.print(root.data + " ");
			inOrder(root.right);
		}
	}
	public static void main(String args[])
	{
		array_reprsentation t2 = new array_reprsentation();
		int arr[] = { 1, 2, 3, 4, 5, 6, 6 };
		t2.root = t2.insertLevelOrder(arr, t2.root, 0);
		t2.inOrder(t2.root);
	}
}
