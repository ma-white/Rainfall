#include <Rainfall.h>

class Sandbox : public Rainfall::Application
{
public:
	Sandbox()
	{
	}

	~Sandbox()
	{
	}
};

Rainfall::Application* Rainfall::CreateApplication()
{
	return new Sandbox();
}