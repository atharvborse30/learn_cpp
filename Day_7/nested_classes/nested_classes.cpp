#include <iostream>
#include <vector>

class ParticleSystem{
    public:
    struct Particle{
        float x{0.0f};
        float y{0.0f};
        float z{0.0f};;
        float speed{1.0f};
        float lifetime{50.0f};
        void Move() { /* move particles */}
    };

    void Simulation() {
        for(size_t i=0; i < m_particles.size(); ++i){
            m_particles[i].Move();
        }
    }

    private:
        std::vector<Particle> m_particles;
};

int main() {
    ParticleSystem::Particle individualparticle;
    ParticleSystem p;
    p.Simulation();
    return 0;
}