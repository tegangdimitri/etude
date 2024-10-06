#include <iostream>
#include<math.h>
int main (int argc , char** argv)
{
    int x;
    do{
        float ab,bc,ac ;
        std :: cout <<"Nous allons vous aider a determiner la nature d'un triangle\nEntrer la valeur d'un cote du triangle\n ";
        std :: cin >> ab ;
        std :: cout <<"Entrer la valeur d'un autre cote du triangle\n";
        std :: cin >> bc ;
        std :: cout <<"Entrer la valeur du dernier cote du triangle\n";
        std :: cin >> ac ;
        
        if(ab==ac==bc)
        {
            std :: cout <<"Le triangle est Equilaterale\n";

        }else if (ab == ac && ab != bc || ab == bc && ab != ac || ac == bc && ab != ac){
            std :: cout <<" Le triangle est Isossele\n";
        }else if (ab==sqrt(ac*ac+bc*bc) || ac==sqrt(ab*ab+bc*bc) ||bc==sqrt(ab*ab+ac*ac) )
        {
            std :: cout <<"Le triangle est rectangle\n";
        }else{
            std :: cout <<"Le triangle est quelconque\n";
        }
        std :: cout <<"Entrer un entier pour executer a nouveaux......";
        std :: cin >> x ;
    }while(x!=0);
    return 0;
}