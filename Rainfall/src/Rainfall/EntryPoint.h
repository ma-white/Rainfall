#pragma once

#ifdef RF_PLATFORM_WINDOWS

extern Rainfall::Application* Rainfall::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Rainfall::CreateApplication();
	app->Run();
	delete app;
}

#endif