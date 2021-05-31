#include "cbpch.h"
#include "Application.h"

#include "CodeBase/Events/ApplicationEvent.h"
#include "CodeBase/Log.h"

namespace CodeBase {

	Application::Application() {

	}

	Application::~Application() {

	}

	void Application::Run() {
		WindowResizeEvent e(1280, 720);
		CB_TRACE(e);

		while (true);
	}
}