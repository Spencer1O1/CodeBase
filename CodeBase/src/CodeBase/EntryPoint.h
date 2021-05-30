#pragma once

#ifdef CB_PLATFORM_WINDOWS

extern CodeBase::Application* CodeBase::CreateApplication();

int main(int argc, char** argv) {
	auto app = CodeBase::CreateApplication();
	app->Run();
	delete app;
}

#endif