#ifndef MATRIX_H
#define MATRIX_H
#include <assert.h>
#include <vector>
#include <Vector.h>


class Matrix
{
    public:
        //members
        int rows;
        int columns;

        //constructors
        Matrix();

        Matrix(int m, int n);

        //deconstuctor
        virtual ~Matrix();

        //methods
        void init();

        void setValue(int m, int n, int value);

        int getValue(int m , int n);

        Vector multiply(Vector&);

    protected:
        //members
        std::vector<int> arr;
};

#endif // MATRIX_H
