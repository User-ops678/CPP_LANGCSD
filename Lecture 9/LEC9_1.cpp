#include "Graph.h"
#include "Point.h"
#include "Simple_window.h"
#include "GUI.h"
#include "std_lib_facilities.h"



int main() {
    using namespace Graph_lib;
    Point tl(100,200);
    Simple_window win(tl,600,400,"Canvas");

    Polygon poly;
    poly.add(Point(300,200));
    poly.add(Point(350,100));
    poly.add(Point(400,200));
    poly.set_color(Color::red);

    win.attach(poly);
    win.wait_for_button();
}