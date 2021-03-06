#ifndef MAGICSQUARE_H
#define MAGICSQUARE_H

#define SIZE_SQUARE 4

#include <vector>
using namespace std;

typedef vector< vector<int> > Square;

class MagicSquare
{
public:
    Square square;


    //public methods
    MagicSquare();
    MagicSquare(int);
    int calculateSum(int);
    void printSquare();
    long int mysrand();

private:
    vector<int> checkVector;
    int sizeSquare;
    void randomLoadSquare();
    bool numberIsSquare(int);

};

#endif // MAGICSQUARE_H
