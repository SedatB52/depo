#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 
#define STACKLIMIT 5
 
// ************ Muhammed Eminoglu ************
// *********www.algoritmauzmani.com***********
// *********www.muhammedeminoglu.com**********
 
//Stack veri yap�m�z� tutaca��m�z dizi
int stack[STACKLIMIT - 1];
//Stack'in en �zerindeki yani en son eklenmi� eleman�n� top de�i�keninde tutuyoruz
int top = -1;
 
//Y���n�n dolu olup olmad���n� kontrol eden yard�mc� fonksiyon
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
 
//Y���n�n bo� olup olmad���n� kontrol eden yard�mc� fonksiyon
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
 
//Y���na eleman ekleyen fonksiyon
void push(int item)
{
    bool control = checkFull();
    //E�er y���n dolu de�ilse
    if(control == false)
    {
        //top indisini bir art�r�yor ve dizinin bu indisine de�erimizi at�yoruz
        top = top + 1;
        stack[top] = item;
    }
    //E�er y���n dolu ise hata mesaj� d�nd�r�yoruz
    else
    {
        printf("\nStackoverflow!!! ... ");
    }
}
//Y���ndan eleman ��karak fonksiyon
void pop()
{
    bool control = checkEmpty();
    //E�er y���n bo� de�ilse...
    if(control == false)
    {
        //top indisini bir azalt�yoruz.
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
