#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 
#define STACKLIMIT 5
 
// ************ Muhammed Eminoglu ************
// *********www.algoritmauzmani.com***********
// *********www.muhammedeminoglu.com**********
 
//Stack veri yapýmýzý tutacaðýmýz dizi
int stack[STACKLIMIT - 1];
//Stack'in en üzerindeki yani en son eklenmiþ elemanýný top deðiþkeninde tutuyoruz
int top = -1;
 
//Yýðýnýn dolu olup olmadýðýný kontrol eden yardýmcý fonksiyon
bool checkFull()
{
    if(top >= STACKLIMIT - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
 
//Yýðýnýn boþ olup olmadýðýný kontrol eden yardýmcý fonksiyon
bool checkEmpty()
{
    if(top < 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
 
//Yýðýna eleman ekleyen fonksiyon
void push(int item)
{
    bool control = checkFull();
    //Eðer yýðýn dolu deðilse
    if(control == false)
    {
        //top indisini bir artýrýyor ve dizinin bu indisine deðerimizi atýyoruz
        top = top + 1;
        stack[top] = item;
    }
    //Eðer yýðýn dolu ise hata mesajý döndürüyoruz
    else
    {
        printf("\nStackoverflow!!! ... ");
    }
}
//Yýðýndan eleman çýkarak fonksiyon
void pop()
{
    bool control = checkEmpty();
    //Eðer yýðýn boþ deðilse...
    if(control == false)
    {
        //top indisini bir azaltýyoruz.
        top = top - 1;
    }
    else
    {
        printf("\n Your Stack is already empty you cant pop anything... ");
    }
}
 
int peek()
{
    bool control = checkEmpty();
    if(control == true)
    {
        printf("\n There is no item here ...");
        return 0;
    }
    return stack[top];
}
 
void printStack()
{
    int i;
    printf("\n ************************ \n");
    for( i = 0; i < top + 1; i++)
    {
        printf("%d ", stack[i]);
    }
}
 
//main menu
int main()
{
    int choise, item;
    int a;
    while(1 == 1)
    {
        printf("\n 1- Push an item");
        printf("\n 2- Pop an item");
        printf("\n 3- Peek (it shows top element of your stack ... ");
        scanf("%d", &choise);
 
        switch(choise)
        {
            case 1:
                printf("\n Which number do you want to add? ... ");
                scanf("%d", &item);
                push(item);
                printStack();
                break;
            case 2:
                pop();
                printStack();
                break;
            case 3:
                a = peek();
                printf("\n Your Stack's Top element is => %d", a);
                break;
        }
    }
}
