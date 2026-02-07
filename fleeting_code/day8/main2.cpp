
#include <iostream>
#include <fstream>
#include <vector>
#include <memory>
#include <sstream>
using namespace std;

class IDrawable {
public:
    virtual string draw() const = 0;
};

struct Style {
    string fillColor;
    string strokeColor;
    int strokeWidth;

    Style(const string& fill,const string& stroke,int width)
        : fillColor(fill), strokeColor(stroke), strokeWidth(width) {}

    string toSVG() const {
        return " fill='" + fillColor + "' stroke='" + strokeColor + "' stroke-width='" + to_string(strokeWidth) + "'";
    }
};

class Circle : public IDrawable {
    int cx, cy, r;
    Style style;

public:
    Circle(int cx, int cy, int r, const Style& style)
        : cx(cx), cy(cy), r(r), style(style) {}

    string draw() const override {
        ostringstream oss;
        oss << "<circle cx='" << cx
            << "' cy='" << cy
            << "' r='" << r << "'"
            << style.toSVG()
            << " />\n";
        return oss.str();
    }
};

class Rectangle : public IDrawable {
    int x, y, width, height;
    Style style;

public:
    Rectangle(int x, int y, int w, int h, const Style& style)
        : x(x), y(y), width(w), height(h), style(style) {}

    string draw() const override {
        ostringstream oss;
        oss << "<rect x='" << x
            << "' y='" << y
            << "' width='" << width
            << "' height='" << height << "'"
            << style.toSVG()
            << " />\n";
        return oss.str();
    }
};

class Group : public IDrawable {
    vector<unique_ptr<IDrawable>> children;

public:
    void add(unique_ptr<IDrawable> child) {
        children.push_back(move(child));
    }

    string draw() const override {
        string result = "<g>\n";
        for (const auto& child : children) {
            result += child->draw();
        }
        result += "</g>\n";
        return result;
    }
};

int main() {
    auto root = make_unique<Group>();
    auto robot = make_unique<Group>();

    Style redStyle("red", "black", 2);
    Style greyStyle("grey", "none", 0);

    // Head
    robot->add(make_unique<Circle>(100, 100, 30, redStyle));
    // Body
    robot->add(make_unique<Rectangle>(70, 130, 60, 100, greyStyle));

    // Add robot to root
    root->add(move(robot));

    ofstream file("pic.svg");
    file << "<svg width='500' height='500' \n";
    file << root->draw();
    file << "</svg>\n";
    file.close();

    return 0;
}
