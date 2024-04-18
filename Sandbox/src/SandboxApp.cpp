#include <Potato.h>

class Sandbox : public Potato::Application
{
public:
	Sandbox() {

	}
	~Sandbox() {

	}

private:

};


Potato::Application* Potato::CreateApplication() {
	return new Sandbox();
}