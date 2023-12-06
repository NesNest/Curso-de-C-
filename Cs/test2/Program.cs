
using System;
int saludM = 10;
int saludH = 10;
Random rd = new Random();

do{
    int hit = rd.Next(1,11);
    saludM -= hit;
    
    if(saludM < 0){
        
        Console.WriteLine("golpe es de " + hit + " El moustro esta muerto");
    } 
    else{
        Console.WriteLine("Al monstro le quitan " + hit + " y se queda con " + saludM);
        hit = rd.Next(1,11);
        saludH -= hit;

        if(saludH < 0){
            Console.WriteLine("golpe de " + hit + " El heroe esta muerto");
        }
        else{
            Console.WriteLine("Al Heroe le quitan " + hit + " y se queda con " + saludH);

        }
    }

}while(saludM > 0);