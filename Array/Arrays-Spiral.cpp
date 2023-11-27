//este codigo muestra la creacion de la matriz caracol paso a paso
#include <bits/stdc++.h>

using namespace std; 
const int n = 3; //para matriz de 3*3
int m[n][n] = {{0,0,0},
               {0,0,0},
               {0,0,0}}; 
void muestraMatriz(int m[n][n]){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}
//genera la matriz paso a paso
void generaMatriz(){
    int num = 1;
    int fini=0,ffin = n-1,cini = 0,cfin = n-1;

    for (int i = 0; i < n; i++){ 
        for (int j = cini; j <= cfin; j++){
            cout<<"Dato: "<<num;
            m[fini][j] = num++;
            cout<<"\nfila: "<<fini+1;
            cout<<"\nColumna: "<<j+1<<endl;
            muestraMatriz(m);
            sleep(3);
            system("clear");

        }
        fini++;
        for (int k = fini; k <= ffin; k++){
            cout<<"\nDato: "<<num;
            m[k][cfin] = num++;
            cout<<"\nfila: "<<k+1;
            cout<<"\nColumna: "<<cfin+1<<endl;
            muestraMatriz(m);
            sleep(3);
            system("clear");
        }
        cfin--;
        for (int j = cfin; j >= cini; j--){
            cout<<"\nDato: "<<num;
            m[ffin][j] = num++;
            cout<<"\nfila: "<<ffin+1;
            cout<<"\nColumna: "<<j+1<<endl;
            muestraMatriz(m);
            sleep(3);
            system("clear");
        }
        ffin--;
        for (int k = ffin; k >= fini; k--){
            cout<<"\nDato: "<<num;
            m[k][cini] = num++;
            cout<<"\nfila: "<<k+1;
            cout<<"\nColumna: "<<cini+1<<endl;
            muestraMatriz(m);
            sleep(3);
            system("clear");
        }
        cini++;
    }
    muestraMatriz(m);
}
int main(){
    
    generaMatriz();
}