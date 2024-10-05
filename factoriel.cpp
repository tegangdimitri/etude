#include <iostream>
int main ()
{
    int X;
  {
             int n, fac, i ;
        std::cout <<"Nous alons calculer le factoriel d'un entier naturel\n";

                    std:: cout <<"entrer un nombre entier relarif strictement positif" << std :: endl;
                    std:: cin >> n ;
                    fac = 1;
                    if (n==0) 
                    {
                        std:: cout << "le factoriel de "<< n <<"est :"<< fac << std:: endl ;
                    }  else
                        {
                
                            for (i=1; i <=n ; i++ )
                            {
                                fac = fac *i ;
                                
                            }
                            std:: cout << "le factoriel de "<< n <<"est :"<< fac << std:: endl ; 
                        }
         std:: cout <<"merci d'avoir utiliser notre programme ! \nPour a nouveau le programme entrer un entier different de 0 \nSi non entrer 0 \n"  ;      
        std:: cin >> X;          
    } while(X!=0) ;
        return 0;
}