#include<iostream>
#include<vector>

namespace pengfei {
	class Point {
	public:
		Point(double a, double b, double c) :x{ a, b, c } {};
	private:
		double x[3];
	};
	class Triangle {
	public:
		Triangle(Point a, Point b, Point c) :points{ a,b,c },_normal(new double[3]) {
			// 调用一个计算normal的函数
		};
		std::shared_ptr<double> normal() const {
			return _normal;
		};
	private:
		std::shared_ptr<double> _normal;
		Point points[3];
	};
	class Ring {
	public:
		Ring(Point center, std::vector<Point> edge) :
			_center(center),
			_edge(edge),
			_normal(new double[3]) {
			//把边上的点和
		};
	private:
		Point _center;
		std::vector<Point> _edge;
		std::vector<Triangle> _triangles;
		std::shared_ptr<double> _normal;
		double curvature;
	};
	/*class Curve {
	public:
		Curve(std::vector<Point> points, std::vector<Triangle> triangles);
	private:
		std::vector<Point> point;
		std::vector<size_t> triangles;
		std::vector<Ring> rings;

	};*/
}
int main() {
	pengfei::Point p(1, 1, 1);
	std::cout << "Hello world!" << std::endl;
}