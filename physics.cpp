#include <iostream>
#include <vector>
#include <string>

using namespace std;

class particle {
    public:
        double position = 0.0;
        double velocity = 0.0;
        double mass = 1.0;
        particle() {
            
        }
};

int main()
{
    particle newParticle;

    double force = 10.0;
    double acceleration = force / newParticle.mass;

    double time = 0.0;
    double deltaTime = 1.0;

    while (time <= 10) {
        cout << "Time = " << time << "\tPosition = " << newParticle.position << "\tVelocity = " << newParticle.velocity << "\n";
        newParticle.velocity += acceleration * deltaTime;
        newParticle.position += newParticle.velocity * deltaTime;
        time += deltaTime;
        
    }
}