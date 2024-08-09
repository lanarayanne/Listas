/*62. Se os numeros de 1 a 5 sao escritos em palavras: um, dois, tres, quatro, cinco, entao ha
2 + 4 + 4 + 6 + 5 = 22 letras usadas no total. Faca um programa que conte quantas letras
seriam utilizadas se todos os numeros de 1 a 1000 (mil) fossem escritos em palavras.
OBS: Nao conte espac¸os ou hifens.*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int um=2, dois=4, tres=4, quatro=6, cinco=5, seis=4, sete=4, oito=4, nove=4;
    int dez=3, onze=4, doze=4, treze=5, quatorze=8, quinze=6, dezesseis=9, dezessete=9, dezoito=7, dezenove=8;
    int vinte=5, trinta=6, quarenta=8, cinquenta=9, sessenta=8, setenta=7, oitenta=7, noventa=7;
    int cem=3, cento=5, duzentos=8, tezentos=8, quatrocentos=12, quinhentos=10, seiscentos=10, setecentos=10, oitocentos=10, novecentos=10;
    int mil = 3;
    int e=1;
    int soma, soma1,soma11,soma10,soma20,soma30,soma40,soma50,soma60,soma70,soma80,soma90,soma100,soma200,soma300,soma400,soma500,soma600,soma700,soma800,soma900,somae; 

    
    
    //Soma de 1 a 9
    soma1 = (um+dois+tres+quatro+cinco+seis+sete+oito+nove) * 90;
    
    //Soma de 11 - 19
    soma11 = (onze+doze+treze+quatorze+quinze+dezesseis+dezessete+dezoito+dezenove)*10;
    
    //Soma dezenas
    soma10 = (soma1+dez)*100;
    soma20 = vinte * 100;
    soma30 = trinta * 100;
    soma40 = quarenta * 100;
    soma50 = cinquenta * 100;
    soma60 = sessenta * 100;
    soma70 = setenta * 100;
    soma80 = oitenta * 100;
    soma90 = noventa * 100;
    
    //Soma centenas
    soma100 = (cento * 99)+cem;
    soma200 = duzentos * 100;
    soma300 = tezentos * 100;
    soma400 = quatrocentos * 100;
    soma500 = quinhentos * 100;
    soma600 = seiscentos * 100;
    soma700 = seiscentos * 100;
    soma800 = oitocentos * 100;
    soma900 = novecentos * 100;
    
    // Soma e
    somae = e*72*10*99;
    
    //soma total
    
    soma = soma1 +soma11 +soma10+soma20+soma30+soma40+soma50+soma60+soma70+soma80+soma90+soma100+soma200+soma300+soma400+soma500+soma600+soma700+soma800+soma900+somae+mil; 
    
    printf ("%d", soma);
    
    return 0;
}