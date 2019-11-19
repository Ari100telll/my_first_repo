#ifndef VECCTORSS_H
#define VECCTORSS_H


class Vecctorss
{
    public:
        friend void InputMatrix(Vecctorss a);
        friend void OutputMatrix(Vecctorss a[]);
        friend void SortMatrix(Vecctorss a[]);
        Vecctorss();
        virtual ~Vecctorss();

    protected:
    private:
        int a[100];
};

#endif // VECCTORSS_H
