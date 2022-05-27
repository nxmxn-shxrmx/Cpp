class prims {

    int min(int key[],boolean set[])
    {
        int ind = -1;
        int val = 9999999;
        for(int i = 0;i<5;++i)
        {
            if(!set[i] && key[i]<val)
            {
                val = key[i];
                ind  = i;
            }
        }
        return ind;
    }

    
    void prim(int v[][],int e)
    {   
        int par[] = new int[e];
        int key[] = new int[e];
        boolean setMST[]  = new boolean[e];
        
        par[0]=-1;
        for(int i = 0;i<e;++i)
        {
            key[i]=9999999;
            setMST[i] = false;
        }
        key[0]=0;       

        for(int i = 0;i<e-1;++i)
        {
            int u = min(key,setMST);
            setMST[u]=true;

            for(int j = 0;j<e;++i)
            {
                if(v[u][j]!=0 && !setMST[j] && v[u][j]<key[j])
                {
                    par[j]=u;
                    key[j]=v[u][j];
                }
            }
        }

        for(int i = 0;i<e;++i)
        {
            System.out.println(par[i]+" -> " + v[i][par[i]]);
        }
    }
    public static void main(String[] args) {

        prims p  = new prims();
        int g[][] = new int[][] { { 0, 2, 0, 6, 0 },
        { 2, 0, 3, 8, 5 },
        { 0, 3, 0, 0, 7 },
        { 6, 8, 0, 0, 9 },
        { 0, 5, 7, 9, 0 } };

        p.prim(g,5);

    }
}
