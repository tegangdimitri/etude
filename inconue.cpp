#include <iostream>


#include <math.h>

int main (int argc , char** argv)
{ 
    int x;
    do{
        float c1 , c2 , c3 , angle;
        std :: cout <<"Nous allons vous aider a determiner le troisieme cote d'un triangle \nEmtrer la valeur du premier cote du triangle\n";
        std :: cin >> c1;
        std :: cout <<"Entrer la distance du deuxiemme cote du triangle \n ";
        std :: cin >> c2;
        std :: cout <<"Entrer la valeur de l'angle entre les 02 cote du triangle en radiand \n";
        std :: cin >> angle;
        c3 = c1*c1 + c2*c2 + 2*c1*c2*cos(angle) ;
        c3 = sqrt(c3) ;
        std :: cout <<"la valeur du troisimme cote est : "<< c3 <<"\nMercie d'avoir utilise notre programme";
        std:: cin >> x;
    }while(x!=0);
    return 0;
}