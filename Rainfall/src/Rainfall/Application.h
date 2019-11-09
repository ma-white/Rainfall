#pragma once

#include "Core.h"

namespace Rainfall {

	class RAINFALL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in a Client
	Application* CreateApplication();
}

