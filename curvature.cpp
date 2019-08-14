namespace closed_curve{
    class Point{
        public:
        Point(double x, double y, double z);
        private:
        double x[3];
    }
    class Triangle{
        public:
        Triangle(Point a, Points b, Point c);
        std::shared_ptr<size_t> index() const;
        std::shared_ptr<double> normal() const;
        private:
        double normal[3];
        Point points[3];
        size_t index[3];
    }
    class Ring{
        public:
        Ring(Point center, vector<Point> edge);

        private:
        Point center;
        double normal[3];
        double curvature;


    }
    class Curve{
        public:
        Curve(vector<Point> points, vector<Triangle> triangles);
        private:
        vector<Point> point;
        vector<size_t> triangles;
        vector<Ring> rings;

    }
}