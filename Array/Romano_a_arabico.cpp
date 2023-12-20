#include <bits/stdc++.h>
using namespace std;
int valor(char c){ //datos de los numeros romanos en arabico
    switch (c)
    {
    case 'I':
        return 1;
        break;
    case 'V':
        return 5;
        break;
    case 'X':
        return 10;
        break;
    case 'L':
        return 50;
        break;
    case 'C':
        return 100;
        break;
    case 'D':
        return 500;
        break;
    case 'M':
        return 1000;
        break;
    }
    return -1;
}
bool verific(string s){ //versifica si el numero en romano ingresado ese valido
    int date = 0;
    for (int i = 0; i < (int)s.length(); i++){
        if(i == 0){
            continue;
        }else{
            if(valor(s.at(i-1)) == valor(s.at(i))){
                date++;
            }else{
                date = 0;
            }
        }
        if(valor(s.at(i))==-1 || date == 3){
            return false;
        }
    }
    return true;
}
void numeroRomano(string s){//muestra el dato en arabico el numero romano ingresado
    int resultado = 0;
    for (int i = 0; i < (int)s.length(); i++){//RECORRE TODA LA LONGITUD DE LA CADENA
        if(i<(int)s.length()-1){
            if(valor(s.at(i)) < (valor(s.at(i+1)))){
                resultado-=valor(s.at(i));
            }else{
                resultado+=valor(s.at(i));
            }
        }else{
            resultado+=valor(s.at(i));
        }
    }
    cout<<resultado<<endl; //imprime el dato
}
int main(){
    cout<<"\t==CONVERSION ROMANO A ARABICO=="<<endl;
    string s;
    cin>>s;
    if (verific(s)){
        numeroRomano(s);
    }else{
        cout<<"Numero romano erroneo!"<<endl;
    }
    return 0;
}