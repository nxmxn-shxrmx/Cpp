import java.util.Scanner;

class sum {
   static int sdigit(int n)
    {
        if(n<10)
        return n;

       int  k = sdigit(n/10)+n%10;
        if(k>=10)
        k =sdigit(k);

        return k;
    }
    public static void main(String[] args) {
        
        Scanner sc =new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println(sdigit(n));
    }    
}
