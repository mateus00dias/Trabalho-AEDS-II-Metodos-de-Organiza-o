    #include <fstream>
    #include <iostream>
    #include <stdio.h>
    #include <stdlib.h>
    #include <cstring>
    #include <ctime>
    using namespace std ; 

    void quick_sort(int *a, int *ncp, int left, int right) ; 
    void intercala (int p, int q, int r, int v[]);
    void mergesort (int p, int r, int v[]);

    int main()
    {
        int i, j, ax, instancia, ordenacao, nt, nc ; 
        int v[1000], v2[10000], v3[100000], vi[1000], vi2[10000], vi3[100000], vo[1000], vo2[10000], vo3[100000], vq[1000], vq2[10000], vq3[100000] ;
        int cont, cont2, cont3, contvi1, contvi2, contvi3, contvo1, contvo2, contvo3, contvq1, contvq2, contvq3 ;
        int tam, tam2, tam3, tam4, tam5, tam6, tam7, tam8, tam9, tam10, tam11, tam12 ;
        char prox[100], prox2[100];

        clock_t t ;  
      
        //menu
        menuInst:
        system ("clear") ;
        
        printf ("               MENU                       "); 
        printf ("\n\n\n");
        
        printf ("------ QUAL O METODO DE ORDENAÇÃO ? ------");
        printf ("\n1 -- • Bubble    Sort "                  ); 
        printf ("\n2 -- • Shell     Sort "                  ); 
        printf ("\n3 -- • Selection Sort "                  ); 
        printf ("\n4 -- • Insertion Sort "                  ); 
        printf ("\n5 -- • Quick     Sort "                  ); 
        printf ("\n6 -- • Merge     Sort "                  ); 
        printf ("\n7 -- • Finalizar      "                  ); 
        printf ("\n\nDIGITE O METODO ESCOLHIDO : "          );
        scanf  ("%d",&ordenacao); 

        if (ordenacao == 7 ){
        system ("clear") ;
        cout << "Finalizado com Sucesso" << endl ; 
        exit(0) ;
        }
        
        system ("clear") ;
        
        printf ("               MENU                       "); 
        printf ("\n\n\n");
        
        printf ("--------- QUAL LISTA ESCOLHIDA ? ---------");
        printf ("\n --      LISTAS ALEATORIAS       --   \n");
        printf ("1  -- ListaAleatoria-1000          --   \n");
        printf ("2  -- ListaAleatoria-10000         --   \n");
        printf ("3  -- ListaAleatoria-100000        --   \n");
        printf ("4  -- ListaInversaOrdenada-1000    --   \n");
        printf ("5  -- ListaInversaOrdenada-10000   --   \n");
        printf ("6  -- ListaInversaOrdenada-100000  --   \n");
        printf ("7  -- ListaOrdenada-1000           --   \n");
        printf ("8  -- ListaOrdenada-10000          --   \n");
        printf ("9  -- ListaOrdenada-100000         --   \n");
        printf ("10 -- ListaQuaseOrdenada-10000     --   \n");
        printf ("11 -- ListaQuaseOrdenada-100000    --   \n");
        printf ("12 -- ListaQuaseOrdenada-1000000   --   \n");
        printf ("\n\nDIGITE A LISTA ESCOLHIDO : "           );
        scanf ("%d", &instancia);
        system ("clear") ;



        
        //transformando os arquivos em um array com atoi  
        
        // aleatorio1000
        if (instancia == 1){
        ofstream arqs ; 
        arqs.open("aleatorio1000.txt",ios::app); 
        ifstream arqe ; 
        string linha ;
        arqe.open ("aleatorio1000.txt"); 
        if (arqe.fail()){
            printf ("ERRO") ;
            exit(1); 
        }
      do{
            arqe.getline(prox, 10000);
            tam = atoi(prox);
            v[cont] = tam;
            cont ++ ; 
        } while (!arqe.eof());
        arqs.close();
        }
        //aleatorio10000
        
        if (instancia == 2){
        ofstream arqs2 ; 
        arqs2.open("aleatorio10000.txt",ios::app); 
        ifstream arqe2 ; 
        arqe2.open ("aleatorio10000.txt"); 
        if (arqe2.fail()){
            printf ("ERRO") ;
            exit(1); 
        }
        do{
            arqe2.getline(prox2, 10000);
            tam2 = atoi(prox2);
            v2[cont2] = tam2;
            cont2 ++ ; 
        } while (!arqe2.eof());
        arqs2.close();
        }
        
        //aleatorio100000
        
        if (instancia == 3) {
        ofstream arqs3 ; 
        arqs3.open("aleatorio100000.txt",ios::app); 
        ifstream arqe3 ; 
        arqe3.open ("aleatorio100000.txt"); 
        if (arqe3.fail()){
            printf ("ERRO") ;
            exit(1); 
        }
        do{
            arqe3.getline(prox2, 10000);
            tam2 = atoi(prox2);
            v3[cont3] = tam2;
            cont3 ++ ; 
        } while (!arqe3.eof());
        arqs3.close();
        }

        //inversamenteordenada1000
        if (instancia == 4){
        ofstream arqs4 ; 
        arqs4.open("inversamente1000.txt",ios::app); 
        ifstream arqe4 ; 
        arqe4.open ("inversamente1000.txt"); 
        if (arqe4.fail()){
            printf ("ERRO") ;
            exit(1); 
        }
        do{
            arqe4.getline(prox, 10000);
            tam4 = atoi(prox);
            vi[contvi1] = tam4;
            contvi1 ++ ; 
        } while (!arqe4.eof());
        arqs4.close();
        }

        //inversamenteordenada10000
        
        if (instancia == 5){
        ofstream arqs5 ; 
        arqs5.open("inversamente10000.txt",ios::app); 
        ifstream arqe5 ; 
        arqe5.open ("inversamente10000.txt"); 
        if (arqe5.fail()){
            printf ("ERRO") ;
            exit(1); 
        }
        do{
            arqe5.getline(prox, 10000);
            tam5 = atoi(prox);
            vi2[contvi2] = tam5;
            contvi2 ++ ; 
        } while (!arqe5.eof());
        arqs5.close();
        }
        //inversamenteordenada100000
        
        if (instancia == 6){
        ofstream arqs6 ; 
        arqs6.open("inversamente100000.txt",ios::app); 
        ifstream arqe6 ; 
        arqe6.open ("inversamente100000.txt"); 
        if (arqe6.fail()){
            printf ("ERRO") ;
            exit(1); 
        }
        do{
            arqe6.getline(prox, 10000);
            tam6 = atoi(prox);
            vi3[contvi3] = tam6;
            contvi3 ++ ; 
        } while (!arqe6.eof());
        arqs6.close();
        }
        //listaordenada1000
        if (instancia == 7){ 
        ofstream arqs7 ; 
        arqs7.open("listaordenada1000.txt",ios::app); 
        ifstream arqe7 ; 
        arqe7.open ("listaordenada1000.txt"); 
        if (arqe7.fail()){
            printf ("ERRO") ;
            exit(1); 
        }
        do{
            arqe7.getline(prox, 10000);
            tam7 = atoi(prox);
            vo[contvo1] = tam7;
            contvo1 ++ ; 
        } while (!arqe7.eof());
        arqs7.close();
        }
        
        //listaordenada10000

        if (instancia == 8){ 
        ofstream arqs8 ; 
        arqs8.open("listaordenada10000.txt",ios::app); 
        ifstream arqe8 ; 
        arqe8.open ("listaordenada10000.txt"); 
        if (arqe8.fail()){
            printf ("ERRO") ;
            exit(1); 
        }
        do{
            arqe8.getline(prox, 10000);
            tam8 = atoi(prox);
            vo2[contvo2] = tam8;
            contvo2 ++ ; 
        } while (!arqe8.eof());
        arqs8.close();
        }
        //listaordenada100000
        
        if (instancia == 9){ 
        ofstream arqs9 ; 
        arqs9.open("listaordenada100000.txt",ios::app); 
        ifstream arqe9 ; 
        arqe9.open ("listaordenada100000.txt"); 
        if (arqe9.fail()){
            printf ("ERRO") ;
            exit(1); 
        }
        do{
            arqe9.getline(prox, 10000);
            tam9 = atoi(prox);
            vo3[contvo3] = tam9;
            contvo3 ++ ; 
        } while (!arqe9.eof());
        arqs9.close();
        }
      //quaseordenada1000
      
      if (instancia == 10){
      ofstream arqs10 ; 
        arqs10.open("quaseordenada1000.txt",ios::app); 
        ifstream arqe10 ; 
        arqe10.open ("quaseordenada1000.txt"); 
        if (arqe10.fail()){
            printf ("ERRO") ;
            exit(1); 
        }
        do{
            arqe10.getline(prox, 10000);
            tam10 = atoi(prox);
            vq[contvq1] = tam10;
            contvq1 ++ ; 
        } while (!arqe10.eof());
        arqs10.close();
      }
      //quaseordenada10000
      
      if (instancia == 11){
      ofstream arqs11 ; 
        arqs11.open("quaseordenada10000.txt",ios::app); 
        ifstream arqe11 ; 
        arqe11.open ("quaseordenada10000.txt"); 
        if (arqe11.fail()){
            printf ("ERRO") ;
            exit(1); 
        }
        do{
            arqe11.getline(prox, 10000);
            tam11 = atoi(prox);
            vq2[contvq2] = tam11;
            contvq2 ++ ; 
        } while (!arqe11.eof());
        arqs11.close();  
      }
        //quaseordenada100000
      
      if (instancia == 12){
      ofstream arqs12 ; 
        arqs12.open("quaseordenada100000.txt",ios::app); 
        ifstream arqe12 ; 
        arqe12.open ("quaseordenada100000.txt"); 
        if (arqe12.fail()){
            printf ("ERRO") ;
            exit(1); 
        }
        do{
            arqe12.getline(prox, 10000);
            tam12 = atoi(prox);
            vq3[contvq3] = tam12;
            contvq3 ++ ; 
        } while (!arqe12.eof());
        arqs12.close();
      }  
      
      //Bubble sort

      //aleatorio1000
      t = clock();
      int aux, te ;
      if (ordenacao == 1 && instancia == 1 ){
        t = clock() ;
        aux = 0 ; 
        for (int i=0;i<1000;i++){
            for (int j=0;j<999;j++){
                if(v[j] >v[j+1]){
                    nc ++ ; 
                    aux = v[j] ; 
                    v[j] = v[j+1] ;
                    v[j+1] = aux ;      
                } 
            }
        }
        for (int i=0;i<1000;i++){
          cout << v[i] << endl ; 
        }
      t = clock() - t ;  
      cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;   
      }

      //aleatorio1000

      if (ordenacao == 1 && instancia == 2 ){
        aux = 0 ; 
        t = clock();
        for (int i=0;i<10000;i++){
            for (int j=0;j<9999;j++){
                if(v2[j] >v2[j+1]){
                    aux = v2[j] ; 
                    v2[j] = v2[j+1] ;
                    nc++ ; 
                    v2[j+1] = aux ;
                } 
            }
        }
        for (int i=0;i<10000;i++){
          cout << v2[i] << endl ; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ; 
      }
    
      //aleatorio10000
    
      if (ordenacao == 1 && instancia == 3 ){
          aux = 0 ; 
          t = clock() ; 
        for (int i=0;i<100000;i++){
            nt++;
            for (int j=0;j<99999;j++){
                if(v3[j] >v3[j+1]){
                    aux = v3[j] ; 
                    nc++;
                    v3[j] = v3[j+1] ;
                    v3[j+1] = aux ;
                } 
            }
        }
        for (int i=0;i<100000;i++){
          cout << v3[i] << endl ; 
        }   
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ; 
      }

      //inversamenteordenada1000

      if (ordenacao == 1 && instancia == 4 ){ 
        aux = 0 ; 
        t = clock() ;
        for (int i=0;i<1000;i++){
            for (int j=0;j<999;j++){
                nt++ ;
                if(vi[j] >vi[j+1]){
                    aux = vi[j] ; 
                    nc++;
                    vi[j] = vi[j+1] ;
                    vi[j+1] = aux ;
                } 
            }
        }
        for (int i=0;i<1000;i++){
          cout << vi[i] << endl ; 
        }   
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //inversamenteordenada10000

      if (ordenacao == 1 && instancia == 5 ){
        aux = 0 ; 
        t = clock() ;
        for (int i=0;i<10000;i++){
            for (int j=0;j<9999;j++){
              nt++;
                if(vi2[j] >vi2[j+1]){
                    aux = vi2[j] ; 
                    nc++;
                    vi2[j] = vi2[j+1] ;
                    vi2[j+1] = aux ;
                } 
            }
        }
        for (int i=0;i<10000;i++){
          cout << vi2[i] << endl ; 
        } 
          t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;  
      }

      //inversamenteordenada100000

      if (ordenacao == 1 && instancia == 6 ){
        aux = 0 ; 
        t = clock() ;
        for (int i=0;i<100000;i++){ 
            nt++;
            for (int j=0;j<99999;j++){
                if(vi3[j] >vi3[j+1]){
                    nc++;
                    aux = vi3[j] ; 
                    vi3[j] = vi3[j+1] ;
                    vi3[j+1] = aux ;
                } 
            }
        }
        for (int i=0;i<100000;i++){
          cout << vi3[i] << endl ; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;   
      }

      //listaordenada1000

      if (ordenacao == 1 && instancia == 7 ){
        aux = 0 ;
        t = clock() ; 
        for (int i=0;i<1000;i++){
            nt++;
            for (int j=0;j<999;j++){
                if(vo[j] >vo[j+1]){
                    nc++;
                    aux = vo[j] ; 
                    vo[j] = vo[j+1] ;
                    vo[j+1] = aux ;
                } 
            }
        }
        for (int i=0;i<1000;i++){
          cout << vo[i] << endl ; 
        } 
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //listaordenada10000

      if (ordenacao == 1 && instancia == 8){
        aux = 0 ; 
        t = clock() ;
        for (int i=0;i<10000;i++){
            nt++;
            for (int j=0;j<9999;j++){
                if(vo2[j] >vo2[j+1]){
                    nc++;
                    aux = vo2[j] ; 
                    vo2[j] = vo2[j+1] ;
                    vo2[j+1] = aux ;
                } 
            }
        }
        for (int i=0;i<10000;i++){
          cout << vo2[i] << endl ; 
        }  
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //listaordenada100000

      if (ordenacao == 1 && instancia == 9 ){
        aux = 0 ; 
        t = clock() ;
        for (int i=0;i<100000;i++){
            nt++;
            for (int j=0;j<99999;j++){
                if(vo3[j] >vo3[j+1]){
                    nc++;
                    aux = vo3[j] ; 
                    vo3[j] = vo3[j+1] ;
                    vo3[j+1] = aux ;
                } 
            }
        }
        for (int i=0;i<100000;i++){
          cout << vo3[i] << endl ; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;   
      }

      //listaquaseordenada1000

      if (ordenacao == 1 && instancia == 10 ){  
        aux = 0 ; 
        t = clock() ;
        for (int i=0;i<1000;i++){
            nt++;
            for (int j=0;j<999;j++){
                if(vq[j] >vq[j+1]){
                    nc++;
                    aux = vq[j] ; 
                    vq[j] = vq[j+1] ;
                    vq[j+1] = aux ;
                } 
            }
        }
        for (int i=0;i<1000;i++){
          cout << vq[i] << endl ; 
        }  
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ; 
      }
      //listaquaseordenada10000

      if (ordenacao == 1 && instancia == 11 ){
        aux = 0 ; 
        t = clock() ;
        for (int i=0;i<10000;i++){
            for (int j=0;j<9999;j++){
                nt++;
                if(vq2[j] >vq2[j+1]){
                    nc++;
                    aux = vq2[j] ; 
                    vq2[j] = vq2[j+1] ;
                    vq2[j+1] = aux ;
                } 
            }
        }
        for (int i=0;i<10000;i++){
          cout << vq2[i] << endl ; 
        }   
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }
      //listaquaseordenada100000

      if (ordenacao == 1 && instancia == 12 ){
        aux = 0 ;
        t = clock() ;
        for (int i=0;i<100000;i++){
            nt++;
            for (int j=0;j<99999;j++){
                if(vq3[j] >vq3[j+1]){
                    nc++;
                    aux = vq3[j] ; 
                    vq3[j] = vq3[j+1] ;
                    vq3[j+1] = aux ;
                } 
            }
        }
        for (int i=0;i<100000;i++){
          cout << vq3[i] << endl ; 
        }  
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ; 
      }

      //Shell sort
      int value;
      int h = 1;
      //aleatorio1000

      if (ordenacao == 2 && instancia == 1 ){
        t = clock();  
        while (h < 1000){
            nc++;
            h = 3 * h + 1;
        }
        while (h > 0){
            nc++;
            for (i = h; i < 1000; i++){
                value = v[i];
                j = i;
                while (j > h - 1 && value <= v[j - h]){
                    nt++;
                    v[j] = v[j - h];
                    nt++;
                    j = j - h;
                }
                nc++;
                if (j != i){
                    nt++;
                    v[j] = value;
                }
            }
            h = h / 3;  
        }
        for (i=0;i<1000;i++){
          cout << v[i] << endl ; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //aleatorio1000

      if (ordenacao == 2 && instancia == 2 ){
        t = clock() ;
        while (h < 1000){
           nc++;
           h = 3 * h + 1;
        }
        while (h > 0){
            nc++;
            for (i = h; i < 10000; i++){
                value = v2[i];
                j = i;
                while (j > h - 1 && value <= v2[j - h]){
                    nt++;
                    v2[j] = v2[j - h];
                    nt++;
                    j = j - h;
                }
                nc++;
                if (j != i){
                    nt++;
                    v2[j] = value;
                }
            }
            h = h / 3;
        }
        for (i=0;i<10000;i++){
          cout << v2[i] << endl ; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }
    
      //aleatorio10000

      if (ordenacao == 2 && instancia == 3 ){
          t = clock();                          
          while (h < 100000){
            nc++;
            h = 3 * h + 1;
        }
        while (h > 0){
            nc++;
            for (i = h; i < 100000; i++){
                value = v3[i];
                j = i;
                while (j > h - 1 && value <= v3[j - h]){
                    nt++;
                    v3[j] = v3[j - h];
                    nt++;
                    j = j - h;
                }
                nc++;
                if (j != i){
                    nt++;
                    v3[j] = value;
                }
            }
            h = h / 3;
        }
        for (i=0;i<100000;i++){
          cout << v3[i] << endl ; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ; 
      }

      //inversamenteordenada1000

      if (ordenacao == 2 && instancia == 4 ){
          t = clock();  
          while (h < 1000){
            nc++;
            h = 3 * h + 1;
        }
        while (h > 0){
            nc++;
            for (i = h; i < 1000; i++){
                value = vi[i];
                j = i;
                while (j > h - 1 && value <= vi[j - h]){
                    nt++;
                    vi[j] = vi[j - h];
                    nt++;
                    j = j - h;
                }
                nc++;
                if (j != i){
                    nt++;
                    vi[j] = value;
                }
            }
            h = h / 3;
        }
        for (i=0;i<1000;i++){
          cout << vi[i] << endl ; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //inversamenteordenada10000

      if (ordenacao == 2 && instancia == 5 ){
        t = clock();  
        while (h < 1000){
            nc++;
            h = 3 * h + 1;
        }
        while (h > 0){
            nc++;
            for (i = h; i < 10000; i++){
                value = vi2[i];
                j = i;
                while (j > h - 1 && value <= vi2[j - h]){
                    nt++;
                    vi2[j] = vi2[j - h];
                    nt++;
                    j = j - h;
                }
                nc++;
                if (j != i){
                    nt++;
                    vi2[j] = value;
                }
            }
            h = h / 3;
        }
        for (i=0;i<10000;i++){
          cout << vi2[i] << endl ; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //inversamenteordenada100000

      if (ordenacao == 2 && instancia == 6 ){
        t = clock();  
        while (h < 1000){
            nc++;
            h = 3 * h + 1;
        }
        while (h > 0){
            nc++;
            for (i = h; i < 100000; i++){
                value = vi3[i];
                j = i;
                while (j > h - 1 && value <= vi3[j - h]){
                    nt++;
                    vi3[j] = vi3[j - h];
                    nt++;
                    j = j - h;
                }
                nc++;
                if (j != i){
                    nt++;
                    vi3[j] = value;
                }
            }
            h = h / 3;
        }
        for (i=0;i<100000;i++){
          cout << vi3[i] << endl ; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //listaordenada1000

      if (ordenacao == 2 && instancia == 7 ){
        t = clock();  
        while (h < 1000){
            nc++;
            h = 3 * h + 1;
        }
        while (h > 0){
            nc++;
            for (i = h; i < 1000; i++){
                value = vo[i];
                j = i;
                while (j > h - 1 && value <= vo[j - h]){
                    nt++;
                    vo[j] = vo[j - h];
                    nt++;
                    j = j - h;
                }
                nc++;
                if (j != i){
                    nt++;
                    vo[j] = value;
                }
            }
            h = h / 3;
        }
        for (i=0;i<1000;i++){
          cout << vo[i] << endl ; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //listaordenada10000

      if (ordenacao == 2 && instancia == 8){
        t = clock();  
        while (h < 10000){
            nc++;
            h = 3 * h + 1;
        }
        while (h > 0){
            nc++;
            for (i = h; i < 10000; i++){
                value = vo2[i];
                j = i;
                while (j > h - 1 && value <= vo2[j - h]){
                    nt++;
                    vo2[j] = vo2[j - h];
                    nt++;
                    j = j - h;
                }
                nc++;
                if (j != i){
                    nt++;
                    vo2[j] = value;
                }
            }
            h = h / 3;
        }
        for (i=0;i<10000;i++){
          cout << vo2[i] << endl ; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //listaordenada100000

      if (ordenacao == 2 && instancia == 9 ){
        t = clock();  
        while (h < 100000){
            nc++;
            h = 3 * h + 1;
        }
        while (h > 0){
            nc++;
            for (i = h; i < 100000; i++){
                value = v3[i];
                j = i;
                while (j > h - 1 && value <= v3[j - h]){
                    nt++;
                    vo3[j] = v3[j - h];
                    nt++;
                    j = j - h;
                }
                nc++;
                if (j != i){
                    nt++;
                    v3[j] = value;
                }
            }
            h = h / 3;
        }
        for (i=0;i<100000;i++){
          cout << v3[i] << endl ; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //listaquaseordenada1000

      if (ordenacao == 2 && instancia == 10 ){
          t = clock();  
          while (h < 1000){
            nc++;
            h = 3 * h + 1;
        }
        while (h > 0){
            nc++;
            for (i = h; i < 1000; i++){
                value = vq[i];
                j = i;
                while (j > h - 1 && value <= vq[j - h]){
                    nt++;
                    vq[j] = vq[j - h];
                    nt++;
                    j = j - h;
                }
                nc++;
                if (j != i){
                    nt++;
                    vq[j] = value;
                }
            }
            h = h / 3;
        }
        for (i=0;i<1000;i++){
          cout << vq[i] << endl ; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //listaquaseordenada10000

      if (ordenacao == 2 && instancia == 11 ){
          t = clock();  
          while (h < 10000){
            nc++;
            h = 3 * h + 1;
        }
        while (h > 0){
            nc++;
            for (i = h; i < 10000; i++){
                value = vq2[i];
                j = i;
                while (j > h - 1 && value <= vq2[j - h]){
                    nt++;
                    vq2[j] = vq2[j - h];
                    nt++;
                    j = j - h;
                }
                nc++;
                if (j != i){
                    nt++;
                    vq2[j] = value;
                }
            }
            h = h / 3;
        }
        for (i=0;i<10000;i++){
          cout << vq2[i] << endl ; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //listaquaseordenada100000

      if (ordenacao == 2 && instancia == 12 ){
        t = clock();   
        while (h < 100000){
            nc++;
            h = 3 * h + 1;
        }
        while (h > 0){
            nc++;
            for (i = h; i < 100000; i++){
                value = vq3[i];
                j = i;
                while (j > h - 1 && value <= vq3[j - h]){
                    nt++;
                    vq3[j] = vq3[j - h];
                    nt++;
                    j = j - h;
                }
                nc++;
                if (j != i){
                    nt++;
                    vq3[j] = value;
                }
            }
            h = h / 3;
        }
        for (i=0;i<100000;i++){
          cout << vo3[i] << endl ; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }
      
      //Selection sort
      int menor, pos ; 
      bool troca ; 
      //aleatorio1000

      if (ordenacao == 3 && instancia == 1 ){
        t = clock();  
        aux = 0 ; 
        for (i = 0; i < 1000 - 1; i++){
            menor = i;
            for (j = i + 1; j < 1000; j++){
                if (v[j] < v[menor]){
                    nc++;
                    menor = j;
                }
            }
            aux = v[i];
            v[i] = v[menor];
            v[menor] = aux;
        }
        for (i=0;i<1000;i++){
          cout << v[i] << endl ;
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //aleatorio10000

      if (ordenacao == 3 && instancia == 2 ){
          t = clock();  
          aux = 0 ; 
        for (i=0;i<10000-1;i++){
            menor = i;
            for (j=i+1;j<10000;j++){
                if (v2[j] < v2[menor]){
                    nc++;
                    menor = j;
                }
            }
            aux = v2[i];
            v2[i] = v2[menor];
            v2[menor] = aux;
        }
        for (i=0;i<10000;i++){
          cout << v2[i] << endl ;
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }
    
      //aleatorio100000
      
      if (ordenacao == 3 && instancia == 3 ){
        t = clock() ; 
        aux = 0 ; 
        for (i = 0; i < 100000 - 1; i++){
            menor = i;
            for (j = i + 1; j < 100000; j++){
                if (v3[j] < v3[menor]){
                    nc++;
                    menor = j;
                }
            }
            aux = v3[i];
            v3[i] = v3[menor];
            v3[menor] = aux;
        }
        for (int i=0;i<100000;i++){
          cout << v3[i] << endl ;
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ; 
      }

      //inversamenteordenada1000

      if (ordenacao == 3 && instancia == 4 ){
        t = clock();  
        aux = 0 ; 
        for (i=0;i<1000-1;i++){
            menor = i;
            for (j=i+1;j<1000;j++){
                if (vi[j] < vi[menor]){
                    nc++;
                    menor = j;
                }
            }
            aux = vi[i];
            vi[i] = vi[menor];
            vi[menor] = aux;
        }
        for (i=0;i<1000;i++){
          cout << vi[i] << endl ;
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //inversamenteordenada10000

      if (ordenacao == 3 && instancia == 5 ){
        t = clock();  
        aux = 0 ; 
        for (i=0;i<10000-1;i++){
            menor = i;
            for (j=i+1;j<10000;j++){
                if (vi2[j] < vi2[menor]){
                    nc++;
                    menor = j;
                }
            }
            aux = vi2[i];
            vi2[i] = vi2[menor];
            vi2[menor] = aux;
        }
        for (i=0;i<10000;i++){
          cout << vi2[i] << endl ;
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //inversamenteordenada100000

      if (ordenacao == 3 && instancia == 6 ){
        t = clock();  
        aux = 0 ; 
        for (i=0;i<100000-1;i++){
            menor = i;
            for (j=i+1;j<100000;j++){
                if (vi3[j] < vi3[menor]){
                    nc++;
                    menor = j;
                }
            }
            aux = vi3[i];
            vi3[i] = vi3[menor];
            vi3[menor] = aux;
        }
        for (i=0;i<100000;i++){
          cout << vi3[i] << endl ;
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //listaordenada1000

      if (ordenacao == 3 && instancia == 7 ){
        t = clock();  
        aux = 0 ; 
        for (i=0;i<1000-1;i++){
            menor = i;
            for (j=i+1;j<1000;j++){
                if (vo[j] < vo[menor]){
                    nc++;
                    menor = j;
                }
            }
            aux = vo[i];
            vo[i] = vo[menor];
            vo[menor] = aux;
        }
        for (i=0;i<1000;i++){
          cout << vo[i] << endl ;
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //listaordenada10000

      if (ordenacao == 3 && instancia == 8){
        t = clock();  
        aux = 0 ; 
        for (i=0;i<10000-1;i++){
            menor = i;
            for (j=i+1;j<10000;j++){
                if (vo2[j] < vo2[menor]){
                    menor = j;
                    nc++;
                }
            }
            aux = vo2[i];
            nt++;
            vo2[i] = vo2[menor];
            vo2[menor] = aux;
        }
        for (i=0;i<10000;i++){
          cout << vo2[i] << endl ;
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //listaordenada100000

      if (ordenacao == 3 && instancia == 9 ){
        t = clock();  
        aux = 0 ; 
        for (i=0;i<100000-1;i++){
            menor = i;
            for (j=i+1;j<100000;j++){
                if (vo3[j] < vo3[menor]){
                    nc++;
                    menor = j;
                }
            }
            aux = vo3[i];
            vo3[i] = vo3[menor];
            vo3[menor] = aux;
        }
        for (i=0;i<100000;i++){
          cout << vo3[i] << endl ;
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //listaquaseordenada1000

      if (ordenacao == 3 && instancia == 10 ){
        t = clock();    
        aux = 0 ; 
        for (i=0;i<1000-1;i++){
            menor = i;
            for (j=i+1;j<1000;j++){
                if (vq[j] < vq[menor]){
                    nc++;
                    menor = j;
                }
            }
            aux = vq[i];
            vq[i] = vq[menor];
            vq[menor] = aux;
        }
        for (i=0;i<1000;i++){
          cout << vq[i] << endl ;
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //listaquaseordenada10000

      if (ordenacao == 3 && instancia == 11 ){
        t = clock();  
        aux = 0 ; 
        for (i=0;i<10000-1;i++){
            menor = i;
            for (j=i+1;j<10000;j++){
                if (vq2[j] < vq2[menor]){
                    nc++;
                    menor = j;
                }
            }
            aux = vq2[i];
            vq2[i] = vq2[menor];
            vq2[menor] = aux;
        }
        for (i=0;i<10000;i++){
          cout << vq2[i] << endl ;
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //listaquaseordenada100000

      if (ordenacao == 3 && instancia == 12 ){
        t = clock();  
        aux = 0 ; 
        for (i=0;i<100000-1;i++){
            menor = i;
            for (j=i+1;j<100000;j++){
                if (vq3[j] < vq3[menor]){
                    nc++;
                    menor = j;
                }
            }
            aux = vq3[i];
            vq3[i] = vq3[menor];
            vq3[menor] = aux;
        }
        for (i=0;i<100000;i++){
          cout << vq3[i] << endl ;
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //Insertion sort

      //aleatorio1000

      if (ordenacao == 4 && instancia == 1 ){
        t = clock();
        aux = 0 ; 
        for (int i=0;i<999;i++){
            for (int j=i+1;j>0;j--){
                if (v[j] < v[j-1]){
                    nc++ ; 
                    aux = v[j];
                    v[j] = v[j-1]; 
                    v[j-1] = aux ; 
                }
            }
        }  
        for (int i=0; i<1000; i++){
            cout << v[i] << endl; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ; 
      }

      //aleatorio1000

      if (ordenacao == 4 && instancia == 2 ){
        t = clock();
        aux = 0 ; 
        for (int i=0;i<9999;i++){
          nt++ ; 
            for (int j=i+1;j>0;j--){
                if (v2[j] < v2[j-1]){
                    aux = v2[j];
                    nc++ ; 
                    v2[j] = v2[j-1]; 
                    v2[j-1] = aux ; 
                }
            }
        }
        for (int i=0; i<10000; i++){
              cout << v2[i] << endl; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ; 
      }
    
      //aleatorio10000

      if (ordenacao == 4 && instancia == 3 ){
        t = clock() ; 
        aux = 0 ; 
        for (int i=0;i<99999;i++){
            for (int j=i+1;j>0;j--){
                nt++;
                if (v3[j] < v3[j-1]){
                    nc++ ;
                    aux = v3[j];
                    v3[j] = v3[j-1]; 
                    v3[j-1] = aux ; 
                }
            }
        } 
        for (int i=0; i<100000; i++){
            cout << v3[i] << endl; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ; 
      }

      //inversamenteordenada1000

      if (ordenacao == 4 && instancia == 4 ){
        t = clock();
        aux = 0 ; 
        for (int i=0;i<999;i++){
            for (int j=i+1;j>0;j--){
                nt ++;
                if (vi[j] < vi[j-1]){
                    nc++ ; 
                    aux = vi[j];
                    vi[j] = vi[j-1]; 
                    vi[j-1] = aux ; 
                }
            }
        }
        
        for (int i=0; i<1000; i++){
            cout << vi[i] << endl; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ; 
      }

      //inversamenteordenada10000

      if (ordenacao == 4 && instancia == 5 ){
        t = clock();
        aux = 0 ; 
        for (int i=0;i<9999;i++){
            for (int j=i+1;j>0;j--){
                nt ++ ; 
                if (vi2[j] < vi2[j-1]){
                    nc ++;
                    aux = vi2[j];
                    vi2[j] = vi2[j-1]; 
                    vi2[j-1] = aux ; 
                }
            }
        }        
        for (int i=0; i<10000; i++){
            cout << vi2[i] << endl; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ; 
      }

      //inversamenteordenada100000

      if (ordenacao == 4 && instancia == 6 ){          
        aux = 0 ; 
        for (int i=0;i<99999;i++){
            for (int j=i+1;j>0;j--){
                nt++ ; 
                if (vi3[j] < vi3[j-1]){
                    nc++ ;
                    aux = vi3[j];
                    vi3[j] = vi3[j-1]; 
                    vi3[j-1] = aux ; 
                }
            }
        }        
        for (int i=0; i<100000; i++){
            cout << vi3[i] << endl; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ; 
      }

      //listaordenada1000

      if (ordenacao == 4 && instancia == 7 ){
        aux = 0 ; 
        for (int i=0;i<999;i++){
            for (int j=i+1;j>0;j--){
                nt ++ ;
                if (vo[j] < vo[j-1]){
                    nc ++; 
                    aux = vo[j];
                    vo[j] = vo[j-1]; 
                    vo[j-1] = aux ; 
                }
            }
        }
        for (int i=0; i<1000; i++){
            cout << vo[i] << endl; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ; 
      }

      //listaordenada10000

      if (ordenacao == 4 && instancia == 8){
        t = clock();
        aux = 0 ; 
        for (int i=0;i<9999;i++){
            for (int j=i+1;j>0;j--){
                nt++ ; 
                if (vo2[j] < vo2[j-1]){
                    nc++ ; 
                    aux = vo2[j];
                    vo2[j] = vo2[j-1]; 
                    vo2[j-1] = aux ; 
                }
            }
        }
        for (int i=0; i<10000; i++){
            cout << vo2[i] << endl; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ; 
      }

      //listaordenada100000

      if (ordenacao == 4 && instancia == 9 ){
        t = clock();
        aux = 0 ; 
        for (int i=0;i<99999;i++){
            for (int j=i+1;j>0;j--){
              nt ++ ; 
                if (vo3[j] < vo3[j-1]){
                    nc++ ;
                    aux = vo3[j];
                    vo3[j] = vo3[j-1]; 
                    vo3[j-1] = aux ; 
                }
            }
        }
        for (int i=0; i<100000; i++){
            cout << vo3[i] << endl; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ; 
      }

      //listaquaseordenada1000

      if (ordenacao == 4 && instancia == 10 ){
        t = clock();
        aux = 0 ; 
        for (int i=0;i<999;i++){
            for (int j=i+1;j>0;j--){
                nt ++; 
                if (vq[j] < vq[j-1]){
                    nc++ ; 
                    aux = vq[j];
                    vq[j] = vq[j-1]; 
                    vq[j-1] = aux ; 
                }
            }
        }
        for (int i=0; i<1000; i++){
            cout << vq[i] << endl; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ; 
      }

      //listaquaseordenada10000

      if (ordenacao == 4 && instancia == 11 ){
      t = clock();
      aux = 0 ; 
        for (int i=0;i<9999;i++){
            for (int j=i+1;j>0;j--){
                nt++;
                if (vq2[j] < vq2[j-1]){
                    aux = vq2[j];
                    nc++; 
                    vq2[j] = vq2[j-1]; 
                    vq2[j-1] = aux ; 
                }
            }
        }        
        for (int i=0; i<10000; i++){
            cout << vq2[i] << endl; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ; 
      }

      //listaquaseordenada100000

      if (ordenacao == 4 && instancia == 12 ){
      t = clock();
      aux = 0 ; 
        for (int i=0;i<99999;i++){
            for (int j=i+1;j>0;j--){
                nt++ ; 
                if (vq3[j] < vq3[j-1]){
                    aux = vq3[j];
                    nc++ ; 
                    vq3[j] = vq3[j-1]; 
                    vq3[j-1] = aux ; 
                }
            } 
          }  
        for (int i=0; i<100000; i++){
            cout << vq3[i] << endl; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ; 
      }

      //Quick Sort

      //aleatorio1000

      if (ordenacao == 5 && instancia == 1 ){
        t = clock();
        quick_sort(v, &nc, 0, 1000 - 1);
        for(i = 0; i < 1000; i++){
          cout << v[i] << endl ; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;  
      }

      //aleatorio10000

      if (ordenacao == 5 && instancia == 2 ){
        t = clock() ; 
        quick_sort(v2, &nc, 0, 10000 - 1);
        for(i = 0; i < 10000; i++){
          cout << v2[i] << endl ; 
        } 
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //aleatorio100000

      if (ordenacao == 5 && instancia == 3 ){
        t = clock();
        quick_sort(v3, &nc, 0, 100000 - 1);
        for(i = 0; i < 100000; i++){
          cout << v3[i] << endl ; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //inversamenteordenada1000

      if (ordenacao == 5 && instancia == 4 ){
        t = clock();
        quick_sort(vi, &nc, 0, 1000 - 1);
        for(i = 0; i < 1000; i++){
          cout << vi[i] << endl ; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //inversamenteordenada10000

      if (ordenacao == 5 && instancia == 5 ){
        t = clock();
        quick_sort(vi2, &nc, 0, 10000 - 1);
        for(i = 0; i < 10000; i++){
          cout << vi2[i] << endl ; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //inversamenteordenada100000

      if (ordenacao == 5 && instancia == 6 ){
        t = clock();
        quick_sort(vi3, &nc, 0, 100000 - 1);
        for(i = 0; i < 100000; i++){
          cout << vi3[i] << endl ; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //listaordenada1000

      if (ordenacao == 5 && instancia == 7 ){
        t = clock();
        quick_sort(vo, &nc, 0, 1000 - 1);
        for(i = 0; i < 1000; i++){
          cout << vo[i] << endl ; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //listaordenada10000

      if (ordenacao == 5 && instancia == 8){
        t = clock();
        quick_sort(vo2, &nc, 0, 100-0 - 1);
        for(i = 0; i < 10000; i++){
          cout << vo2[i] << endl ; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //listaordenada100000

      if (ordenacao == 5 && instancia == 9 ){
        t = clock();
        quick_sort(vo3, &nc, 0, 100000 - 1);
        for(i = 0; i < 100000; i++){
          cout << vo3[i] << endl ; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //listaquaseordenada1000

      if (ordenacao == 5 && instancia == 10 ){
        t = clock();
        quick_sort(vq, &nc, 0, 1000 - 1);
        for(i = 0; i < 1000; i++){
          cout << vq[i] << endl ; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //listaquaseordenada10000


      if (ordenacao == 5 && instancia == 11 ){
        t = clock();      
        quick_sort(vq2, &nc, 0, 10000 - 1);
        for(i = 0; i < 10000; i++){
          cout << vq2[i] << endl ; 
        }
        t = clock() - t ;  
        cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //listaquaseordenada100000

      if (ordenacao == 5 && instancia == 12 ){  
          t = clock();
          quick_sort(vq3, &nc, 0, 100000 - 1);
          for(i = 0; i < 100000; i++){
            cout << vq3[i] << endl ; 
          }
          t = clock() - t ;  
          cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //Marge sort

      //aleatorio1000

      if (ordenacao == 6 && instancia == 1 ){ 
          t = clock();      
          mergesort (0, 1000 - 1, v); 
          for (int i=0; i<1000;i++){
            cout << v[i] << endl ;
          }
          t = clock() - t ;  
          cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //aleatorio10000

      if (ordenacao == 6 && instancia == 2 ){
          t = clock();
          mergesort (0, 10000 - 1, v2); 
          for (int i=0; i<10000;i++){
            cout << v2[i] << endl ;
          }
          t = clock() - t ;  
          cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }
    
      //aleatorio100000

      if (ordenacao == 6 && instancia == 3 ){   
          t = clock();
          mergesort (0, 100000 - 1, v3); 
          for (int i=0; i<100000;i++){
            cout << v3[i] << endl ;
          }
          t = clock() - t ;  
          cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //inversamenteordenada1000

      if (ordenacao == 6 && instancia == 4 ){   
        t = clock();
        mergesort (0, 1000 - 1, vi); 
          for (int i=0; i<1000;i++){
            cout << vi[i] << endl ;
          }
          t = clock() - t ;  
          cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //inversamenteordenada10000

      if (ordenacao == 6 && instancia == 5 ){
        t = clock();
        mergesort (0, 10000 - 1, vi2); 
          for (int i=0; i<10000;i++){
            cout << vi2[i] << endl ;
          }
          t = clock() - t ;  
          cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //inversamenteordenada100000

      if (ordenacao == 6 && instancia == 6 ){
        t = clock();
        mergesort (0, 100000 - 1, vi3); 
          for (int i=0; i<100000;i++){
            cout << vi3[i] << endl ;
          }
          t = clock() - t ;  
          cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //listaordenada1000

      if (ordenacao == 6 && instancia == 7 ){
        t = clock();
        mergesort (0, 1000 - 1, vo); 
          for (int i=0; i<1000;i++){
            cout << vo[i] << endl ;
          }
          t = clock() - t ;  
          cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ; 
      }

      //listaordenada10000

      if (ordenacao == 6 && instancia == 8){
        t = clock();
        mergesort (0, 10000 - 1, vo2); 
          for (int i=0; i<10000;i++){
            cout << vo2[i] << endl ;
          }
          t = clock() - t ;  
          cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //listaordenada100000

      if (ordenacao == 6 && instancia == 9 ){
        t = clock();     
        mergesort (0, 100000 - 1, vo3);
            for (int i=0; i<100000;i++){
            cout << vo3[i] << endl ;
          }
          t = clock() - t ;  
          cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ; 
      }

      //listaquaseordenada1000

      if (ordenacao == 6 && instancia == 10 ){
        t = clock();
        mergesort (0, 1000 - 1, vq); 
          for (int i=0; i<1000;i++){
            cout << vq[i] << endl ;
          }
          t = clock() - t ;  
          cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ;
      }

      //listaquaseordenada10000

      if (ordenacao == 6 && instancia == 11 ){
        t = clock();
        mergesort (0, 10000 - 1, vq2); 
          for (int i=0; i<10000;i++){
            cout << vq2[i] << endl ;
          }
          t = clock() - t ;  
          cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ; 
      }

      //listaquaseordenada100000

      if (ordenacao == 6 && instancia == 12 ){
        t = clock();
        mergesort (0, 100000 - 1, vq3); 
          for (int i=0; i<100000;i++){
            cout << vq3[i] << endl ;
          } 
          t = clock() - t ;  
          cout << "Tempo " <<float(t)/CLOCKS_PER_SEC << " Segundos. " ; 
      } 
      printf ("\nComparações %d ", nc ) ; 
      int tecla  ;
      cout << "\n\nPrecione uma Digito para voltar ao menu" << endl ; 
      scanf  ("%d",&tecla) ; 
      goto menuInst;
      return 0 ; 
    }

    void quick_sort(int *a, int *ncp, int left, int right) {
        int i, j, x, y, nt;
        int cont = 1 ;
        
        i = left;
        j = right;
        x = a[(left + right) / 2];
        
        while(i <= j) {
            while(a[i] < x && i < right) {
                i++;
                nt++ ; 
                ncp++ ; 
            }
            while(a[j] > x && j > left) {
                j--;
                nt++ ;
                ncp++ ;
            }
            if(i <= j) {
                y = a[i];
                a[i] = a[j];
                ncp++;
                a[j] = y;
                i++;
                j--;
            }
        }
        
        if(j > left) {
            ncp++ ; 
            quick_sort(a, ncp, left, j);
        }
        if(i < right) {
            ncp++ ; 
            quick_sort(a, ncp, i, right);
        }
    }

          void intercala (int p, int q, int r, int v[]) {
            int i, j, k;
            int cont = 100000 ; 
            int w[cont];
            int nt, nc ; 

        i = p; 
          j = q;
          k = 0;

          while (i < q && j <= r) {
            if (v[i] <= v[j])  
              w[k++] = v[i++];
            else  
              w[k++] = v[j++];
          }
          
          while (i < q)  
            w[k++] = v[i++];

          while (j <= r)  
            w[k++] = v[j++];

          for (i = p; i <= r; i++)  
            v[i] = w[i-p];
        }

        void mergesort (int p, int r, int v[]) {
          if (p < r) {
            int q = (p + r)/2;
            mergesort (p, q, v);
            mergesort (q+1, r, v);
            intercala (p, q+1, r, v);
          }
        }