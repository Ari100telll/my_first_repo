#pragma once
#include <iostream>

using namespace std;

class vectors
{
    private:
    int a[100];
    public:
        friend void input_matrix(vectors A[]);
        friend void sort_matrix(vectors A[]);
        friend void output_matrix(vectors A[]);
};
