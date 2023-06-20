#ifndef POINT_H
#define POINT_H


class Point
{
    public:
        Point();
        Point(int abs,int ord);

        virtual ~Point();
        Point(const Point& other);
        Point& operator=(const Point& other);

        int getAbscisse();
        void setAbscisse(int val);
        int getOrdonnee();
        void setOrdonnee(int val);

    protected:

    private:
        int abscisse;
        int ordonnee;
};

#endif // POINT_H
