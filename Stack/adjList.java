import java.lang.reflect.Array;
import java.util.ArrayList;

class adjList
{
    static void insert(ArrayList<ArrayList<Integer>>l,int s,int d)
    {
        l.get(s).add(d);
        l.get(d).add(s);
    }
    static void printGraph(ArrayList<ArrayList<Integer>> am) {
        for (ArrayList<Integer>i:am) {
          System.out.println("\nVertex " + i ":");
          for (int j : i){
            System.out.print(" -> " +j);
          }
          System.out.println();
        }
    }
    public static void main(String[] args) {
        ArrayList<ArrayList<Integer>> l = new ArrayList<ArrayList<Integer>>(5);
        for(int i = 0;i<5;++i)
        l.add(new  ArrayList<Integer>());

        
        insert(l, 1, 3);
        insert(l, 0, 2);
        insert(l, 0, 3);
        printGraph(l);
    }
}