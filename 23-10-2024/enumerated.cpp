#include<bits/stdc++.h>

using namespace std;

class En{
    public:
    void display() {
        enum shape {
            circle, rectangle, triangle
        };
        int code;
        cin>>code;
        while(code>=circle and code<=triangle) {
            switch (code)
            {
            case circle:
                cout << "Circle" << endl;
                break;
            case rectangle:
                cout << "Rectangle" <<endl;
                break;
            case  triangle:
                cout << "Triangle" << endl;
            default:
                break;
            }
            cin>>code;
        }

        cout << "Bye" << endl;
    }
};

int main() {

    En e;
    e.display();
}