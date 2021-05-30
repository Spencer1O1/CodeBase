#pragma once

#include "Core.h"

namespace CodeBase {

	class CODEBASE_API Application {
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client
	Application* CreateApplication();
}


