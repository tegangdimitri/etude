#include <iostream>
int main ()
{
     int a=0,X=1;
     do{
                std:: cout <<"Nous vous donnons la possiblite de determiner la surface et la hauteur du triange, du cercle, et du rectangle." << std:: endl;
                std:: cout <<"Pour le triangle entrer 1\nPour le cercle entrer 2 \nPour le rectangle entre 3" << std :: endl;
                std:: cin >> a ;
                if (a==1)
                {
                    float c1,c2,c3,base,hauteur,perimetre,surface;
                    std:: cout << "entrer la distance du premier cote"<< std::endl;
                    std:: cin >> c1;
                    std:: cout <<"entrer la distance du deuxieme cote"<< std::endl;
                    std:: cin >> c2;
                    std:: cout <<"entrer la distance du troisieme cote" << std::endl;
                    std:: cin >> c3;
                    std:: cout <<"entrer la base" << std::endl;
                    std:: cin >> base;
                    std:: cout <<"entrer la hauteur" << std::endl;
                    std:: cin >> hauteur;
                    perimetre = c1 + c2 + c3 ;
                    surface = base *hauteur/2 ;
                    std:: cout <<"le perimetre est : " << perimetre << std :: endl;
                    std:: cout <<"la surface est : "<< surface << std :: endl;
                } else if (a==2)
                {
                    float r,perimetre,surface;
                    float pi=3.14;
                    std:: cout <<"entrer le rayon du cercle"<< std:: endl;
                    std:: cin >> r;
                    perimetre = 2*pi*r;
                    surface = pi*r*r;
                    std:: cout << "le perinetre est : " << perimetre << std::endl;
                    std:: cout << "la surface est : " << surface << std:: endl;


                }else if (a==3)
                {
                    float L , l, perimetre , surface ;
                    std::cout <<"entrer la longeur"<< std:: endl;
                    std:: cin >> L;
                    std:: cout <<" entrer la largeur" << std:: endl;
                    std:: cin >> l ;
                    perimetre = 2*(l+L);
                    surface = l*L;
                    std:: cout << "le perimetre est : "<< perimetre << std::endl;
                    std:: cout <<"la surface est : " << surface << std ::endl;
                }  
        std:: cout <<"merci d'avoir utiliser notre programme ! \nPour a nouveau le programme entrer un entier different de 0 \nSi non entrer 0 \n"  ;      
        std:: cin >> X;          
    } while(X!=0) ;       
       
  return 0;  
}