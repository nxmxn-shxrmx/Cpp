for(int i=0;i<n;++i){

        ll f;cin>>f;
        if(madd.find(f)==madd.end()){
            madd[f]=false;
            vd.push_back(f);
            gg++;

        }
        else{
            if(vd[0]==f){
                vd.erase(vd.begin());
                vd.push_back(f);
            }
            else{
                vd.clear();
                vd.push_back(f);
    
                gg=1;
            }
        }
        dd = max(dd,gg);
    }
    cout<<dd;



    return 0;