


#include <iostream>
#include <cmath>
using namespace std;

class CAL_AREA {
protected:
    float rad;
    float hgt;

public:
    virtual ~CAL_AREA() {}

    virtual void getData() {
        cout << "Enter radius: ";
        cin >> rad;
    }

    virtual void displayVolume()  = 0;
};

class Cone : public CAL_AREA {
public:
    void getData()  {
        CAL_AREA::getData();
        cout << "Enter height of the cone: ";
        cin >> hgt;
    }

    void displayVolume()   {
        float volume = (1.0f / 3.0f) * M_PI * rad * rad * hgt;
        cout << "Volume of the cone: " << volume << " cubic units" << endl;
    }
};

class Hemisphere : public CAL_AREA {
public:
    void displayVolume()   {
        float volume = (2.0f / 3.0f) * M_PI * rad * rad * rad;
        cout << "Volume of the hemisphere: " << volume << " cubic units" << endl;
    }
};

class Cylinder : public CAL_AREA {
public:
    void getData()  {
        CAL_AREA::getData();
        cout << "Enter height of the cylinder: ";
        cin >> hgt;
    }

    void displayVolume()   {
        float volume = M_PI * rad * rad * hgt;
        cout << "Volume of the cylinder: " << volume << " cubic units" << endl;
    }
};

int main() {
    Cone cone;
    Hemisphere hemisphere;
    Cylinder cylinder;
    cout << "Enter details for Cone:" << endl;
    cone.getData();
    cout << "\nEnter details for Hemisphere:" << endl;
    hemisphere.getData();
    cout << "\nEnter details for Cylinder:" << endl;
    cylinder.getData();
    cout << endl;
    cone.displayVolume();
    hemisphere.displayVolume();
    cylinder.displayVolume();
    return 0;
}


