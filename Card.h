/***
 Header for card class
*/


class Card
{
    public:
    Card(unsigned int Face =0, unsigned int Suit=0);
    void print(void);   

    private:
    unsigned int face: 4;
    unsigned int suit: 2;
}

