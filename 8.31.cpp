#include <iostream>
#include <vector>

using namespace std;

class RubiksCube {
public:
    RubiksCube() {
        for (int i = 0; i < 6; ++i) {
            faces.push_back(string(9, static_cast<char>('A' + i))); 
        }
    }

    void rotateClockwise(int faceIndex) {
        char temp = faces[faceIndex][0];
        faces[faceIndex][0] = faces[faceIndex][6];
        faces[faceIndex][6] = faces[faceIndex][8];
        faces[faceIndex][8] = faces[faceIndex][2];
        faces[faceIndex][2] = temp;

        temp = faces[faceIndex][1];
        faces[faceIndex][1] = faces[faceIndex][3];
        faces[faceIndex][3] = faces[faceIndex][7];
        faces[faceIndex][7] = faces[faceIndex][5];
        faces[faceIndex][5] = temp;
    }

    void printCube() const {
        for (const auto& face : faces) {
            for (char c : face) {
                cout << c << ' ';
            }
            cout << endl;
        }
    }

private:
    vector<string> faces;
};

int main() {
    RubiksCube cube;

    cout << "Initial Rubik's Cube:" << endl;
    cube.printCube();
    cout << endl;

    cout << "Rotating the front face clockwise:" << endl;
    cube.rotateClockwise(0);
    cube.printCube();

    return 0;
}
