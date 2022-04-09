import java.util.Scanner;

class tower {

    static void hanoi(int n,int a,int b,int c)
    {
        if(n==1)
        {
            System.out.println(n+" "+b);
            return;
        }

        hanoi(n-1, b, c, a);
        System.out.println(n+" "+c);
        hanoi(n-1, c, b, a);

    }
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        sc.close();

        hanoi(n,1,3,2);
    }    
}
