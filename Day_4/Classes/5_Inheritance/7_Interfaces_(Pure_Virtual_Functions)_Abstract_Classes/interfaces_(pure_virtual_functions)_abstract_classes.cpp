#include <iostream>

class IRenderer{
    public:
        // This is a pure virtual function
        virtual void Draw() = 0;
        virtual void Update() = 0;
        // as we added 0 to both functions by making them pure virtual functions
        // we have to mandatorily declare them in the base class, otherwise will 
        // get error

        // suppose if multiple teams are working on their own code then (e.g like OpenGL and Vulkan) then
        virtual void DrawOptimized() = 0;
};

class OpenGL : public IRenderer{
    public:
        void Draw() override{
            std::cout << "OpenGL::Draw\n";
        }
        void Update() override{
            std::cout << "OpenGL::Update\n";
        }
        void DrawOptimized() override {

        }
};

class Vulkan : public IRenderer{
    public:
        void Draw() override{
            std::cout << "Vulkan::Draw\n";
        }
        void Update() override{
            std::cout << "Vulkan::Update\n";
        }
        void DrawOptimized() override {

        }
};



int main() {

    // we cannot use
    // IRenderer* myRenderer = new IRenderer; line here
    // bcz we have created virtual void Draw() = 0 above which is a 
    // pure virtual function
    
    IRenderer* myRenderer = new Vulkan;
    myRenderer->Update();
    myRenderer->Draw();
    myRenderer->DrawOptimized();

    return 0;
}