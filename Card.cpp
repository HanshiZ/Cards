/**
Definitions for card class
*/

#include "Card.h"
#include <iostream>

using std:: cout;

Card::Card(unsigned int Face, unsigned int Suit)
{
   face = Face;
   suit = Suit;
}

void Card::print(void)
{
    if (face && face < 14)
    {
        if (face ==1) 
            cout << "Ace";
        else if (face == 11)
            cout << "Jack";
        else if (face==12)
            cout << "Queen";
        else if (face == 13)
            cout << "King";
        else cout << face;
        cout << " of ";
        if (suit == 0)
             cout << "Spades\n";
        if (suit == 1)
             cout << "Hearts\n";
        if (suit ==2)
             cout << "Clubs\n";
        if (suit==3)
             cout << "Diamonds\n";
    }
    else if (face == 14)
        cout << "Joker\n";
    else if (face ==15)
        cout << "Colored Joker\n";           
    else
       cout << "Uninitialized card\n" ;
} 